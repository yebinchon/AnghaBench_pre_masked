
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twe_softc {TYPE_1__* twe_drive; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ td_disk; } ;


 int FUNC_0 (struct twe_softc*) ;
 int FUNC_1 (struct twe_softc*) ;
 int FUNC_2 (struct twe_softc*) ;
 int FUNC_3 (struct twe_softc*) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 struct twe_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct twe_softc*) ;
 int FUNC_7 (struct twe_softc*,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
    struct twe_softc *VAR_2 = FUNC_5(VAR_1);
    int VAR_3, VAR_4 = 0;

    FUNC_4(4);




    FUNC_0(VAR_2);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
 if (VAR_2->twe_drive[VAR_3].td_disk != 0) {
     if ((VAR_4 = FUNC_7(VAR_2, VAR_3)) != 0) {
  FUNC_1(VAR_2);
  return (VAR_4);
     }
 }
    }
    FUNC_1(VAR_2);




    FUNC_2(VAR_2);
    FUNC_6(VAR_2);
    FUNC_3(VAR_2);

    return(0);
}
