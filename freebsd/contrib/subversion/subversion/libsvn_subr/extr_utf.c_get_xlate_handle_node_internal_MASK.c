
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; scalar_t__ valid; } ;
typedef TYPE_1__ xlate_handle_node_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 TYPE_1__** FUNC_1 (scalar_t__,char const*) ;
 int * FUNC_2 (TYPE_1__**,char const*,char const*,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_3(xlate_handle_node_t **VAR_2,
                               const char *VAR_3, const char *VAR_4,
                               const char *VAR_5, apr_pool_t *VAR_6)
{

  if (VAR_5 && VAR_1)
    {
      xlate_handle_node_t *VAR_7 = ((void*)0);


      xlate_handle_node_t **VAR_8 = FUNC_1(VAR_1,
                                                       VAR_5);
      if (VAR_8)
        VAR_7 = *VAR_8;
      if (VAR_7)
        {

          if (VAR_7->valid)
            {

              *VAR_8 = VAR_7->next;
              VAR_7->next = ((void*)0);
              *VAR_2 = VAR_7;
              return VAR_0;
            }
        }
    }





  VAR_6 = FUNC_0(VAR_1);

  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6);
}
