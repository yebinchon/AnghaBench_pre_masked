
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_1, char *VAR_2, size_t VAR_3)
{
 if (VAR_3 == 0)
  return FUNC_4(VAR_2);

 if (FUNC_6(VAR_2[0]))
  return FUNC_0(VAR_2);

 if (VAR_2[0] == '-' && FUNC_6(VAR_2[1]))
  return FUNC_2(VAR_2);

 if (FUNC_5(VAR_2[0]))
  return FUNC_1(VAR_2);

 if (VAR_2[0] == '-' && FUNC_5(VAR_2[1]))
  return FUNC_3(VAR_2);

 return -VAR_0;
}
