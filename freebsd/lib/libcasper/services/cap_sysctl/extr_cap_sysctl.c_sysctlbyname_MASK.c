
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int cap_channel_t ;


 int FUNC_0 (int *,int *,void*,size_t*,void const*,size_t) ;
 int FUNC_1 (int *,char*,char const*) ;
 int * FUNC_2 (int ) ;

int
FUNC_3(cap_channel_t *VAR_0, const char *VAR_1, void *VAR_2,
    size_t *VAR_3, const void *VAR_4, size_t VAR_5)
{
 nvlist_t *VAR_6;

 VAR_6 = FUNC_2(0);
 FUNC_1(VAR_6, "cmd", "sysctlbyname");
 FUNC_1(VAR_6, "name", VAR_1);
 return (FUNC_0(VAR_0, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5));
}
