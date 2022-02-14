
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_data {scalar_t__ note_ptr_fn; void* note_ptr_cookie; int type; scalar_t__ size; void* obj; } ;
typedef scalar_t__ gt_note_pointers ;
typedef enum gt_types_enum { ____Placeholder_gt_types_enum } gt_types_enum ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,void*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (void*) ;
 struct ptr_data* FUNC_5 (int,int) ;

int
FUNC_6 (void *VAR_3, void *VAR_4,
      gt_note_pointers VAR_5,
      enum gt_types_enum VAR_6)
{
  struct ptr_data **VAR_7;

  if (VAR_3 == ((void*)0) || VAR_3 == (void *) 1)
    return 0;

  VAR_7 = (struct ptr_data **)
    FUNC_3 (VAR_2, VAR_3, FUNC_0 (VAR_3),
         VAR_0);
  if (*VAR_7 != ((void*)0))
    {
      FUNC_1 ((*VAR_7)->note_ptr_fn == VAR_5
    && (*VAR_7)->note_ptr_cookie == VAR_4);
      return 0;
    }

  *VAR_7 = FUNC_5 (sizeof (struct ptr_data), 1);
  (*VAR_7)->obj = VAR_3;
  (*VAR_7)->note_ptr_fn = VAR_5;
  (*VAR_7)->note_ptr_cookie = VAR_4;
  if (VAR_5 == VAR_1)
    (*VAR_7)->size = FUNC_4 (VAR_3) + 1;
  else
    (*VAR_7)->size = FUNC_2 (VAR_3);
  (*VAR_7)->type = VAR_6;
  return 1;
}
