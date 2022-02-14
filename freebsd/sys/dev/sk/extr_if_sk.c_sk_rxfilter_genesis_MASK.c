
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct sk_if_softc {struct ifnet* sk_ifp; } ;
struct TYPE_2__ {int member_1; int member_0; } ;
struct sk_add_maddr_genesis_ctx {int mode; int* hashes; TYPE_1__ member_1; struct sk_if_softc* member_0; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_if_softc*) ;
 int FUNC_1 (struct sk_if_softc*,int ) ;
 int FUNC_2 (struct sk_if_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct ifnet*,int ,struct sk_add_maddr_genesis_ctx*) ;
 int VAR_9 ;
 int FUNC_4 (struct sk_if_softc*,int *,int) ;

__attribute__((used)) static void
FUNC_5(struct sk_if_softc *VAR_10)
{
 struct ifnet *VAR_11 = VAR_10->sk_ifp;
 struct sk_add_maddr_genesis_ctx VAR_12 = { VAR_10, { 0, 0 } };
 int VAR_13;
 u_int16_t VAR_14[] = { 0, 0, 0 };

 FUNC_0(VAR_10);

 VAR_12.mode = FUNC_1(VAR_10, VAR_4);
 VAR_12.mode &= ~(VAR_5 | VAR_6 |
     VAR_7);

 for (VAR_13 = 1; VAR_13 < VAR_8; VAR_13++)
  FUNC_4(VAR_10, VAR_14, VAR_13);


 if (VAR_11->if_flags & VAR_0 || VAR_11->if_flags & VAR_1) {
  if (VAR_11->if_flags & VAR_0)
   VAR_12.mode |= VAR_6;
  if (VAR_11->if_flags & VAR_1)
   VAR_12.mode |= VAR_5;
  VAR_12.hashes[0] = 0xFFFFFFFF;
  VAR_12.hashes[1] = 0xFFFFFFFF;
 } else

  FUNC_3(VAR_11, VAR_9, &VAR_12);

 FUNC_2(VAR_10, VAR_4, VAR_12.mode);
 FUNC_2(VAR_10, VAR_2, VAR_12.hashes[0]);
 FUNC_2(VAR_10, VAR_3, VAR_12.hashes[1]);
}
