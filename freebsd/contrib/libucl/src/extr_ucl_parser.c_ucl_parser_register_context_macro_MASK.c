
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * ucl_context_macro_handler ;
struct ucl_parser {int macroes; } ;
struct TYPE_2__ {int * context_handler; } ;
struct ucl_macro {int is_context; int name; void* ud; TYPE_1__ h; } ;


 int FUNC_0 (int ,int ,int ,int ,struct ucl_macro*) ;
 struct ucl_macro* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct ucl_macro*,int ,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;

void
FUNC_5 (struct ucl_parser *VAR_1, const char *VAR_2,
  ucl_context_macro_handler VAR_3, void* VAR_4)
{
 struct ucl_macro *VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
  return;
 }

 VAR_5 = FUNC_1 (sizeof (struct ucl_macro));
 if (VAR_5 == ((void*)0)) {
  return;
 }

 FUNC_2 (VAR_5, 0, sizeof (struct ucl_macro));
 VAR_5->h.context_handler = VAR_3;
 VAR_5->name = FUNC_3 (VAR_2);
 VAR_5->ud = VAR_4;
 VAR_5->is_context = 1;
 FUNC_0 (VAR_0, VAR_1->macroes, VAR_5->name, FUNC_4 (VAR_5->name), VAR_5);
}
