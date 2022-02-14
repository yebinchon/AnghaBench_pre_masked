
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {int num; } ;
struct data_reference {int dummy; } ;
struct data_dependence_relation {int dummy; } ;
typedef int FILE ;


 struct data_reference* FUNC_0 (struct data_dependence_relation*) ;
 scalar_t__ FUNC_1 (struct data_dependence_relation*) ;
 struct data_reference* FUNC_2 (struct data_dependence_relation*) ;
 int FUNC_3 (struct data_dependence_relation*,unsigned int) ;
 int FUNC_4 (struct data_dependence_relation*,unsigned int) ;
 int FUNC_5 (struct data_dependence_relation*) ;
 int FUNC_6 (struct data_dependence_relation*) ;
 unsigned int FUNC_7 (struct data_dependence_relation*) ;
 unsigned int FUNC_8 (struct data_dependence_relation*) ;
 unsigned int FUNC_9 (struct data_dependence_relation*) ;
 int FUNC_10 (struct data_dependence_relation*,unsigned int) ;
 int FUNC_11 (struct data_reference*,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_12 (int ,int ,unsigned int,struct loop*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,char*,...) ;
 int VAR_3 ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *,int ,int ) ;

void
FUNC_18 (FILE *VAR_4,
          struct data_dependence_relation *VAR_5)
{
  struct data_reference *VAR_6, *VAR_7;

  VAR_6 = FUNC_0 (VAR_5);
  VAR_7 = FUNC_2 (VAR_5);
  FUNC_14 (VAR_4, "(Data Dep: \n");
  if (FUNC_1 (VAR_5) == VAR_1)
    FUNC_14 (VAR_4, "    (don't know)\n");

  else if (FUNC_1 (VAR_5) == VAR_2)
    FUNC_14 (VAR_4, "    (no dependence)\n");

  else if (FUNC_1 (VAR_5) == VAR_0)
    {
      unsigned int VAR_8;
      struct loop *VAR_9;

      for (VAR_8 = 0; VAR_8 < FUNC_9 (VAR_5); VAR_8++)
 {
   FUNC_14 (VAR_4, "  access_fn_A: ");
   FUNC_16 (VAR_4, FUNC_11 (VAR_6, VAR_8), 0);
   FUNC_14 (VAR_4, "  access_fn_B: ");
   FUNC_16 (VAR_4, FUNC_11 (VAR_7, VAR_8), 0);
   FUNC_13 (VAR_4, FUNC_10 (VAR_5, VAR_8));
 }

      FUNC_14 (VAR_4, "  loop nest: (");
      for (VAR_8 = 0; FUNC_12 (VAR_3, FUNC_5 (VAR_5), VAR_8, VAR_9); VAR_8++)
 FUNC_14 (VAR_4, "%d ", VAR_9->num);
      FUNC_14 (VAR_4, ")\n");

      for (VAR_8 = 0; VAR_8 < FUNC_8 (VAR_5); VAR_8++)
 {
   FUNC_14 (VAR_4, "  distance_vector: ");
   FUNC_17 (VAR_4, FUNC_4 (VAR_5, VAR_8),
          FUNC_6 (VAR_5));
 }

      for (VAR_8 = 0; VAR_8 < FUNC_7 (VAR_5); VAR_8++)
 {
   FUNC_14 (VAR_4, "  direction_vector: ");
   FUNC_15 (VAR_4, FUNC_3 (VAR_5, VAR_8),
      FUNC_6 (VAR_5));
 }
    }

  FUNC_14 (VAR_4, ")\n");
}
