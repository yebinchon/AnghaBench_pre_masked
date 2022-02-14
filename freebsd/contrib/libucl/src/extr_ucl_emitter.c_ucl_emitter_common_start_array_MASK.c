
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* next; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct ucl_emitter_functions {int ud; int (* ucl_emitter_append_len ) (char*,int,int ) ;int (* ucl_emitter_append_character ) (char,int,int ) ;} ;
struct ucl_emitter_context {int indent; struct ucl_emitter_functions* func; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char,int,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (struct ucl_emitter_context*,TYPE_1__ const*,int,int,int) ;
 int FUNC_3 (int,struct ucl_emitter_context*,TYPE_1__ const*,int) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*,int **,int) ;

__attribute__((used)) static void
FUNC_5 (struct ucl_emitter_context *VAR_1,
  const ucl_object_t *VAR_2, bool VAR_3, bool VAR_4)
{
 const ucl_object_t *VAR_5;
 ucl_object_iter_t VAR_6 = ((void*)0);
 const struct ucl_emitter_functions *VAR_7 = VAR_1->func;
 bool VAR_8 = 1;

 FUNC_3 (VAR_3, VAR_1, VAR_2, VAR_4);

 if (VAR_4) {
  VAR_7->ucl_emitter_append_character ('[', 1, VAR_7->ud);
 }
 else {
  VAR_7->ucl_emitter_append_len ("[\n", 2, VAR_7->ud);
 }

 VAR_1->indent ++;

 if (VAR_2->type == VAR_0) {

  while ((VAR_5 = FUNC_4 (VAR_2, &VAR_6, 1)) != ((void*)0)) {
   FUNC_2 (VAR_1, VAR_5, VAR_8, 0, VAR_4);
   VAR_8 = 0;
  }
 }
 else {

  VAR_5 = VAR_2;
  while (VAR_5) {
   FUNC_2 (VAR_1, VAR_5, VAR_8, 0, VAR_4);
   VAR_8 = 0;
   VAR_5 = VAR_5->next;
  }
 }


}
