
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ac_class; char* ac_name; char* ac_desc; } ;
typedef TYPE_1__ au_class_ent_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 au_class_ent_t *VAR_0;

 while ((VAR_0 = FUNC_0()) != ((void*)0))
  FUNC_1("0x%08x:%s:%s\n", VAR_0->ac_class, VAR_0->ac_name,
      VAR_0->ac_desc);
}
