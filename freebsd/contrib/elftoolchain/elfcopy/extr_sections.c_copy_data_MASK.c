
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct section {int sz; int * buf; scalar_t__ nocopy; int os; int name; int is; } ;
struct TYPE_5__ {int d_align; int d_version; int d_size; int d_type; int * d_buf; scalar_t__ d_off; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*,int ) ;

void
FUNC_6(struct section *VAR_1)
{
 Elf_Data *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_1->nocopy && VAR_1->buf == ((void*)0))
  return;

 if ((VAR_2 = FUNC_2(VAR_1->is, ((void*)0))) == ((void*)0)) {
  (void) FUNC_1();
  if ((VAR_2 = FUNC_4(VAR_1->is, ((void*)0))) == ((void*)0)) {
   VAR_4 = FUNC_1();
   if (VAR_4 != 0)
    FUNC_5(VAR_0, "failed to read section:"
        " %s", VAR_1->name);
   return;
  }
 }

 if ((VAR_3 = FUNC_3(VAR_1->os)) == ((void*)0))
  FUNC_5(VAR_0, "elf_newdata() failed: %s",
      FUNC_0(-1));

 if (VAR_1->nocopy) {

  VAR_3->d_align = VAR_2->d_align;
  VAR_3->d_off = 0;
  VAR_3->d_buf = VAR_1->buf;
  VAR_3->d_type = VAR_2->d_type;
  VAR_3->d_size = VAR_1->sz;
  VAR_3->d_version = VAR_2->d_version;
 } else {
  VAR_3->d_align = VAR_2->d_align;
  VAR_3->d_off = VAR_2->d_off;
  VAR_3->d_buf = VAR_2->d_buf;
  VAR_3->d_type = VAR_2->d_type;
  VAR_3->d_size = VAR_2->d_size;
  VAR_3->d_version = VAR_2->d_version;
 }
 if (VAR_3->d_align == 0)
  VAR_3->d_align = 1;
}
