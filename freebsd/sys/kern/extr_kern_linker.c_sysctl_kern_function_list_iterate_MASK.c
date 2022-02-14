
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {int dummy; } ;


 int FUNC_0 (struct sysctl_req*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, void *VAR_1)
{
 struct sysctl_req *VAR_2;

 VAR_2 = VAR_1;
 return (FUNC_0(VAR_2, VAR_0, FUNC_1(VAR_0) + 1));
}
