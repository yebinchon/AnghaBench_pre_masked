
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_wc_conflict_reason_t ;
typedef int svn_wc_conflict_action_t ;
typedef int svn_wc__db_t ;
struct TYPE_5__ {int len; int data; struct TYPE_5__* next; struct TYPE_5__* children; } ;
typedef TYPE_1__ svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 char* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (TYPE_1__**,TYPE_1__ const*,int ) ;
 int VAR_6 ;
 int * FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char const**,int *,char const*,char const*,int *,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

svn_error_t *
FUNC_7(svn_wc_conflict_reason_t *VAR_10,
                                    svn_wc_conflict_action_t *VAR_11,
                                    const char **VAR_12,
                                    svn_wc__db_t *VAR_13,
                                    const char *VAR_14,
                                    const svn_skel_t *VAR_15,
                                    apr_pool_t *VAR_16,
                                    apr_pool_t *VAR_17)
{
  svn_skel_t *VAR_18;
  const svn_skel_t *VAR_19;
  svn_boolean_t VAR_20 = VAR_0;

  FUNC_0(FUNC_3(&VAR_18, VAR_15,
                                 VAR_4));

  if (!VAR_18)
    return FUNC_4(VAR_1, ((void*)0), FUNC_1("Conflict not set"));

  VAR_19 = VAR_18->children;

  VAR_19 = VAR_19->next;

  VAR_19 = VAR_19->next;

  {
    int VAR_21 = FUNC_5(VAR_6, VAR_19->data, VAR_19->len);

    if (VAR_10)
      {
        if (VAR_21 != VAR_3)
          *VAR_10 = VAR_21;
        else
          *VAR_10 = VAR_8;
      }

      VAR_20 = (VAR_21 == VAR_9);
    }
  VAR_19 = VAR_19->next;

  if (VAR_11)
    {
      int VAR_22 = FUNC_5(VAR_5, VAR_19->data, VAR_19->len);

      if (VAR_22 != VAR_3)
        *VAR_11 = VAR_22;
      else
        *VAR_11 = VAR_7;
    }

  VAR_19 = VAR_19->next;

  if (VAR_12)
    {

      if (VAR_19 && VAR_20)
        {
          const char *VAR_23
                            = FUNC_2(VAR_17, VAR_19->data, VAR_19->len);

          FUNC_0(FUNC_6(VAR_12,
                                          VAR_13, VAR_14,
                                          VAR_23,
                                          VAR_16, VAR_17));
        }
      else
        *VAR_12 = ((void*)0);
    }

  return VAR_2;
}
