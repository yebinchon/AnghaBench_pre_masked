
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ valid; } ;
typedef TYPE_1__ xlate_handle_node_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 int FUNC_1 (void**,char const*,int *) ;
 TYPE_1__* FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__**,char const*,char const*,char const*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_4 (TYPE_1__**,char const*,char const*,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_5(xlate_handle_node_t **VAR_7,
                      const char *VAR_8, const char *VAR_9,
                      const char *VAR_10, apr_pool_t *VAR_11)
{
  xlate_handle_node_t *VAR_12 = ((void*)0);


  if (VAR_10)
    {
      if (VAR_5)
        {

          if (VAR_10 == VAR_1)
            VAR_12 = FUNC_2(&VAR_3, ((void*)0));
          else if (VAR_10 == VAR_2)
            VAR_12 = FUNC_2(&VAR_4, ((void*)0));

          if (VAR_12 && VAR_12->valid)
            {
              *VAR_7 = VAR_12;
              return VAR_0;
            }
        }
      else
        {
          void *VAR_13;

          FUNC_1(&VAR_13, VAR_10, VAR_11);
          VAR_12 = VAR_13;

          if (VAR_12 && VAR_12->valid)
            {
              *VAR_7 = VAR_12;
              return VAR_0;
            }

          return FUNC_4(VAR_7, VAR_8, VAR_9, VAR_11);
        }
    }

  FUNC_0(VAR_6,
                       FUNC_3(VAR_7,
                                                      VAR_8,
                                                      VAR_9,
                                                      VAR_10,
                                                      VAR_11));

  return VAR_0;
}
