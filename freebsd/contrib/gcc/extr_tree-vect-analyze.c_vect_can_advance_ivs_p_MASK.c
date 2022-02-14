
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct loop {int num; int header; } ;
typedef int loop_vec_info ;
typedef int basic_block ;


 struct loop* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct loop*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (struct loop*,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_15 (loop_vec_info VAR_5)
{
  struct loop *VAR_6 = FUNC_0 (VAR_5);
  basic_block VAR_7 = VAR_6->header;
  tree VAR_8;



  if (FUNC_13 (VAR_1))
    FUNC_7 (VAR_3, "=== vect_can_advance_ivs_p ===");

  for (VAR_8 = FUNC_10 (VAR_7); VAR_8; VAR_8 = FUNC_1 (VAR_8))
    {
      tree VAR_9 = ((void*)0);
      tree VAR_10;

      if (FUNC_13 (VAR_1))
 {
          FUNC_7 (VAR_3, "Analyze phi: ");
          FUNC_11 (VAR_3, VAR_8, VAR_2);
 }




      if (!FUNC_9 (FUNC_3 (FUNC_2 (VAR_8))))
 {
   if (FUNC_13 (VAR_1))
     FUNC_7 (VAR_3, "virtual phi. skip.");
   continue;
 }



      if (FUNC_4 (FUNC_14 (VAR_8)) == VAR_4)
        {
          if (FUNC_13 (VAR_1))
            FUNC_7 (VAR_3, "reduc phi. skip.");
          continue;
        }



      VAR_9 = FUNC_8
 (VAR_6, FUNC_5 (VAR_6, FUNC_2 (VAR_8)));

      if (!VAR_9)
 {
   if (FUNC_13 (VAR_1))
     FUNC_7 (VAR_3, "No Access function.");
   return 0;
 }

      if (FUNC_13 (VAR_1))
        {
   FUNC_7 (VAR_3, "Access function of PHI: ");
   FUNC_11 (VAR_3, VAR_9, VAR_2);
        }

      VAR_10 = FUNC_6 (VAR_9, VAR_6->num);

      if (VAR_10 == VAR_0)
        {
   if (FUNC_13 (VAR_1))
     FUNC_7 (VAR_3, "No evolution.");
   return 0;
        }




      if (FUNC_12 (VAR_10))
 return 0;
    }

  return 1;
}
