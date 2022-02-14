
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int preinit_array_num; int path; scalar_t__ preinit_array; } ;
typedef int Elf_Addr ;


 int FUNC_0 (int ,TYPE_1__*,void*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*,int ,void*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
    Elf_Addr *VAR_2;
    int VAR_3;

    VAR_2 = (Elf_Addr *)VAR_1->preinit_array;
    if (VAR_2 == ((void*)0))
 return;

    for (VAR_3 = 0; VAR_3 < VAR_1->preinit_array_num; VAR_3++) {
 if (VAR_2[VAR_3] != 0 && VAR_2[VAR_3] != 1) {
     FUNC_2("calling preinit function for %s at %p", VAR_1->path,
       (void *)VAR_2[VAR_3]);
     FUNC_0(VAR_0, VAR_1, (void *)VAR_2[VAR_3],
       0, 0, VAR_1->path);
     FUNC_1(VAR_1, VAR_2[VAR_3]);
 }
    }
}
