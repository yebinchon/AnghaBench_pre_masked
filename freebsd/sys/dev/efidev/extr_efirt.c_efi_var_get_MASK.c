
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uuid {int dummy; } ;
struct efirt_callinfo {int ec_argcnt; char* ec_name; uintptr_t ec_arg1; uintptr_t ec_arg2; uintptr_t ec_arg3; uintptr_t ec_arg4; uintptr_t ec_arg5; int ec_fptr; } ;
typedef int efi_char ;
typedef int ec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct efirt_callinfo*,int) ;
 int FUNC_2 (struct efirt_callinfo*) ;
 int * VAR_1 ;
 int VAR_2 ;

int
FUNC_3(efi_char *VAR_3, struct uuid *VAR_4, uint32_t *VAR_5,
    size_t *VAR_6, void *VAR_7)
{
 struct efirt_callinfo VAR_8;

 if (VAR_1 == ((void*)0))
  return (VAR_0);
 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8.ec_argcnt = 5;
 VAR_8.ec_name = "rt_getvar";
 VAR_8.ec_arg1 = (uintptr_t)VAR_3;
 VAR_8.ec_arg2 = (uintptr_t)VAR_4;
 VAR_8.ec_arg3 = (uintptr_t)VAR_5;
 VAR_8.ec_arg4 = (uintptr_t)VAR_6;
 VAR_8.ec_arg5 = (uintptr_t)VAR_7;
 VAR_8.ec_fptr = FUNC_0(VAR_2);
 return (FUNC_2(&VAR_8));
}
