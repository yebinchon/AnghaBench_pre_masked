
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int*,size_t*,int *,int ) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
 int VAR_1, VAR_2;
 size_t VAR_3;

 VAR_3 = sizeof(int);
 VAR_2 = FUNC_0(VAR_0, &VAR_1, &VAR_3, ((void*)0), 0);
 if (VAR_2 < 0) {
  FUNC_1("sysctlbyname (%s)", VAR_0);
  return (-1);
 }

 return (VAR_1);
}
