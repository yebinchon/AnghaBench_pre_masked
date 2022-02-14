
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int builder_table_t ;
struct TYPE_4__ {scalar_t__ depth; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ builder_string_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(builder_table_t *VAR_0,
        builder_string_t **VAR_1,
        builder_string_t *VAR_2)
{
  apr_size_t VAR_3 = VAR_2->left ? VAR_2->left->depth + 1 : 0;
  apr_size_t VAR_4 = VAR_2->right ? VAR_2->right->depth + 1 : 0;

  if (VAR_3 > VAR_4 + 1)
    {
      builder_string_t *VAR_5 = VAR_2->left->right;
      VAR_2->left->right = VAR_2;
      *VAR_1 = VAR_2->left;
      VAR_2->left = VAR_5;

      --VAR_3;
    }
  else if (VAR_3 + 1 < VAR_4)
    {
      builder_string_t *VAR_6 = VAR_2->right->left;
      *VAR_1 = VAR_2->right;
      VAR_2->right->left = VAR_2;
      VAR_2->right = VAR_6;

      --VAR_4;
    }

  VAR_2->depth = FUNC_0(VAR_3, VAR_4);
}
