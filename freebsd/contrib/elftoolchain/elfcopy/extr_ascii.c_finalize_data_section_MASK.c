
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct section {int sz; int buf; int align; int os; } ;
struct TYPE_3__ {int d_version; int d_size; int d_buf; scalar_t__ d_off; int d_align; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct section *VAR_2)
{
 Elf_Data *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2->os)) == ((void*)0))
  FUNC_2(VAR_1, "elf_newdata() failed: %s",
      FUNC_0(-1));
 VAR_3->d_align = VAR_2->align;
 VAR_3->d_off = 0;
 VAR_3->d_buf = VAR_2->buf;
 VAR_3->d_size = VAR_2->sz;
 VAR_3->d_version = VAR_0;
}
