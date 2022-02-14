
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* lambda_vector ;
typedef enum data_dependence_direction { ____Placeholder_data_dependence_direction } data_dependence_direction ;
typedef int FILE ;
 int FUNC_0 (int *,char*) ;

void
FUNC_1 (FILE *VAR_0,
   lambda_vector VAR_1,
   int VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      enum data_dependence_direction VAR_4 = VAR_1[VAR_3];

      switch (VAR_4)
 {
 case 131:
   FUNC_0 (VAR_0, "    +");
   break;
 case 133:
   FUNC_0 (VAR_0, "    -");
   break;
 case 134:
   FUNC_0 (VAR_0, "    =");
   break;
 case 130:
   FUNC_0 (VAR_0, "   +=");
   break;
 case 129:
   FUNC_0 (VAR_0, "   +-");
   break;
 case 132:
   FUNC_0 (VAR_0, "   -=");
   break;
 case 128:
   FUNC_0 (VAR_0, "    *");
   break;
 default:
   FUNC_0 (VAR_0, "indep");
   break;
 }
    }
  FUNC_0 (VAR_0, "\n");
}
