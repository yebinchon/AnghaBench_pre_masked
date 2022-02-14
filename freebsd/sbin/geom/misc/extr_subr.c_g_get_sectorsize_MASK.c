
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int) ;

unsigned int
FUNC_3(const char *VAR_0)
{
 ssize_t VAR_1;
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, 0);
 if (VAR_2 == -1)
  return (0);
 VAR_1 = FUNC_2(VAR_2);
 if (VAR_1 == -1)
  VAR_1 = 0;
 (void)FUNC_0(VAR_2);
 return ((unsigned int)VAR_1);
}
