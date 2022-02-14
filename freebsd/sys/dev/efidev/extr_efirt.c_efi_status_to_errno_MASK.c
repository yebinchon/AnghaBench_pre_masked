
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_long ;
typedef int efi_status ;


 int VAR_0 ;
 int* VAR_1 ;
 size_t FUNC_0 (int*) ;

__attribute__((used)) static int
FUNC_1(efi_status VAR_2)
{
 u_long VAR_3;

 VAR_3 = VAR_2 & 0x3ffffffffffffffful;
 return (VAR_3 < FUNC_0(VAR_1) ? VAR_1[VAR_3] : VAR_0);
}
