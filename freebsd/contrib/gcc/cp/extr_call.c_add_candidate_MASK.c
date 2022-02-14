
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct z_candidate {size_t num_convs; int viable; struct z_candidate* next; void* conversion_path; void* access_path; int ** convs; void* args; void* fn; } ;
typedef int conversion ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct z_candidate *
FUNC_1 (struct z_candidate **VAR_0,
        tree VAR_1, tree VAR_2,
        size_t VAR_3, conversion **VAR_4,
        tree VAR_5, tree VAR_6,
        int VAR_7)
{
  struct z_candidate *VAR_8 = (struct z_candidate *)
    FUNC_0 (sizeof (struct z_candidate));

  VAR_8->fn = VAR_1;
  VAR_8->args = VAR_2;
  VAR_8->convs = VAR_4;
  VAR_8->num_convs = VAR_3;
  VAR_8->access_path = VAR_5;
  VAR_8->conversion_path = VAR_6;
  VAR_8->viable = VAR_7;
  VAR_8->next = *VAR_0;
  *VAR_0 = VAR_8;

  return VAR_8;
}
