
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;

off_t
FUNC_3(const char *VAR_0)
{
 off_t VAR_1;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0, 0);
 if (VAR_2 == -1)
  return (0);
 VAR_1 = FUNC_1(VAR_2);
 if (VAR_1 == -1)
  VAR_1 = 0;
 (void)FUNC_0(VAR_2);
 return (VAR_1);
}
