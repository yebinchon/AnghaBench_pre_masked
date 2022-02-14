
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct ida_board {int board; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ida_board* VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct ida_board *
FUNC_3(device_t VAR_4)
{
 int VAR_5;
 u_int32_t VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4);
 VAR_7 = FUNC_1(VAR_4) << 16 | FUNC_2(VAR_4);

 if (VAR_6 == VAR_2 ||
     VAR_6 == VAR_0 ||
     VAR_6 == VAR_1) {
  for (VAR_5 = 0; VAR_3[VAR_5].board; VAR_5++)
   if (VAR_3[VAR_5].board == VAR_7)
    return (&VAR_3[VAR_5]);
 }
 return (((void*)0));
}
