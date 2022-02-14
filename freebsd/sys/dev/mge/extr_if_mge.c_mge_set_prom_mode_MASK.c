
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct mge_softc {TYPE_1__* ifp; } ;
struct TYPE_2__ {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct mge_softc*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct mge_softc*,int ,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct mge_softc*) ;

__attribute__((used)) static void
FUNC_6(struct mge_softc *VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8, VAR_9;


 if (VAR_5->ifp->if_flags & VAR_0) {
  VAR_7 = FUNC_3(VAR_5, VAR_2);
  VAR_7 |= VAR_4;
  FUNC_4(VAR_5, VAR_2, VAR_7);

  VAR_8 = ((1 | (VAR_6 << 1)) | (1 | (VAR_6 << 1)) << 8 |
     (1 | (VAR_6 << 1)) << 16 | (1 | (VAR_6 << 1)) << 24);

  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   FUNC_4(VAR_5, FUNC_1(VAR_9), VAR_8);
   FUNC_4(VAR_5, FUNC_0(VAR_9), VAR_8);
  }

  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   FUNC_4(VAR_5, FUNC_2(VAR_9), VAR_8);

 } else {
  VAR_7 = FUNC_3(VAR_5, VAR_2);
  VAR_7 &= ~VAR_4;
  FUNC_4(VAR_5, VAR_2, VAR_7);

  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   FUNC_4(VAR_5, FUNC_1(VAR_9), 0);
   FUNC_4(VAR_5, FUNC_0(VAR_9), 0);
  }

  FUNC_5(VAR_5);
 }
}
