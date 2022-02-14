
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nsyms; } ;
struct file_info {TYPE_1__ dynsymtab; int elf; TYPE_1__ symtab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(struct file_info *VAR_2)
{

 VAR_2->symtab.nsyms = VAR_2->dynsymtab.nsyms = 0;
 (void)FUNC_0(VAR_2->elf, &VAR_2->symtab, VAR_1);
 (void)FUNC_0(VAR_2->elf, &VAR_2->dynsymtab, VAR_0);
}
