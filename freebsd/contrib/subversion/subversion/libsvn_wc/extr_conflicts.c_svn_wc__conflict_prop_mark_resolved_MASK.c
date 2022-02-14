
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char const* prop_name; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
struct TYPE_8__ {int db; } ;
typedef TYPE_3__ svn_wc_context_t ;
typedef int svn_wc_conflict_choice_t ;
typedef int svn_string_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (scalar_t__*,int ,char const*,int *,char const*,int ,int *,int const*,int *,int *,int *) ;
 int FUNC_2 (int **,int *,int *,int ,char const*,int *,int *) ;
 TYPE_1__* FUNC_3 (char const*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

svn_error_t *
FUNC_4(svn_wc_context_t *VAR_3,
                                    const char *VAR_4,
                                    const char *VAR_5,
                                    svn_wc_conflict_choice_t VAR_6,
                                    const svn_string_t *VAR_7,
                                    svn_wc_notify_func2_t VAR_8,
                                    void *VAR_9,
                                    apr_pool_t *VAR_10)
{
  svn_boolean_t VAR_11;
  svn_skel_t *VAR_12;

  FUNC_0(FUNC_2(&VAR_12, ((void*)0), ((void*)0),
                                   VAR_3->db, VAR_4,
                                   VAR_10, VAR_10));

  if (!VAR_12)
    return VAR_0;

  FUNC_0(FUNC_1(&VAR_11, VAR_3->db,
                                        VAR_4, VAR_12,
                                        VAR_5, VAR_6, ((void*)0), VAR_7,
                                        ((void*)0), ((void*)0), VAR_10));

  if (VAR_11 && VAR_8)
    {
      svn_wc_notify_t *VAR_13;


      if (VAR_5 == ((void*)0) || VAR_5[0] == '\0')
        {
          VAR_13 = FUNC_3(VAR_4,
                                        VAR_1,
                                        VAR_10);
        }
      else
        {
          VAR_13 = FUNC_3(VAR_4,
                                        VAR_2,
                                        VAR_10);
          VAR_13->prop_name = VAR_5;
        }

      VAR_8(VAR_9, VAR_13, VAR_10);
    }
  return VAR_0;
}
