
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mps_softc {int mps_flags; int periodic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,void (*) (void*),struct mps_softc*) ;
 int VAR_6 ;
 int FUNC_1 (struct mps_softc*,int ,char*,int) ;
 int FUNC_2 (struct mps_softc*,int ) ;
 int FUNC_3 (struct mps_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_7)
{
 struct mps_softc *VAR_8;
 uint32_t VAR_9;

 VAR_8 = (struct mps_softc *)VAR_7;
 if (VAR_8->mps_flags & VAR_4)
  return;

 VAR_9 = FUNC_2(VAR_8, VAR_0);
 if ((VAR_9 & VAR_2) == VAR_1) {
  FUNC_1(VAR_8, VAR_3, "IOC Fault 0x%08x, Resetting\n", VAR_9);
  FUNC_3(VAR_8);
 }

 FUNC_0(&VAR_8->periodic, VAR_5 * VAR_6, FUNC_4, VAR_8);
}
