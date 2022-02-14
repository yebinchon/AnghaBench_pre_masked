
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct preloaded_file {scalar_t__ f_addr; scalar_t__ f_size; struct preloaded_file* f_next; } ;


 struct preloaded_file* FUNC_0 (int *,int *) ;

__attribute__((used)) static vm_offset_t
FUNC_1(void)
{
 struct preloaded_file *VAR_0;
 vm_offset_t VAR_1 = 0;

 for (VAR_0 = FUNC_0(((void*)0), ((void*)0)); VAR_0 != ((void*)0); VAR_0 = VAR_0->f_next) {
  if (VAR_1 < (VAR_0->f_addr + VAR_0->f_size))
   VAR_1 = VAR_0->f_addr + VAR_0->f_size;
 }

 return (VAR_1);
}
