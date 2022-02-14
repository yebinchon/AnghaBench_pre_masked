
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct its_cmd {int dummy; } ;
struct gicv3_its_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct gicv3_its_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct gicv3_its_softc*,int ) ;
 scalar_t__ FUNC_4 (struct gicv3_its_softc*,struct its_cmd*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, struct its_cmd *VAR_2,
    struct its_cmd *VAR_3)
{
 struct gicv3_its_softc *VAR_4;
 uint64_t VAR_5, VAR_6, VAR_7;
 size_t VAR_8;

 VAR_4 = FUNC_1(VAR_1);






 VAR_8 = 1000000;

 VAR_5 = FUNC_4(VAR_4, VAR_2);
 VAR_6 = FUNC_4(VAR_4, VAR_3);

 for (;;) {
  VAR_7 = FUNC_3(VAR_4, VAR_0);
  if (VAR_5 < VAR_6) {
   if (VAR_7 < VAR_5 || VAR_7 >= VAR_6)
    break;
  } else if (VAR_7 < VAR_5 && VAR_7 >= VAR_6)
   break;

  if (VAR_8-- == 0) {

   FUNC_2(VAR_1,
       "Timeout while waiting for CMD completion.\n");
   return;
  }
  FUNC_0(1);
 }
}
