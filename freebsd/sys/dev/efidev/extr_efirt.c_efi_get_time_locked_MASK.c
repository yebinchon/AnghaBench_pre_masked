
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efirt_callinfo {char* ec_name; int ec_argcnt; uintptr_t ec_arg1; uintptr_t ec_arg2; int ec_fptr; } ;
struct efi_tmcap {int dummy; } ;
struct efi_tm {int dummy; } ;
typedef int ec ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct efirt_callinfo*,int) ;
 int FUNC_3 (struct efirt_callinfo*) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct efi_tm *VAR_3, struct efi_tmcap *VAR_4)
{
 struct efirt_callinfo VAR_5;

 FUNC_1();
 if (VAR_1 == ((void*)0))
  return (VAR_0);
 FUNC_2(&VAR_5, sizeof(VAR_5));
 VAR_5.ec_name = "rt_gettime";
 VAR_5.ec_argcnt = 2;
 VAR_5.ec_arg1 = (uintptr_t)VAR_3;
 VAR_5.ec_arg2 = (uintptr_t)VAR_4;
 VAR_5.ec_fptr = FUNC_0(VAR_2);
 return (FUNC_3(&VAR_5));
}
