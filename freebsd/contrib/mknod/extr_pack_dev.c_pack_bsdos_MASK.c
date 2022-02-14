
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int portdev_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 char* VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static portdev_t
FUNC_7(int VAR_3, u_long VAR_4[], const char **VAR_5)
{
 portdev_t VAR_6 = 0;

 if (VAR_3 == 2) {
  VAR_6 = FUNC_3(VAR_4[0], VAR_4[1]);
  if ((u_long)FUNC_1(VAR_6) != VAR_4[0])
   *VAR_5 = VAR_0;
  if ((u_long)FUNC_4(VAR_6) != VAR_4[1])
   *VAR_5 = VAR_1;
 } else if (VAR_3 == 3) {
  VAR_6 = FUNC_2(VAR_4[0], VAR_4[1], VAR_4[2]);
  if ((u_long)FUNC_0(VAR_6) != VAR_4[0])
   *VAR_5 = VAR_0;
  if ((u_long)FUNC_6(VAR_6) != VAR_4[1])
   *VAR_5 = "invalid unit number";
  if ((u_long)FUNC_5(VAR_6) != VAR_4[2])
   *VAR_5 = "invalid subunit number";
 } else
  *VAR_5 = VAR_2;
 return (VAR_6);
}
