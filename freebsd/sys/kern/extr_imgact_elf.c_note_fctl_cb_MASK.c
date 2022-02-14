
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fctl_cb_arg {int * fctl0; } ;
typedef int boolean_t ;
struct TYPE_3__ {int n_namesz; } ;
typedef TYPE_1__ Elf_Note ;
typedef int Elf32_Word ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(const Elf_Note *VAR_2, void *VAR_3, boolean_t *VAR_4)
{
 struct fctl_cb_arg *VAR_5;
 const Elf32_Word *VAR_6;
 uintptr_t VAR_7;

 VAR_5 = VAR_3;
 VAR_7 = (uintptr_t)(VAR_2 + 1);
 VAR_7 += FUNC_0(VAR_2->n_namesz, VAR_0);
 VAR_6 = (const Elf32_Word *)VAR_7;
 *VAR_5->fctl0 = VAR_6[0];
 return (VAR_1);
}
