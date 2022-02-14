
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ar_name; } ;
typedef TYPE_1__ Elf_Arhdr ;


 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, Elf_Arhdr *VAR_2)
{

 VAR_0 = 0;
 if (VAR_2 != ((void*)0))
  (void) FUNC_0("%s   (ex %s):\n", VAR_2->ar_name, VAR_1);
 else
  (void) FUNC_0("%s  :\n", VAR_1);
 FUNC_2(3);
 FUNC_1();
 FUNC_3("section", 0);
 FUNC_3("size", 1);
 FUNC_3("addr", 2);
}
