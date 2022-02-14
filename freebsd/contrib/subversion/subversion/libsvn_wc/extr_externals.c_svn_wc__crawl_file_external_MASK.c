
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_24__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
struct TYPE_25__ {int * token; } ;
typedef TYPE_2__ svn_wc__db_lock_t ;
typedef int svn_revnum_t ;
struct TYPE_26__ {TYPE_4__* (* finish_report ) (void*,int *) ;TYPE_4__* (* link_path ) (void*,char*,int ,int ,int ,int ,int *,int *) ;TYPE_4__* (* set_path ) (void*,char*,int ,int ,int ,int *,int *) ;TYPE_4__* (* delete_path ) (void*,char*,int *) ;} ;
typedef TYPE_3__ svn_ra_reporter3_t ;
typedef scalar_t__ svn_node_kind_t ;
struct TYPE_27__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_4__* FUNC_1 (void*,char*,int ,int ,int ,int *,int *) ;
 TYPE_4__* FUNC_2 (void*,char*,int *) ;
 TYPE_4__* FUNC_3 (void*,int *) ;
 TYPE_4__* FUNC_4 (void*,char*,int ,int ,int ,int *,int *) ;
 TYPE_4__* FUNC_5 (void*,char*,int ,int ,int ,int ,int *,int *) ;
 TYPE_4__* FUNC_6 (void*,int *) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_4__*) ;
 TYPE_4__* FUNC_8 (TYPE_4__*) ;
 TYPE_4__* FUNC_9 (char const*,scalar_t__*,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_10 (char const*,char const*,int *) ;
 TYPE_4__* FUNC_11 (int *,scalar_t__*,int *,char const**,char const**,int *,int *,int *,int *,int *,int *,int *,TYPE_2__**,int *,int *,scalar_t__*,int *,char const*,int *,int *) ;
 TYPE_4__* FUNC_12 (TYPE_1__*,char const*,scalar_t__,int *) ;

svn_error_t *
FUNC_13(svn_wc_context_t *VAR_7,
                            const char *VAR_8,
                            const svn_ra_reporter3_t *VAR_9,
                            void *VAR_10,
                            svn_boolean_t VAR_11,
                            svn_boolean_t VAR_12,
                            svn_cancel_func_t VAR_13,
                            void *VAR_14,
                            svn_wc_notify_func2_t VAR_15,
                            void *VAR_16,
                            apr_pool_t *VAR_17)
{
  svn_wc__db_t *VAR_18 = VAR_7->db;
  svn_error_t *VAR_19;
  svn_node_kind_t VAR_20;
  svn_wc__db_lock_t *VAR_21;
  svn_revnum_t VAR_22;
  const char *VAR_23;
  const char *VAR_24;
  svn_boolean_t VAR_25;

  VAR_19 = FUNC_11(((void*)0), &VAR_20, &VAR_22,
                                 &VAR_24, &VAR_23, ((void*)0), ((void*)0),
                                 ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_21,
                                 ((void*)0), ((void*)0), &VAR_25,
                                 VAR_18, VAR_8,
                                 VAR_17, VAR_17);

  if (VAR_19
      || VAR_20 == VAR_5
      || !VAR_25)
    {
      if (VAR_19 && VAR_19->apr_err != VAR_1)
        return FUNC_8(VAR_19);

      FUNC_7(VAR_19);







      FUNC_0(VAR_9->set_path(VAR_10, "", 0, VAR_4,
                                 VAR_0, ((void*)0), VAR_17));
      FUNC_0(VAR_9->delete_path(VAR_10, "", VAR_17));



      FUNC_0(VAR_9->finish_report(VAR_10, VAR_17));

      return VAR_3;
    }
  else
    {
      if (VAR_11)
        {
          svn_node_kind_t VAR_26;
          FUNC_0(FUNC_9(VAR_8, &VAR_26, VAR_17));

          if (VAR_26 == VAR_6)
            {
              VAR_19 = FUNC_12(VAR_7, VAR_8, VAR_12,
                                   VAR_17);

              if (VAR_19)
                {
                  if (VAR_19->apr_err != VAR_2)
                    return FUNC_8(VAR_19);

                  FUNC_7(VAR_19);
                }
            }
        }


      FUNC_0(VAR_9->set_path(VAR_10, "", VAR_22,
                                 VAR_4, VAR_0, ((void*)0),
                                 VAR_17));





      FUNC_0(VAR_9->link_path(VAR_10, "",
                                  FUNC_10(VAR_23,
                                                              VAR_24,
                                                              VAR_17),
                                  VAR_22,
                                  VAR_4,
                                  VAR_0 ,
                                  VAR_21 ? VAR_21->token : ((void*)0),
                                  VAR_17));
    }

  return FUNC_8(VAR_9->finish_report(VAR_10, VAR_17));
}
