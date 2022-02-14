
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_tmcap {int dummy; } ;
struct efi_tm {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (struct efi_tm*,struct efi_tmcap*) ;
 int * VAR_1 ;

int
FUNC_3(struct efi_tm *VAR_2)
{
 struct efi_tmcap VAR_3;
 int VAR_4;

 if (VAR_1 == ((void*)0))
  return (VAR_0);
 FUNC_0();






 VAR_4 = FUNC_2(VAR_2, &VAR_3);
 FUNC_1();
 return (VAR_4);
}
