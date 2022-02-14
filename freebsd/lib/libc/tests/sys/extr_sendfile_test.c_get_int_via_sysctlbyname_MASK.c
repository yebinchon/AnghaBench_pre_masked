
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int_value ;


 int FUNC_0 (int,size_t,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1)
{
 size_t VAR_2;
 int VAR_3;

 VAR_2 = sizeof(VAR_3);

 FUNC_0(FUNC_2(VAR_1, &VAR_3, &VAR_2, ((void*)0), 0),
     0, "sysctlbyname(%s, ...) failed: %s", VAR_1, FUNC_1(VAR_0));
 FUNC_0(sizeof(VAR_3), VAR_2, "sanity check failed");

 return (VAR_3);
}
