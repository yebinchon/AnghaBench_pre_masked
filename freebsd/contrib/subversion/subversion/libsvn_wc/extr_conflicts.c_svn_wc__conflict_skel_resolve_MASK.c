
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* children; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__*) ;
 int * FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int*,TYPE_1__*) ;

svn_error_t *
FUNC_6(svn_boolean_t *VAR_5,
                              svn_skel_t *VAR_6,
                              svn_wc__db_t *VAR_7,
                              const char *VAR_8,
                              svn_boolean_t VAR_9,
                              const char *VAR_10,
                              svn_boolean_t VAR_11,
                              apr_pool_t *VAR_12,
                              apr_pool_t *VAR_13)
{
  svn_skel_t *VAR_14;
  svn_skel_t **VAR_15;
  FUNC_0(FUNC_2(&VAR_14, VAR_6));

  if (!VAR_14)
    return FUNC_3(VAR_0, ((void*)0),
                            FUNC_1("Not a completed conflict skel"));





  VAR_15 = &(VAR_6->children->next->children);
  while (*VAR_15)
    {
      svn_skel_t *VAR_16 = (*VAR_15)->children;

      if (VAR_9
          && FUNC_4(VAR_16, VAR_3))
        {

          *VAR_15 = (*VAR_15)->next;
          continue;
        }
      else if (VAR_10
               && FUNC_4(VAR_16, VAR_2))
        {
          svn_skel_t **VAR_17 = &(VAR_16->next->next->children);

          if (VAR_10[0] == '\0')
            *VAR_17 = ((void*)0);
          else
            while (*VAR_17)
              {
                if (FUNC_4(*VAR_17, VAR_10))
                  {
                    *VAR_17 = (*VAR_17)->next;
                    break;
                  }
                VAR_17 = &((*VAR_17)->next);
              }


          if (!VAR_16->next->next->children)
            {

             *VAR_15 = (*VAR_15)->next;
             continue;
            }
        }
      else if (VAR_11
               && FUNC_4(VAR_16, VAR_4))
        {

          *VAR_15 = (*VAR_15)->next;
          continue;
        }

      VAR_15 = &((*VAR_15)->next);
    }

  if (VAR_5)
    {

      svn_boolean_t VAR_18;
      FUNC_0(FUNC_5(&VAR_18,
                                                VAR_6));

      *VAR_5 = !VAR_18;
    }
  return VAR_1;
}
