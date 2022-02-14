
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct section {scalar_t__ pad_sz; scalar_t__ sz; int os; int * pad; } ;
struct elfcopy {int fill; } ;
struct TYPE_7__ {int d_align; scalar_t__ d_off; scalar_t__ d_size; int d_version; int d_type; int * d_buf; } ;
struct TYPE_6__ {scalar_t__ sh_size; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int * FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct elfcopy *VAR_3, struct section *VAR_4)
{
 GElf_Shdr VAR_5;
 Elf_Data *VAR_6;

 if (VAR_4 == ((void*)0) || VAR_4->pad_sz == 0)
  return;

 if ((VAR_4->pad = FUNC_6(VAR_4->pad_sz)) == ((void*)0))
  FUNC_2(VAR_2, "malloc failed");
 FUNC_7(VAR_4->pad, VAR_3->fill, VAR_4->pad_sz);


 if ((VAR_6 = FUNC_1(VAR_4->os)) == ((void*)0))
  FUNC_3(VAR_2, "elf_newdata() failed: %s",
      FUNC_0(-1));
 VAR_6->d_align = 1;
 VAR_6->d_off = VAR_4->sz;
 VAR_6->d_buf = VAR_4->pad;
 VAR_6->d_type = VAR_0;
 VAR_6->d_size = VAR_4->pad_sz;
 VAR_6->d_version = VAR_1;


 if (FUNC_4(VAR_4->os, &VAR_5) == ((void*)0))
  FUNC_3(VAR_2, "gelf_getshdr() failed: %s",
      FUNC_0(-1));
 VAR_5.sh_size = VAR_4->sz + VAR_4->pad_sz;
 if (!FUNC_5(VAR_4->os, &VAR_5))
  FUNC_3(VAR_2, "elf_update_shdr failed: %s",
      FUNC_0(-1));
}
