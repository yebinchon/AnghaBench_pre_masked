
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,int *,int *) ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_status_t ;
typedef int svn_revnum_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*,int ,int ,int (*) (void*,int *,int *),void*,int ,void*,int *) ;
 int VAR_5 ;
 int FUNC_3 (char const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int ,char const*,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,int *,int ,char const*,int *) ;
 int FUNC_7 (int*,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,char const*,int *,int *) ;







 int FUNC_8 (scalar_t__*,scalar_t__*,int ,char const*,int ,int ,void*,int *) ;
 int FUNC_9 (int ,char const*,int ,void*,int *) ;
 int * FUNC_10 (char const*,int ,int *) ;
 int VAR_6 ;

svn_error_t *
FUNC_11(svn_wc_context_t *VAR_7,
               const char *VAR_8,
               svn_cancel_func_t VAR_9,
               void *VAR_10,
               svn_wc_notify_func2_t VAR_11,
               void *VAR_12,
               apr_pool_t *VAR_13)
{
  svn_boolean_t VAR_14, VAR_15;
  svn_wc__db_status_t VAR_16;
  svn_node_kind_t VAR_17;
  svn_revnum_t VAR_18;
  svn_depth_t VAR_19;
  svn_boolean_t VAR_20, VAR_21;
  const char *VAR_22, *VAR_23, *VAR_24;

  FUNC_0(FUNC_6(&VAR_14, &VAR_15, ((void*)0),
                                 VAR_7->db, VAR_8, VAR_13));

  if (VAR_14)
    {
       return FUNC_4(VAR_1, ((void*)0),
                                FUNC_1("Cannot exclude '%s': "
                                  "it is a working copy root"),
                                FUNC_3(VAR_8,
                                                       VAR_13));
    }
  if (VAR_15)
    {
      return FUNC_4(VAR_1, ((void*)0),
                               FUNC_1("Cannot exclude '%s': "
                                 "it is a switched path"),
                               FUNC_3(VAR_8,
                                                      VAR_13));
    }

  FUNC_0(FUNC_7(&VAR_16, &VAR_17, &VAR_18, &VAR_22,
                               &VAR_23, &VAR_24, ((void*)0), ((void*)0), ((void*)0),
                               &VAR_19, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0),
                               VAR_7->db, VAR_8,
                               VAR_13, VAR_13));

  switch (VAR_16)
    {
      case 128:
      case 132:
      case 129:
        return FUNC_4(VAR_2, ((void*)0),
                                 FUNC_1("The node '%s' was not found."),
                                 FUNC_3(VAR_8,
                                                        VAR_13));

      case 134:

        return FUNC_4(VAR_1, ((void*)0),
                                 FUNC_1("Cannot exclude '%s': it is to be added "
                                   "to the repository. Try commit instead"),
                                 FUNC_3(VAR_8,
                                                        VAR_13));
      case 133:

        return FUNC_4(VAR_1, ((void*)0),
                                 FUNC_1("Cannot exclude '%s': it is to be deleted "
                                   "from the repository. Try commit instead"),
                                 FUNC_3(VAR_8,
                                                        VAR_13));

      case 130:
      case 131:
      default:
        break;
    }

  FUNC_0(FUNC_8(&VAR_20, &VAR_21,
                                      VAR_7->db, VAR_8, VAR_0,
                                      VAR_9, VAR_10,
                                      VAR_13));

  if (!VAR_20 || VAR_21)
    {

      FUNC_0(FUNC_5(VAR_7->db, VAR_8,
                                     VAR_0 ,
                                     VAR_0, VAR_4,
                                     VAR_18,
                                     ((void*)0), ((void*)0),
                                     VAR_13));

      FUNC_0(FUNC_9(VAR_7->db, VAR_8,
                             VAR_9, VAR_10,
                             VAR_13));

      if (VAR_11)
        {
          svn_wc_notify_t *VAR_25;
          VAR_25 = FUNC_10(VAR_8,
                                        VAR_6,
                                        VAR_13);
          VAR_11(VAR_12, VAR_25, VAR_13);
        }
    }
  else
    {

      FUNC_0(FUNC_2(VAR_7->db, VAR_8, VAR_19, VAR_5,
                            VAR_11, VAR_12,
                            VAR_9, VAR_10,
                            VAR_13));
    }

  return VAR_3;
}
