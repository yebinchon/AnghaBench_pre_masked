
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int portdev_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 char* VAR_2 ;

__attribute__((used)) static portdev_t
FUNC_3(int VAR_3, u_long VAR_4[], const char **VAR_5)
{
 portdev_t VAR_6 = 0;

 if (VAR_3 == 2) {
  VAR_6 = FUNC_1(VAR_4[0], VAR_4[1]);
  if ((u_long)FUNC_0(VAR_6) != VAR_4[0])
   *VAR_5 = VAR_0;
  if ((u_long)FUNC_2(VAR_6) != VAR_4[1])
   *VAR_5 = VAR_1;
 } else
  *VAR_5 = VAR_2;
 return (VAR_6);
}
