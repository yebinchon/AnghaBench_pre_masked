
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct image_params {TYPE_1__* args; scalar_t__ image_header; } ;
typedef int boolean_t ;
struct TYPE_4__ {int e_flags; } ;
struct TYPE_3__ {int fname; } ;
typedef TYPE_2__ Elf_Ehdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__,int ) ;

__attribute__((used)) static boolean_t
FUNC_2(struct image_params *VAR_4)
{
 const Elf_Ehdr *VAR_5 = (const Elf_Ehdr *)VAR_4->image_header;




 if (FUNC_0(VAR_5->e_flags) < VAR_0) {
  if (VAR_3)
   FUNC_1("Attempting to execute non EABI binary (rev %d) image %s",
       FUNC_0(VAR_5->e_flags), VAR_4->args->fname);
  return (VAR_1);
 }
 return (VAR_2);
}
