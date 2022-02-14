
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_3__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef int svn_wc__db_status_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char const*,int ,int ,int ,void*,int ,void*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,int ) ;
 int * FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int*,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;







 int FUNC_9 (int *,char const*,int ,void*,int *) ;

svn_error_t *
FUNC_10(svn_wc_context_t *VAR_6,
                  const char *VAR_7,
                  svn_depth_t VAR_8,
                  svn_cancel_func_t VAR_9,
                  void *VAR_10,
                  svn_wc_notify_func2_t VAR_11,
                  void *VAR_12,
                  apr_pool_t *VAR_13)
{
  svn_wc__db_t *VAR_14 = VAR_6->db;
  svn_wc__db_status_t VAR_15;
  svn_node_kind_t VAR_16;
  svn_depth_t VAR_17;


  if (VAR_8 == VAR_4)
    return VAR_2;
  if (!(VAR_8 >= VAR_3 && VAR_8 < VAR_4))
    return FUNC_5(VAR_0, ((void*)0),
      FUNC_2("Can only crop a working copy with a restrictive depth"));

  FUNC_0(FUNC_8(&VAR_15, &VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), &VAR_17, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               VAR_14, VAR_7,
                               VAR_13, VAR_13));

  if (VAR_16 != VAR_5)
    return FUNC_5(VAR_0, ((void*)0),
      FUNC_2("Can only crop directories"));

  switch (VAR_15)
    {
      case 129:
      case 128:
        return FUNC_6(VAR_1, ((void*)0),
                                 FUNC_2("The node '%s' was not found."),
                                 FUNC_4(VAR_7,
                                                        VAR_13));

      case 133:
        return FUNC_6(VAR_0, ((void*)0),
                               FUNC_2("Cannot crop '%s': it is going to be removed "
                                 "from repository. Try commit instead"),
                               FUNC_4(VAR_7,
                                                      VAR_13));

      case 134:
        return FUNC_6(VAR_0, ((void*)0),
                                 FUNC_2("Cannot crop '%s': it is to be added "
                                   "to the repository. Try commit instead"),
                                 FUNC_4(VAR_7,
                                                        VAR_13));
      case 132:
        return VAR_2;

      case 130:
      case 131:
        break;

      default:
        FUNC_1();
    }

  FUNC_0(FUNC_3(VAR_14, VAR_7, VAR_17, VAR_8,
                        VAR_11, VAR_12,
                        VAR_9, VAR_10, VAR_13));

  return FUNC_7(FUNC_9(VAR_14, VAR_7,
                                        VAR_9, VAR_10,
                                        VAR_13));
}
