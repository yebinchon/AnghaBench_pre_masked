
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct chrec_stats {int nb_undetermined; int nb_higher_poly; int nb_affine_multivar; int nb_affine; int nb_chrecs; } ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_6 (tree VAR_4, struct chrec_stats *VAR_5)
{
  if (VAR_2 && (VAR_3 & VAR_1))
    {
      FUNC_4 (VAR_2, "(classify_chrec ");
      FUNC_5 (VAR_2, VAR_4, 0);
      FUNC_4 (VAR_2, "\n");
    }

  VAR_5->nb_chrecs++;

  if (VAR_4 == VAR_0)
    {
      VAR_5->nb_undetermined++;
      return;
    }

  switch (FUNC_0 (VAR_4))
    {
    case 128:
      if (FUNC_3 (VAR_4))
 {
   if (VAR_2 && (VAR_3 & VAR_1))
     FUNC_4 (VAR_2, "  affine_univariate\n");
   VAR_5->nb_affine++;
 }
      else if (FUNC_2 (VAR_4))
 {
   if (VAR_2 && (VAR_3 & VAR_1))
     FUNC_4 (VAR_2, "  affine_multivariate\n");
   VAR_5->nb_affine_multivar++;
 }
      else
 {
   if (VAR_2 && (VAR_3 & VAR_1))
     FUNC_4 (VAR_2, "  higher_degree_polynomial\n");
   VAR_5->nb_higher_poly++;
 }

      break;

    default:
      break;
    }

  if (FUNC_1 (VAR_4))
    {
      if (VAR_2 && (VAR_3 & VAR_1))
 FUNC_4 (VAR_2, "  undetermined\n");
      VAR_5->nb_undetermined++;
    }

  if (VAR_2 && (VAR_3 & VAR_1))
    FUNC_4 (VAR_2, ")\n");
}
