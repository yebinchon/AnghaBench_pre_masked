
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* au_name; } ;
typedef TYPE_1__ au_user_ent_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(void)
{
 au_user_ent_t *VAR_0;

 while ((VAR_0 = FUNC_0()) != ((void*)0)) {
  FUNC_1("%s:", VAR_0->au_name);

  FUNC_1(":");

  FUNC_1("\n");
 }
}
