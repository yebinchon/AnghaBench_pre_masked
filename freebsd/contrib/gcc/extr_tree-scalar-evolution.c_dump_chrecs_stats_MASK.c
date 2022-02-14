
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chrec_stats {int nb_affine; int nb_affine_multivar; int nb_higher_poly; int nb_chrec_dont_know; int nb_chrecs; int nb_undetermined; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2 (FILE *VAR_3, struct chrec_stats *VAR_4)
{
  FUNC_0 (VAR_3, "\n(\n");
  FUNC_0 (VAR_3, "-----------------------------------------\n");
  FUNC_0 (VAR_3, "%d\taffine univariate chrecs\n", VAR_4->nb_affine);
  FUNC_0 (VAR_3, "%d\taffine multivariate chrecs\n", VAR_4->nb_affine_multivar);
  FUNC_0 (VAR_3, "%d\tdegree greater than 2 polynomials\n",
    VAR_4->nb_higher_poly);
  FUNC_0 (VAR_3, "%d\tchrec_dont_know chrecs\n", VAR_4->nb_chrec_dont_know);
  FUNC_0 (VAR_3, "-----------------------------------------\n");
  FUNC_0 (VAR_3, "%d\ttotal chrecs\n", VAR_4->nb_chrecs);
  FUNC_0 (VAR_3, "%d\twith undetermined coefficients\n",
    VAR_4->nb_undetermined);
  FUNC_0 (VAR_3, "-----------------------------------------\n");
  FUNC_0 (VAR_3, "%d\tchrecs in the scev database\n",
    (int) FUNC_1 (VAR_2));
  FUNC_0 (VAR_3, "%d\tsets in the scev database\n", VAR_1);
  FUNC_0 (VAR_3, "%d\tgets in the scev database\n", VAR_0);
  FUNC_0 (VAR_3, "-----------------------------------------\n");
  FUNC_0 (VAR_3, ")\n\n");
}
