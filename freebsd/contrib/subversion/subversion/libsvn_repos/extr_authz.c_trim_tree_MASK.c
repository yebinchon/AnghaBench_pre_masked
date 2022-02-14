
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_6__ {int sequence_number; } ;
struct TYPE_9__ {TYPE_1__ access; } ;
struct TYPE_8__ {TYPE_2__* pattern_sub_nodes; int sub_nodes; TYPE_5__ rights; } ;
typedef TYPE_3__ node_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int complex; int suffixes; int prefixes; TYPE_3__* any_var; TYPE_3__* any; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_3(node_t *VAR_3,
          int VAR_4,
          apr_pool_t *VAR_5)
{
  svn_boolean_t VAR_6 = VAR_2;


  if (!VAR_3)
    return VAR_2;


  if ( VAR_3->pattern_sub_nodes
      && VAR_3->pattern_sub_nodes->any_var
      && VAR_3->pattern_sub_nodes->any_var->rights.access.sequence_number
         > VAR_4)
    {
      VAR_4
        = VAR_3->pattern_sub_nodes->any_var->rights.access.sequence_number;
    }


  if (FUNC_0(&VAR_3->rights))
    {


      if (VAR_3->rights.access.sequence_number >= VAR_4)
        VAR_6 = VAR_0;
      else
         VAR_3->rights.access.sequence_number = VAR_1;
    }


  VAR_6 &= FUNC_2(&VAR_3->sub_nodes, VAR_4,
                                   VAR_5);

  if (VAR_3->pattern_sub_nodes)
    {
      if (FUNC_3(VAR_3->pattern_sub_nodes->any, VAR_4,
                    VAR_5))
        VAR_3->pattern_sub_nodes->any = ((void*)0);
      else
        VAR_6 = VAR_0;

      if (FUNC_3(VAR_3->pattern_sub_nodes->any_var, VAR_4,
                    VAR_5))
        VAR_3->pattern_sub_nodes->any_var = ((void*)0);
      else
        VAR_6 = VAR_0;

      VAR_6 &= FUNC_1(&VAR_3->pattern_sub_nodes->prefixes,
                                        VAR_4, VAR_5);
      VAR_6 &= FUNC_1(&VAR_3->pattern_sub_nodes->suffixes,
                                        VAR_4, VAR_5);
      VAR_6 &= FUNC_1(&VAR_3->pattern_sub_nodes->complex,
                                        VAR_4, VAR_5);


      if (VAR_6)
        VAR_3->pattern_sub_nodes = ((void*)0);
    }

  return VAR_6;
}
