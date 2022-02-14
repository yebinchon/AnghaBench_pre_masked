
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * next; } ;
typedef TYPE_1__ xlate_handle_node_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static svn_error_t *
FUNC_5(xlate_handle_node_t *VAR_8,
                      const char *VAR_9,
                      apr_pool_t *VAR_10)
{
  FUNC_2(VAR_8->next == ((void*)0));
  if (!VAR_9)
    return VAR_0;


  if (VAR_6)
    {

      if (VAR_9 == VAR_1)
        VAR_8 = FUNC_3(&VAR_4, VAR_8);
      else if (VAR_9 == VAR_2)
        VAR_8 = FUNC_3(&VAR_5, VAR_8);
      if (VAR_8 == ((void*)0))
        return VAR_0;

      FUNC_0(VAR_7,
                           FUNC_4(VAR_8,
                                                          VAR_9));
    }
  else
    {

      FUNC_1(VAR_8, VAR_9, VAR_3, VAR_10);
    }

  return VAR_0;
}
