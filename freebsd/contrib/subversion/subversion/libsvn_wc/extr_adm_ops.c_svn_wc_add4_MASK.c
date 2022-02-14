
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int (* svn_wc_notify_func2_t ) (void*,TYPE_1__*,int *) ;
struct TYPE_11__ {int * db; } ;
typedef TYPE_3__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char const*,scalar_t__,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__*,int *,char const*,char const*,int ,int *) ;
 int FUNC_5 (char const**,char const**,int *,char const*,int *,int *) ;
 int FUNC_6 (TYPE_3__*,char const*,int *) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 int FUNC_8 (void*,TYPE_1__*,int *) ;
 int FUNC_9 (char const*,int *) ;
 int * FUNC_10 (int ,int *,int ,char const*,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_11 (char const*,char const*,int *) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (char const*,char const*) ;
 char* FUNC_14 (char const*,char const*,int *) ;
 int FUNC_15 (int *,int *,int *,char const**,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_16 (int *,char const*,int ,int ,int ,int *,char const*,char const*,char const*,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_17 (int *,char const*,int ,int ,int *) ;
 int FUNC_18 (scalar_t__*,int *,char const*,int ,int *) ;
 int FUNC_19 (TYPE_3__*,char const*,int *,int *,int *,int *,char const*,int ,int ,void*,int *) ;
 TYPE_1__* FUNC_20 (char const*,int ,int *) ;
 int VAR_5 ;

svn_error_t *
FUNC_21(svn_wc_context_t *VAR_6,
            const char *VAR_7,
            svn_depth_t VAR_8,
            const char *VAR_9,
            svn_revnum_t VAR_10,
            svn_cancel_func_t VAR_11,
            void *VAR_12,
            svn_wc_notify_func2_t VAR_13,
            void *VAR_14,
            apr_pool_t *VAR_15)
{
  svn_wc__db_t *VAR_16 = VAR_6->db;
  svn_node_kind_t VAR_17;
  svn_boolean_t VAR_18;
  svn_boolean_t VAR_19;
  const char *VAR_20;
  const char *VAR_21;

  FUNC_0(FUNC_4(&VAR_17, &VAR_18, &VAR_19,
                             VAR_16, VAR_7, VAR_9, VAR_10,
                             VAR_15));



  FUNC_0(FUNC_5(&VAR_20, &VAR_21,
                                  VAR_16, VAR_7, VAR_15,
                                  VAR_15));



  if (VAR_9 && !FUNC_13(VAR_20, VAR_9))
    return FUNC_10(VAR_1, ((void*)0),
                             FUNC_1("The URL '%s' has a different repository "
                               "root than its parent"), VAR_9);


  if (VAR_19)
    {
      const char *VAR_22, *VAR_23, *VAR_24;
      const char *VAR_25;

      FUNC_0(FUNC_15(((void*)0), ((void*)0), ((void*)0), &VAR_22,
                                       &VAR_23,
                                       &VAR_24, ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                       ((void*)0),
                                       VAR_16, VAR_7,
                                       VAR_15, VAR_15));

      if (FUNC_7(VAR_24, VAR_21)
          || FUNC_7(VAR_20, VAR_23))
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_1("Can't schedule the working copy at '%s' "
                                   "from repository '%s' with uuid '%s' "
                                   "for addition under a working copy from "
                                   "repository '%s' with uuid '%s'."),
                                 FUNC_9(VAR_7,
                                                        VAR_15),
                                 VAR_23, VAR_24,
                                 VAR_20, VAR_21);

      VAR_25 = FUNC_11(VAR_20, VAR_22,
                                              VAR_15);

      if (FUNC_7(VAR_9, VAR_25))
        return FUNC_10(VAR_1, ((void*)0),
                                 FUNC_1("Can't add '%s' with URL '%s', but with "
                                   "the data from '%s'"),
                                 FUNC_9(VAR_7,
                                                        VAR_15),
                                 VAR_9, VAR_25);
    }

  if (!VAR_9)
    {
      FUNC_0(FUNC_2(VAR_16, VAR_7, VAR_17, ((void*)0),
                            VAR_15));
      if (VAR_17 == VAR_3 && !VAR_18)
        {





          svn_boolean_t VAR_26;

          FUNC_0(FUNC_18(&VAR_26, VAR_16, VAR_7,
                                              VAR_0, VAR_15));
          if (!VAR_26)
            FUNC_0(FUNC_17(VAR_16, VAR_7, 0, VAR_0,
                                             VAR_15));
        }
    }
  else if (!VAR_19)
    {
      if (VAR_17 == VAR_4)
        {





          svn_stream_t *VAR_27 = FUNC_12(VAR_15);

          FUNC_0(FUNC_19(VAR_6, VAR_7,
                                         VAR_27, ((void*)0), ((void*)0), ((void*)0),
                                         VAR_9, VAR_10,
                                         VAR_11, VAR_12,
                                         VAR_15));
        }
      else
        {
          const char *VAR_28 =
            FUNC_14(VAR_20, VAR_9, VAR_15);

          FUNC_0(FUNC_16(VAR_16, VAR_7,
                                         FUNC_3(VAR_15),
                                         VAR_10, 0, ((void*)0),
                                         VAR_28,
                                         VAR_20, VAR_21,
                                         VAR_10,
                                         ((void*)0) , VAR_8,
                                         VAR_0 ,
                                         ((void*)0) ,
                                         ((void*)0) ,
                                         VAR_15));
        }
    }
  else
    {
      FUNC_0(FUNC_6(VAR_6, VAR_7,
                                          VAR_15));
    }


  if (VAR_13 != ((void*)0))
    {
      svn_wc_notify_t *VAR_29 = FUNC_20(VAR_7,
                                                     VAR_5,
                                                     VAR_15);
      VAR_29->kind = VAR_17;
      (*VAR_13)(VAR_14, VAR_29, VAR_15);
    }

  return VAR_2;
}
