
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;


 int FUNC_0 (char*,char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 char *VAR_3 = VAR_0;

 (void) FUNC_0("%s [%llu,%llu) length %llu\n",
     VAR_3,
     (u_longlong_t)VAR_1,
     (u_longlong_t)(VAR_1 + VAR_2),
     (u_longlong_t)(VAR_2));
}
