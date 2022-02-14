
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ e_entry; } ;
typedef TYPE_1__ Elf64_Ehdr ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,int ,int ,int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
    void *VAR_4 = VAR_0;
    Elf64_Ehdr *VAR_5 = VAR_4;

    if (!FUNC_0(*VAR_5)) {
 FUNC_2("Invalid %s\n", "format");
 return;
    }
    FUNC_1((void *)VAR_5->e_entry, VAR_1, VAR_2, VAR_3);
}
