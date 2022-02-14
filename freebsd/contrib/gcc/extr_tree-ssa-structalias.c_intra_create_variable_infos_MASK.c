
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* varinfo_t ;
typedef scalar_t__ tree ;
struct constraint_expr {unsigned int var; scalar_t__ offset; void* type; } ;
struct TYPE_5__ {unsigned int id; int is_artificial_var; int is_heap_var; int is_unknown_size_var; int directly_dereferenced; struct TYPE_5__* next; } ;
typedef int DECL_EXTERNAL ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,char*) ;
 unsigned int FUNC_8 (scalar_t__,int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (scalar_t__) ;
 TYPE_1__* FUNC_10 (unsigned int) ;
 TYPE_1__* FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct constraint_expr,struct constraint_expr) ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_16 (int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_17 (void)
{
  tree VAR_10;
  struct constraint_expr VAR_11, VAR_12;
  varinfo_t VAR_13;



  for (VAR_10 = FUNC_0 (VAR_3); VAR_10; VAR_10 = FUNC_2 (VAR_10))
    {
      varinfo_t VAR_14;
      unsigned int VAR_15;

      if (!FUNC_5 (VAR_10))
 continue;

      VAR_15 = FUNC_11 (VAR_10)->id;




      if (FUNC_1 (FUNC_3 (VAR_10))
   && VAR_5 > 2)
 {
   varinfo_t VAR_16;
   tree VAR_17 = FUNC_13 (VAR_10);

   VAR_11.offset = 0;
   VAR_11.type = VAR_2;
   VAR_11.var = FUNC_11 (VAR_10)->id;

   if (VAR_17 == VAR_1)
     {
       VAR_17 = FUNC_7 (FUNC_3 (FUNC_3 (VAR_10)),
         "PARM_NOALIAS");
       DECL_EXTERNAL (VAR_18) = 1;
       if (VAR_8)
  FUNC_4 (VAR_18);
       FUNC_12 (VAR_10, VAR_18);
     }

   VAR_16 = FUNC_11 (VAR_17);
   VAR_16->is_artificial_var = 1;
   VAR_16->is_heap_var = 1;
   VAR_12.var = VAR_16->id;
   VAR_12.type = VAR_0;
   VAR_12.offset = 0;
          for (VAR_14 = FUNC_10 (VAR_11.var); VAR_14; VAR_14 = VAR_14->next)
     {
       struct constraint_expr VAR_19 = VAR_11;
       VAR_19.var = VAR_14->id;
       FUNC_16 (FUNC_15 (VAR_19, VAR_12));
     }
 }
      else
 {
   for (VAR_14 = FUNC_10 (VAR_15); VAR_14; VAR_14 = VAR_14->next)
     FUNC_14 (VAR_14);
 }
    }
  if (!VAR_6)
    VAR_6 = FUNC_6 (VAR_9);



  VAR_7 = FUNC_8 (VAR_6,
            FUNC_9 (VAR_6));
  VAR_13 = FUNC_10 (VAR_7);
  VAR_13->is_artificial_var = 1;
  VAR_13->is_heap_var = 1;
  VAR_13->is_unknown_size_var = 1;
  VAR_13->directly_dereferenced = 1;

  VAR_12.var = VAR_7;
  VAR_12.type = VAR_0;
  VAR_12.offset = 0;

  VAR_11.var = VAR_4;
  VAR_11.type = VAR_2;
  VAR_11.offset = 0;

  FUNC_16 (FUNC_15 (VAR_11, VAR_12));
}
