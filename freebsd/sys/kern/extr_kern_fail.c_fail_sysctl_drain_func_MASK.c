
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sysctl_req*,char const*,int) ;

int
FUNC_1(void *VAR_1, const char *VAR_2, int VAR_3)
{
 struct sysctl_req *VAR_4;
 int VAR_5;

 VAR_4 = VAR_1;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);

 if (VAR_5 == VAR_0)
  return (-1);
 else
  return (VAR_3);
}
