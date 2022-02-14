
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_dependence_relation {int dummy; } ;
typedef int lambda_vector ;


 int FUNC_0 (struct data_dependence_relation*) ;
 scalar_t__ FUNC_1 (struct data_dependence_relation*) ;
 int FUNC_2 (struct data_dependence_relation*) ;
 int FUNC_3 (struct data_dependence_relation*,unsigned int) ;
 int FUNC_4 (struct data_dependence_relation*) ;
 unsigned int FUNC_5 (struct data_dependence_relation*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct data_dependence_relation*) ;
 int FUNC_7 (struct data_dependence_relation*,int ,int) ;
 int FUNC_8 (struct data_dependence_relation*,int ,int ,int ,int*,int*) ;
 int FUNC_9 (struct data_dependence_relation*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (scalar_t__,char*) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_16 (struct data_dependence_relation*) ;
 int FUNC_17 (struct data_dependence_relation*,int ) ;
 int FUNC_18 (struct data_dependence_relation*,int ,int ) ;

__attribute__((used)) static bool
FUNC_19 (struct data_dependence_relation *VAR_4)
{
  bool VAR_5 = 0;
  int VAR_6 = FUNC_4 (VAR_4);
  lambda_vector VAR_7;

  if (FUNC_1 (VAR_4) != VAR_0)
    return 1;

  if (FUNC_16 (VAR_4))
    {

      VAR_7 = FUNC_14 (FUNC_4 (VAR_4));
      FUNC_17 (VAR_4, VAR_7);

      if (FUNC_4 (VAR_4) > 1)
 FUNC_6 (VAR_4);

      return 1;
    }

  VAR_7 = FUNC_14 (FUNC_4 (VAR_4));
  if (!FUNC_8 (VAR_4, FUNC_0 (VAR_4), FUNC_2 (VAR_4),
        VAR_7, &VAR_5, &VAR_6))
    return 0;


  if (VAR_5)
    {
      if (!FUNC_13 (VAR_7, FUNC_4 (VAR_4)))
 {
   lambda_vector VAR_8 = FUNC_14 (FUNC_4 (VAR_4));
   FUNC_18 (VAR_4, FUNC_2 (VAR_4), FUNC_0 (VAR_4));
   FUNC_9 (VAR_4);
   FUNC_8 (VAR_4, FUNC_2 (VAR_4), FUNC_0 (VAR_4),
           VAR_8, &VAR_5, &VAR_6);
   FUNC_17 (VAR_4, VAR_8);
   if (FUNC_4 (VAR_4) > 1)
     {
        FUNC_7 (VAR_4, VAR_8, VAR_6);
       FUNC_7 (VAR_4, VAR_7, VAR_6);
     }
 }
      else
 {
   lambda_vector VAR_9 = FUNC_14 (FUNC_4 (VAR_4));
   FUNC_11 (VAR_7, VAR_9, FUNC_4 (VAR_4));
   FUNC_17 (VAR_4, VAR_9);

   if (FUNC_4 (VAR_4) > 1)
     {
       lambda_vector VAR_10 = FUNC_14 (FUNC_4 (VAR_4));

       FUNC_18 (VAR_4, FUNC_2 (VAR_4), FUNC_0 (VAR_4));
       FUNC_9 (VAR_4);
       FUNC_8 (VAR_4, FUNC_2 (VAR_4), FUNC_0 (VAR_4),
        VAR_10, &VAR_5, &VAR_6);

       FUNC_7 (VAR_4, VAR_7, VAR_6);
       FUNC_7 (VAR_4, VAR_10, VAR_6);
     }
 }
    }
  else
    {







      FUNC_7 (VAR_4, VAR_7,
      FUNC_12 (VAR_7,
         FUNC_4 (VAR_4), 0));
    }

  if (VAR_2 && (VAR_3 & VAR_1))
    {
      unsigned VAR_11;

      FUNC_10 (VAR_2, "(build_classic_dist_vector\n");
      for (VAR_11 = 0; VAR_11 < FUNC_5 (VAR_4); VAR_11++)
 {
   FUNC_10 (VAR_2, "  dist_vector = (");
   FUNC_15 (VAR_2, FUNC_3 (VAR_4, VAR_11),
          FUNC_4 (VAR_4));
   FUNC_10 (VAR_2, "  )\n");
 }
      FUNC_10 (VAR_2, ")\n");
    }

  return 1;
}
