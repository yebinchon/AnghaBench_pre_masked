
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpr_softc {int mpr_flags; int periodic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,void (*) (void*),struct mpr_softc*) ;
 int VAR_8 ;
 int FUNC_1 (struct mpr_softc*,int ,char*,int) ;
 int FUNC_2 (struct mpr_softc*,int ) ;
 int FUNC_3 (struct mpr_softc*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_9)
{
 struct mpr_softc *VAR_10;
 uint32_t VAR_11;

 VAR_10 = (struct mpr_softc *)VAR_9;
 if (VAR_10->mpr_flags & VAR_6)
  return;

 VAR_11 = FUNC_2(VAR_10, VAR_2);
 if ((VAR_11 & VAR_4) == VAR_3) {
  if ((VAR_11 & VAR_1) ==
      VAR_0) {
   FUNC_4("TEMPERATURE FAULT: STOPPING.");
  }
  FUNC_1(VAR_10, VAR_5, "IOC Fault 0x%08x, Resetting\n", VAR_11);
  FUNC_3(VAR_10);
 }

 FUNC_0(&VAR_10->periodic, VAR_7 * VAR_8, FUNC_5, VAR_10);
}
