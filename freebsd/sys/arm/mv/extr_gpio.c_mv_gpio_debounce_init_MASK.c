
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mv_gpio_softc {int* debounce_counters; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int,int ) ;
 scalar_t__ FUNC_4 (int ,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, int VAR_4)
{
 uint8_t VAR_5;
 int *VAR_6;
 struct mv_gpio_softc *VAR_7;

 VAR_7 = (struct mv_gpio_softc *)FUNC_1(VAR_3);

 FUNC_0();

 VAR_6 = &VAR_7->debounce_counters[VAR_4];
 VAR_5 = (FUNC_4(VAR_3, VAR_4, 1) ? 1 : 0);
 if (VAR_5) {
  FUNC_3(VAR_3, VAR_4, 1, 0);
  *VAR_6 = VAR_1 / VAR_0;
 } else {
  FUNC_3(VAR_3, VAR_4, 0, 0);
  *VAR_6 = VAR_2 / VAR_0;
 }

 FUNC_2(VAR_3, VAR_4, VAR_5);

 return (0);
}
