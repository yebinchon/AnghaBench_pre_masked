
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* pattern_reserv_t ;
typedef TYPE_1__* decl_t ;
struct TYPE_7__ {size_t unit_num; int final_absence_list; int absence_list; int final_presence_list; int presence_list; } ;
struct TYPE_6__ {int units_num; int decls_num; TYPE_1__** decls; } ;
struct TYPE_5__ {scalar_t__ mode; } ;


 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 void** VAR_3 ;
 void** VAR_4 ;
 void** VAR_5 ;
 void** VAR_6 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  decl_t VAR_7;
  int VAR_8;

  FUNC_3 (&VAR_2, VAR_0->units_num * sizeof (pattern_reserv_t));
  VAR_6 = (pattern_reserv_t *) FUNC_2 (&VAR_2);
  (void) FUNC_4 (&VAR_2);
  FUNC_3 (&VAR_2, VAR_0->units_num * sizeof (pattern_reserv_t));
  VAR_5 = (pattern_reserv_t *) FUNC_2 (&VAR_2);
  (void) FUNC_4 (&VAR_2);
  FUNC_3 (&VAR_2, VAR_0->units_num * sizeof (pattern_reserv_t));
  VAR_3 = (pattern_reserv_t *) FUNC_2 (&VAR_2);
  (void) FUNC_4 (&VAR_2);
  FUNC_3 (&VAR_2, VAR_0->units_num * sizeof (pattern_reserv_t));
  VAR_4 = (pattern_reserv_t *) FUNC_2 (&VAR_2);
  (void) FUNC_4 (&VAR_2);

  for (VAR_8 = 0; VAR_8 < VAR_0->decls_num; VAR_8++)
    {
      VAR_7 = VAR_0->decls [VAR_8];
      if (VAR_7->mode == VAR_1)
 {
          VAR_6 [FUNC_0 (VAR_7)->unit_num]
     = FUNC_1 (FUNC_0 (VAR_7)->presence_list);
          VAR_5 [FUNC_0 (VAR_7)->unit_num]
     = FUNC_1 (FUNC_0 (VAR_7)->final_presence_list);
          VAR_3 [FUNC_0 (VAR_7)->unit_num]
     = FUNC_1 (FUNC_0 (VAR_7)->absence_list);
          VAR_4 [FUNC_0 (VAR_7)->unit_num]
     = FUNC_1 (FUNC_0 (VAR_7)->final_absence_list);
        }
    }
}
