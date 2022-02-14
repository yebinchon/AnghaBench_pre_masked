
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chrec_stats {scalar_t__ nb_undetermined; scalar_t__ nb_chrec_dont_know; scalar_t__ nb_higher_poly; scalar_t__ nb_affine_multivar; scalar_t__ nb_affine; scalar_t__ nb_chrecs; } ;



__attribute__((used)) static inline void
FUNC_0 (struct chrec_stats *VAR_0)
{
  VAR_0->nb_chrecs = 0;
  VAR_0->nb_affine = 0;
  VAR_0->nb_affine_multivar = 0;
  VAR_0->nb_higher_poly = 0;
  VAR_0->nb_chrec_dont_know = 0;
  VAR_0->nb_undetermined = 0;
}
