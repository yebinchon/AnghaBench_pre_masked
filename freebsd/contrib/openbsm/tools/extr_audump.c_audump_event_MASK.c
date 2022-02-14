
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ae_number; char* ae_name; char* ae_desc; int ae_class; } ;
typedef TYPE_1__ au_event_ent_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void)
{
 au_event_ent_t *VAR_0;

 while ((VAR_0 = FUNC_0()) != ((void*)0)) {
  FUNC_1("%d:%s:%s:", VAR_0->ae_number, VAR_0->ae_name, VAR_0->ae_desc);
  FUNC_2(VAR_0->ae_class);
  FUNC_1("\n");
 }
}
