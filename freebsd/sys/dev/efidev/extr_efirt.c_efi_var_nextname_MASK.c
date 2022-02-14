
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid {int dummy; } ;
struct efirt_callinfo {int ec_argcnt; char* ec_name; uintptr_t ec_arg1; uintptr_t ec_arg2; uintptr_t ec_arg3; int ec_fptr; } ;
typedef int efi_char ;
typedef int ec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct efirt_callinfo*,int) ;
 int FUNC_2 (struct efirt_callinfo*) ;
 int * VAR_1 ;
 int VAR_2 ;

int
FUNC_3(size_t *VAR_3, efi_char *VAR_4, struct uuid *VAR_5)
{
 struct efirt_callinfo VAR_6;

 if (VAR_1 == ((void*)0))
  return (VAR_0);
 FUNC_1(&VAR_6, sizeof(VAR_6));
 VAR_6.ec_argcnt = 3;
 VAR_6.ec_name = "rt_scanvar";
 VAR_6.ec_arg1 = (uintptr_t)VAR_3;
 VAR_6.ec_arg2 = (uintptr_t)VAR_4;
 VAR_6.ec_arg3 = (uintptr_t)VAR_5;
 VAR_6.ec_fptr = FUNC_0(VAR_2);
 return (FUNC_2(&VAR_6));
}
