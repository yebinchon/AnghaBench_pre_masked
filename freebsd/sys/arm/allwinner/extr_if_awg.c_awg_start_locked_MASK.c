
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int desc_map; int desc_tag; } ;
struct awg_softc {TYPE_1__ tx; int ifp; int link; } ;
typedef int if_t ;


 int FUNC_0 (struct awg_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct awg_softc*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct awg_softc*,int ,int) ;
 int FUNC_3 (struct awg_softc*,struct mbuf**) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,struct mbuf*) ;
 struct mbuf* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct mbuf*) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_10(struct awg_softc *VAR_7)
{
 struct mbuf *VAR_8;
 uint32_t VAR_9;
 if_t VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(VAR_7);

 if (!VAR_7->link)
  return;

 VAR_10 = VAR_7->ifp;

 if ((FUNC_7(VAR_10) & (VAR_5|VAR_4)) !=
     VAR_5)
  return;

 for (VAR_11 = 0; ; VAR_11++) {
  VAR_8 = FUNC_6(VAR_10);
  if (VAR_8 == ((void*)0))
   break;

  VAR_12 = FUNC_3(VAR_7, &VAR_8);
  if (VAR_12 != 0) {
   if (VAR_12 == VAR_3)
    FUNC_9(VAR_10, VAR_4, 0);
   if (VAR_8 != ((void*)0))
    FUNC_8(VAR_10, VAR_8);
   break;
  }
  FUNC_5(VAR_10, VAR_8);
 }

 if (VAR_11 != 0) {
  FUNC_4(VAR_7->tx.desc_tag, VAR_7->tx.desc_map,
      VAR_0|VAR_1);


  VAR_9 = FUNC_1(VAR_7, VAR_2);
  FUNC_2(VAR_7, VAR_2, VAR_9 | VAR_6);
 }
}
