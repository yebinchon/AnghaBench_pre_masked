
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efirt_callinfo {char* ec_name; int ec_argcnt; uintptr_t ec_arg1; uintptr_t ec_arg2; uintptr_t ec_arg3; uintptr_t ec_arg4; int ec_fptr; } ;
typedef enum efi_reset { ____Placeholder_efi_reset } efi_reset ;
typedef int ec ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct efirt_callinfo*,int) ;
 int FUNC_2 (struct efirt_callinfo*) ;
 int * VAR_2 ;
 int VAR_3 ;

int
FUNC_3(enum efi_reset VAR_4)
{
 struct efirt_callinfo VAR_5;

 switch (VAR_4) {
 case 130:
 case 128:
 case 129:
  break;
 default:
  return (VAR_0);
 }
 if (VAR_2 == ((void*)0))
  return (VAR_1);
 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5.ec_name = "rt_reset";
 VAR_5.ec_argcnt = 4;
 VAR_5.ec_arg1 = (uintptr_t)VAR_4;
 VAR_5.ec_arg2 = (uintptr_t)0;
 VAR_5.ec_arg3 = (uintptr_t)0;
 VAR_5.ec_arg4 = (uintptr_t)((void*)0);
 VAR_5.ec_fptr = FUNC_0(VAR_3);
 return (FUNC_2(&VAR_5));
}
