
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {void* edited; void* skip; struct TYPE_3__* pb; } ;
typedef TYPE_1__ added_node_baton_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_1(added_node_baton_t *VAR_2,
                                  apr_pool_t *VAR_3)
{
  if (VAR_2->edited)
    return VAR_0;

  if (VAR_2->pb)
    {
      FUNC_0(FUNC_1(VAR_2->pb, VAR_3));

      if (VAR_2->pb->skip)
        VAR_2->skip = VAR_1;
    }

  VAR_2->edited = VAR_1;

  return VAR_0;
}
