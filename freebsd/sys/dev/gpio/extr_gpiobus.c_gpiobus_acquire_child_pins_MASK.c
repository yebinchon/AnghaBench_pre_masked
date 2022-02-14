
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiobus_ivar {int npins; int * pins; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gpiobus_ivar* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct gpiobus_ivar*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1, device_t VAR_2)
{
 struct gpiobus_ivar *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->npins; VAR_4++) {

  if (FUNC_4(VAR_1, VAR_3->pins[VAR_4]) != 0) {
   FUNC_3(VAR_2, "cannot acquire pin %d\n",
       VAR_3->pins[VAR_4]);
   while (--VAR_4 >= 0) {
    (void)FUNC_6(VAR_1,
        VAR_3->pins[VAR_4]);
   }
   FUNC_5(VAR_3);
   return (VAR_0);
  }
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->npins; VAR_4++) {

  FUNC_1(VAR_1, VAR_3->pins[VAR_4],
      FUNC_2(VAR_2));

 }
 return (0);
}
