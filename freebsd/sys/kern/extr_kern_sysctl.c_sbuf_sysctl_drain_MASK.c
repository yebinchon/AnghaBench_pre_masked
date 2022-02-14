
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sysctl_req*,char const*,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, const char *VAR_1, int VAR_2)
{
 struct sysctl_req *VAR_3 = VAR_0;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_4 >= 0, ("Got unexpected negative value %d", VAR_4));
 return (VAR_4 == 0 ? VAR_2 : -VAR_4);
}
