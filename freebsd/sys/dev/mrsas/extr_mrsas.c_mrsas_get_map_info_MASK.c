
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct mrsas_softc {int fast_path_io; } ;


 scalar_t__ FUNC_0 (struct mrsas_softc*) ;
 int FUNC_1 (struct mrsas_softc*) ;

__attribute__((used)) static int
FUNC_2(struct mrsas_softc *VAR_0)
{
 uint8_t VAR_1 = 0;

 VAR_0->fast_path_io = 0;
 if (!FUNC_1(VAR_0)) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 == 0) {
   VAR_0->fast_path_io = 1;
   return 0;
  }
 }
 return 1;
}
