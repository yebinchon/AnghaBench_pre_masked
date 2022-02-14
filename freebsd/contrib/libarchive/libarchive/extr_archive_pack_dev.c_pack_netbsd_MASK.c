
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 char* VAR_2 ;

__attribute__((used)) static dev_t
FUNC_3(int VAR_3, unsigned long VAR_4[], const char **VAR_5)
{
 dev_t VAR_6 = 0;

 if (VAR_3 == 2) {
  VAR_6 = FUNC_1(VAR_4[0], VAR_4[1]);
  if ((unsigned long)FUNC_0(VAR_6) != VAR_4[0])
   *VAR_5 = VAR_0;
  else if ((unsigned long)FUNC_2(VAR_6) != VAR_4[1])
   *VAR_5 = VAR_1;
 } else
  *VAR_5 = VAR_2;
 return (VAR_6);
}
