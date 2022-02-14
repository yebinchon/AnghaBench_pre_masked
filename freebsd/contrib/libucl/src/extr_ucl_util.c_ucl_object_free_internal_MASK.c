
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * ov; int * av; } ;
struct TYPE_14__ {scalar_t__ type; struct TYPE_14__* next; TYPE_1__ value; } ;
typedef TYPE_2__ ucl_object_t ;
typedef int (* ucl_object_dtor ) (TYPE_2__*) ;
typedef int ucl_hash_free_func ;
struct TYPE_15__ {unsigned int n; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_1 (int,TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_2 (TYPE_4__,unsigned int) ;
 int FUNC_3 (TYPE_4__) ;
 int FUNC_4 (int *,int ) ;
 TYPE_4__* VAR_2 ;

__attribute__((used)) static void
FUNC_5 (ucl_object_t *VAR_3, bool VAR_4, ucl_object_dtor VAR_5)
{
 ucl_object_t *VAR_6, *VAR_7;

 while (VAR_3 != ((void*)0)) {
  if (VAR_3->type == VAR_0) {
   FUNC_0 (VAR_2, VAR_3);
   unsigned int VAR_8;

   if (VAR_2 != ((void*)0)) {
    for (VAR_8 = 0; VAR_8 < VAR_2->n; VAR_8 ++) {
     VAR_7 = FUNC_2 (*VAR_2, VAR_8);
     if (VAR_7 != ((void*)0)) {
      VAR_6 = VAR_7;
      while (VAR_7) {
       VAR_6 = VAR_7->next;
       VAR_5 (VAR_7);
       VAR_7 = VAR_6;
      }
     }
    }
    FUNC_3 (*VAR_2);
    FUNC_1 (sizeof (*VAR_2), VAR_2);
   }
   VAR_3->value.av = ((void*)0);
  }
  else if (VAR_3->type == VAR_1) {
   if (VAR_3->value.ov != ((void*)0)) {
    FUNC_4 (VAR_3->value.ov, (ucl_hash_free_func)VAR_5);
   }
   VAR_3->value.ov = ((void*)0);
  }
  VAR_6 = VAR_3->next;
  VAR_5 (VAR_3);
  VAR_3 = VAR_6;

  if (!VAR_4) {
   break;
  }
 }
}
