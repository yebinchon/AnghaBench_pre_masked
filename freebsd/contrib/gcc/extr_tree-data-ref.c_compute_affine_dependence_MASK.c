
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data_reference {int dummy; } ;
struct data_dependence_relation {int dummy; } ;
struct TYPE_2__ {int num_dependence_undetermined; int num_dependence_tests; } ;


 struct data_reference* FUNC_0 (struct data_dependence_relation*) ;
 scalar_t__ FUNC_1 (struct data_dependence_relation*) ;
 struct data_reference* FUNC_2 (struct data_dependence_relation*) ;
 int FUNC_3 (struct data_reference*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct data_reference*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (scalar_t__,struct data_reference*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct data_dependence_relation*,int ) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (scalar_t__,int ,int ) ;
 int FUNC_9 (struct data_dependence_relation*) ;

__attribute__((used)) static void
FUNC_10 (struct data_dependence_relation *VAR_6)
{
  struct data_reference *VAR_7 = FUNC_0 (VAR_6);
  struct data_reference *VAR_8 = FUNC_2 (VAR_6);

  if (VAR_4 && (VAR_5 & VAR_1))
    {
      FUNC_7 (VAR_4, "(compute_affine_dependence\n");
      FUNC_7 (VAR_4, "  (stmt_a = \n");
      FUNC_8 (VAR_4, FUNC_3 (VAR_7), 0);
      FUNC_7 (VAR_4, ")\n  (stmt_b = \n");
      FUNC_8 (VAR_4, FUNC_3 (VAR_8), 0);
      FUNC_7 (VAR_4, ")\n");
    }


  if (FUNC_1 (VAR_6) == VAR_0)
    {
      VAR_3.num_dependence_tests++;

      if (FUNC_4 (VAR_7)
   && FUNC_4 (VAR_8))
 FUNC_9 (VAR_6);




      else
 {
   VAR_3.num_dependence_undetermined++;

   if (VAR_4 && (VAR_5 & VAR_1))
     {
       FUNC_7 (VAR_4, "Data ref a:\n");
       FUNC_5 (VAR_4, VAR_7);
       FUNC_7 (VAR_4, "Data ref b:\n");
       FUNC_5 (VAR_4, VAR_8);
       FUNC_7 (VAR_4, "affine dependence test not usable: access function not affine or constant.\n");
     }
   FUNC_6 (VAR_6, VAR_2);
 }
    }

  if (VAR_4 && (VAR_5 & VAR_1))
    FUNC_7 (VAR_4, ")\n");
}
