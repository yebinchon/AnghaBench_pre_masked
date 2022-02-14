
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef int cap_channel_t ;


 int * FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int*,void const*,size_t) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,char const*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *,char*,size_t*) ;

int
FUNC_8(cap_channel_t *VAR_1, const char *VAR_2, int *VAR_3,
    size_t *VAR_4)
{
 nvlist_t *VAR_5;
 const void *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_5 = FUNC_5(0);
 FUNC_4(VAR_5, "cmd", "sysctlnametomib");
 FUNC_4(VAR_5, "name", VAR_2);
 FUNC_3(VAR_5, "operation", 0);
 FUNC_3(VAR_5, "size", (uint64_t)*VAR_4);

 VAR_5 = FUNC_0(VAR_1, VAR_5);
 if (VAR_5 == ((void*)0))
  return (-1);
 VAR_8 = (int)FUNC_1(VAR_5, "error", 0);
 if (VAR_8 != 0) {
  FUNC_6(VAR_5);
  VAR_0 = VAR_8;
  return (-1);
 }

 VAR_6 = FUNC_7(VAR_5, "mib", &VAR_7);
 *VAR_4 = VAR_7 / sizeof(int);

 FUNC_2(VAR_3, VAR_6, VAR_7);

 FUNC_6(VAR_5);

 return (0);
}
