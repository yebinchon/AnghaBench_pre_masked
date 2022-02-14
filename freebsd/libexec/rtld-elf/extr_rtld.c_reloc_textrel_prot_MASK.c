
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ p_type; int p_flags; scalar_t__ p_vaddr; scalar_t__ p_filesz; } ;
struct TYPE_4__ {int phsize; int path; void* relocbase; TYPE_2__* phdr; } ;
typedef TYPE_1__ Obj_Entry ;
typedef TYPE_2__ Elf_Phdr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (void*,size_t,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(Obj_Entry *VAR_4, bool VAR_5)
{
 const Elf_Phdr *VAR_6;
 void *VAR_7;
 size_t VAR_8, VAR_9;
 int VAR_10;

 for (VAR_8 = VAR_4->phsize / sizeof(*VAR_6), VAR_6 = VAR_4->phdr; VAR_8 > 0;
     VAR_8--, VAR_6++) {
  if (VAR_6->p_type != VAR_2 || (VAR_6->p_flags & VAR_0) != 0)
   continue;
  VAR_7 = VAR_4->relocbase + FUNC_5(VAR_6->p_vaddr);
  VAR_9 = FUNC_3(VAR_6->p_vaddr + VAR_6->p_filesz) -
      FUNC_5(VAR_6->p_vaddr);
  VAR_10 = FUNC_1(VAR_6->p_flags) | (VAR_5 ? VAR_1 : 0);
  if (FUNC_2(VAR_7, VAR_9, VAR_10) == -1) {
   FUNC_0("%s: Cannot write-%sable text segment: %s",
       VAR_4->path, VAR_5 ? "en" : "dis",
       FUNC_4(VAR_3));
   return (-1);
  }
 }
 return (0);
}
