
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* unit_set_el_t ;
typedef int set_el_t ;
typedef void* reserv_sets_t ;
typedef TYPE_3__* decl_t ;
struct TYPE_11__ {size_t unit_num; TYPE_2__* excl_list; } ;
struct TYPE_10__ {int units_num; int decls_num; TYPE_3__** decls; } ;
struct TYPE_9__ {scalar_t__ mode; } ;
struct TYPE_8__ {TYPE_1__* unit_decl; struct TYPE_8__* next_unit_set_el; } ;
struct TYPE_7__ {int in_set_p; int unit_num; } ;


 TYPE_5__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (void*,int ) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (void*,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 void** VAR_6 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  decl_t VAR_7;
  reserv_sets_t VAR_8;
  unit_set_el_t VAR_9;
  int VAR_10;

  FUNC_4 (&VAR_5, VAR_3 * sizeof (set_el_t));
  VAR_4 = (reserv_sets_t) FUNC_3 (&VAR_5);
  (void) FUNC_5 (&VAR_5);
  FUNC_4 (&VAR_5, VAR_1->units_num * sizeof (reserv_sets_t));
  VAR_6 = (reserv_sets_t *) FUNC_3 (&VAR_5);
  (void) FUNC_5 (&VAR_5);

  for (VAR_10 = 0; VAR_10 < VAR_1->decls_num; VAR_10++)
    {
      VAR_7 = VAR_1->decls [VAR_10];
      if (VAR_7->mode == VAR_2)
 {
   FUNC_4 (&VAR_5, VAR_3 * sizeof (set_el_t));
   VAR_8 = (reserv_sets_t) FUNC_3 (&VAR_5);
   (void) FUNC_5 (&VAR_5);
   FUNC_2 (VAR_8, 0, VAR_3 * sizeof (set_el_t));
   for (VAR_9 = FUNC_0 (VAR_7)->excl_list;
        VAR_9 != ((void*)0);
        VAR_9 = VAR_9->next_unit_set_el)
     {
       FUNC_1 (VAR_8, VAR_9->unit_decl->unit_num);
       VAR_9->unit_decl->in_set_p = VAR_0;
     }
          VAR_6 [FUNC_0 (VAR_7)->unit_num] = VAR_8;
        }
    }
}
