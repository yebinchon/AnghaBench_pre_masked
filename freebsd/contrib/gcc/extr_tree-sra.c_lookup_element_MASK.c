
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* tree ;
struct sra_elt {int is_group; int n_copies; struct sra_elt* children; struct sra_elt* sibling; struct sra_elt* groups; void* element; int is_scalar; void* type; struct sra_elt* parent; } ;
typedef enum insert_option { ____Placeholder_insert_option } insert_option ;


 int FUNC_0 (void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,struct sra_elt*,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct sra_elt*,int ,int) ;
 int VAR_3 ;
 struct sra_elt* FUNC_7 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static struct sra_elt *
FUNC_8 (struct sra_elt *VAR_6, tree VAR_7, tree VAR_8,
  enum insert_option VAR_9)
{
  struct sra_elt VAR_10;
  struct sra_elt **VAR_11;
  struct sra_elt *VAR_12;

  if (VAR_6)
    VAR_10.parent = VAR_6->is_group ? VAR_6->parent : VAR_6;
  else
    VAR_10.parent = ((void*)0);
  VAR_10.element = VAR_7;

  VAR_11 = (struct sra_elt **) FUNC_4 (VAR_4, &VAR_10, VAR_9);
  if (!VAR_11 && VAR_9 == VAR_1)
    return ((void*)0);

  VAR_12 = *VAR_11;
  if (!VAR_12 && VAR_9 == VAR_0)
    {
      *VAR_11 = VAR_12 = FUNC_7 (&VAR_5, sizeof (*VAR_12));
      FUNC_6 (VAR_12, 0, sizeof (*VAR_12));

      VAR_12->parent = VAR_6;
      VAR_12->element = VAR_7;
      VAR_12->type = VAR_8;
      VAR_12->is_scalar = FUNC_5 (VAR_8);

      if (VAR_6)
 {
   if (FUNC_1 (VAR_12->element))
     {
       VAR_12->is_group = 1;
       VAR_12->sibling = VAR_6->groups;
       VAR_6->groups = VAR_12;
     }
   else
     {
       VAR_12->sibling = VAR_6->children;
       VAR_6->children = VAR_12;
     }
 }



      if (FUNC_2 (VAR_7) == VAR_2)
 {
   VAR_12->n_copies = 1;
   FUNC_3 (VAR_3, FUNC_0 (VAR_7));
 }
    }

  return VAR_12;
}
