
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int nvlist_t ;
typedef int cap_channel_t ;


 int FUNC_0 (int *,int *,void*,size_t*,void const*,size_t) ;
 int FUNC_1 (int *,char*,int const*,size_t) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 (int ) ;

int
FUNC_4(cap_channel_t *VAR_0, const int *VAR_1, u_int VAR_2, void *VAR_3,
    size_t *VAR_4, const void *VAR_5, size_t VAR_6)
{
 nvlist_t *VAR_7;

 VAR_7 = FUNC_3(0);
 FUNC_2(VAR_7, "cmd", "sysctl");
 FUNC_1(VAR_7, "mib", VAR_1, (size_t)VAR_2 * sizeof(int));
 return (FUNC_0(VAR_0, VAR_7, VAR_3, VAR_4, VAR_5, VAR_6));
}
