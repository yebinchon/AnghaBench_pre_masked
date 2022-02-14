
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct section {scalar_t__ sz; int is; int * buf; } ;
struct TYPE_6__ {scalar_t__ d_size; int * d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (char) ;

__attribute__((used)) static void
FUNC_7(struct section *VAR_1)
{
 Elf_Data *VAR_2;
 int VAR_3;

 if (VAR_1->buf != ((void*)0) && VAR_1->sz > 0) {
  FUNC_5(VAR_1->buf, VAR_1->sz);
 } else {
  VAR_2 = ((void*)0);
  while ((VAR_2 = FUNC_2(VAR_1->is, VAR_2)) != ((void*)0) ||
      (VAR_2 = FUNC_3(VAR_1->is, VAR_2)) != ((void*)0)) {
   (void) FUNC_1();
   FUNC_5(VAR_2->d_buf, VAR_2->d_size);
  }
  VAR_3 = FUNC_1();
  if (VAR_3 != 0)
   FUNC_4(VAR_0, "elf_getdata() failed: %s",
       FUNC_0(VAR_3));
 }
 FUNC_6('\n');
}
