
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_error_t ;
struct TYPE_3__ {struct TYPE_3__* parent; int node; } ;
typedef TYPE_1__ parent_path_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,char const*,int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(parent_path_t *VAR_1,
                               apr_int64_t VAR_2,
                               const char *VAR_3,
                               trail_t *VAR_4,
                               apr_pool_t *VAR_5)
{
  apr_pool_t *VAR_6;
  parent_path_t *VAR_7 = VAR_1;

  if (VAR_2 == 0)
    return VAR_0;

  VAR_6 = FUNC_3(VAR_5);

  while (VAR_7)
    {
      FUNC_2(VAR_6);
      FUNC_0(FUNC_1(VAR_7->node, VAR_2,
                                                      VAR_3, VAR_4,
                                                      VAR_6));
      VAR_7 = VAR_7->parent;
    }
  FUNC_4(VAR_6);

  return VAR_0;
}
