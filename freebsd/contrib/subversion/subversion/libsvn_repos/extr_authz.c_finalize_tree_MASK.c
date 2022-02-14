
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int rights; } ;
struct TYPE_15__ {int max_rights; int min_rights; TYPE_1__ access; } ;
struct TYPE_14__ {TYPE_2__* pattern_sub_nodes; int sub_nodes; TYPE_4__ rights; } ;
typedef TYPE_3__ node_t ;
typedef TYPE_4__ limited_rights_t ;
typedef int apr_pool_t ;
struct TYPE_13__ {int suffixes; int prefixes; int complex; TYPE_3__* any_var; TYPE_3__* any; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (int ,TYPE_4__*,int *) ;
 int FUNC_2 (int ,TYPE_4__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(node_t *VAR_2,
              limited_rights_t *VAR_3,
              apr_pool_t *VAR_4)
{
  limited_rights_t *VAR_5 = &VAR_2->rights;


  if (!VAR_2)
    return;


  if (FUNC_3(VAR_5))
    {
      VAR_5->max_rights = VAR_5->access.rights;
      VAR_5->min_rights = VAR_5->access.rights;
    }
  else
    {
      VAR_5->min_rights = VAR_1;
      VAR_5->max_rights = VAR_0;
    }


  FUNC_2(VAR_2->sub_nodes, VAR_5, VAR_4);

  if (VAR_2->pattern_sub_nodes)
    {
      FUNC_5(VAR_2->pattern_sub_nodes->any, VAR_5, VAR_4);
      FUNC_5(VAR_2->pattern_sub_nodes->any_var, VAR_5, VAR_4);

      FUNC_1(VAR_2->pattern_sub_nodes->prefixes, VAR_5,
                             VAR_4);
      FUNC_1(VAR_2->pattern_sub_nodes->suffixes, VAR_5,
                             VAR_4);
      FUNC_1(VAR_2->pattern_sub_nodes->complex, VAR_5,
                             VAR_4);


      FUNC_4(VAR_2->pattern_sub_nodes->prefixes);
      FUNC_4(VAR_2->pattern_sub_nodes->suffixes);
    }



  FUNC_0(VAR_3, VAR_5);
}
