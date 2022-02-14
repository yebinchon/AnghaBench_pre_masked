
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_9;

 FUNC_1(VAR_6);
 FUNC_2();


 if (FUNC_3() == 1) {
  FUNC_4();
  return;
 }

 if (VAR_4 != -1)
  FUNC_0(VAR_4, VAR_6);

 FUNC_5(VAR_0, VAR_6);

 if (VAR_5) {
  for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   if (VAR_5[VAR_9])
    FUNC_5(VAR_5[VAR_9],
           VAR_6);
 }

 if (VAR_1) {
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
   if (VAR_1[VAR_9])
    FUNC_5(VAR_1[VAR_9],
           VAR_6);
 }

 if (VAR_8)
  FUNC_5(VAR_8, VAR_6);

 if (VAR_7)
  FUNC_5(VAR_7, VAR_6);

 if (VAR_4 == -1)
  VAR_4 = FUNC_3() - 1;
 else
  VAR_4--;

 FUNC_4();
}
