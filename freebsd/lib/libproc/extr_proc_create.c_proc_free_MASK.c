
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nsyms; struct proc_handle* index; } ;
struct TYPE_3__ {scalar_t__ nsyms; struct proc_handle* index; } ;
struct proc_handle {size_t nmappings; scalar_t__ refs; scalar_t__ maparrsz; int * rdap; int * procstat; struct proc_handle* mappings; TYPE_2__ dynsymtab; TYPE_1__ symtab; int fd; int * elf; struct proc_handle* file; } ;
struct file_info {size_t nmappings; scalar_t__ refs; scalar_t__ maparrsz; int * rdap; int * procstat; struct file_info* mappings; TYPE_2__ dynsymtab; TYPE_1__ symtab; int fd; int * elf; struct file_info* file; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct proc_handle*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct proc_handle *VAR_0)
{
 struct file_info *VAR_1;
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nmappings; VAR_2++) {
  VAR_1 = VAR_0->mappings[VAR_2].file;
  if (VAR_1 != ((void*)0) && --VAR_1->refs == 0) {
   if (VAR_1->elf != ((void*)0)) {
    (void)FUNC_1(VAR_1->elf);
    (void)FUNC_0(VAR_1->fd);
    if (VAR_1->symtab.nsyms > 0)
     FUNC_2(VAR_1->symtab.index);
    if (VAR_1->dynsymtab.nsyms > 0)
     FUNC_2(VAR_1->dynsymtab.index);
   }
   FUNC_2(VAR_1);
  }
 }
 if (VAR_0->maparrsz > 0)
  FUNC_2(VAR_0->mappings);
 if (VAR_0->procstat != ((void*)0))
  FUNC_3(VAR_0->procstat);
 if (VAR_0->rdap != ((void*)0))
  FUNC_4(VAR_0->rdap);
 FUNC_2(VAR_0);
}
