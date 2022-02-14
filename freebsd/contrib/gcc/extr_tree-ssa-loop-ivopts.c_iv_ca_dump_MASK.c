
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivopts_data {unsigned int max_inv_id; } ;
struct iv_ca {scalar_t__* n_invariant_uses; int cands; } ;
typedef int FILE ;


 int FUNC_0 (int *,int ,char*,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct iv_ca*) ;

__attribute__((used)) static void
FUNC_3 (struct ivopts_data *VAR_0, FILE *VAR_1, struct iv_ca *VAR_2)
{
  const char *VAR_3 = "  invariants ";
  unsigned VAR_4;

  FUNC_1 (VAR_1, "  cost %d\n", FUNC_2 (VAR_2));
  FUNC_0 (VAR_1, VAR_2->cands, "  candidates ","\n");

  for (VAR_4 = 1; VAR_4 <= VAR_0->max_inv_id; VAR_4++)
    if (VAR_2->n_invariant_uses[VAR_4])
      {
 FUNC_1 (VAR_1, "%s%d", VAR_3, VAR_4);
 VAR_3 = ", ";
      }
  FUNC_1 (VAR_1, "\n");
}
