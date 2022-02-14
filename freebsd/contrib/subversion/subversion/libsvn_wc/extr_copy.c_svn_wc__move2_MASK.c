
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * svn_wc_notify_func2_t ;
struct TYPE_4__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__*,TYPE_1__*,char const*,char const*,scalar_t__,scalar_t__,scalar_t__,int ,void*,int *,void*,int *) ;
 int FUNC_2 (int *,char const*,char const*,int ,void*,int *) ;
 int FUNC_3 (int *,char const*,char const*,int *) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (char const*,char const*,int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int *,char const*,char const*,scalar_t__,int *,int *,int ,void*,int *,void*,int *) ;
 int FUNC_9 (int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *,char const*,int *,int *) ;
 int FUNC_10 (int *,int ,int *) ;

svn_error_t *
FUNC_11(svn_wc_context_t *VAR_4,
              const char *VAR_5,
              const char *VAR_6,
              svn_boolean_t VAR_7,
              svn_boolean_t VAR_8,
              svn_cancel_func_t VAR_9,
              void *VAR_10,
              svn_wc_notify_func2_t VAR_11,
              void *VAR_12,
              apr_pool_t *VAR_13)
{
  svn_wc__db_t *VAR_14 = VAR_4->db;
  svn_boolean_t VAR_15 = VAR_2;
  svn_node_kind_t VAR_16;
  svn_boolean_t VAR_17;


  FUNC_0(FUNC_10(VAR_4->db,
                              FUNC_4(VAR_5, VAR_13),
                              VAR_13));
  FUNC_0(FUNC_10(VAR_4->db,
                              FUNC_4(VAR_6, VAR_13),
                              VAR_13));

  FUNC_0(FUNC_1(&VAR_15,
                       VAR_4, VAR_5, VAR_6,
                       VAR_2 ,
                       VAR_2 ,
                       VAR_8,
                       VAR_9, VAR_10,
                       VAR_11, VAR_12,
                       VAR_13));
  if (!VAR_7)
    {
      svn_error_t *VAR_18;

      VAR_18 = FUNC_6(FUNC_7(VAR_5, VAR_6,
                                                VAR_0, VAR_13));





      if (VAR_18)
        return FUNC_6(
          FUNC_5(
              VAR_18,
              FUNC_8(VAR_4->db, VAR_6, ((void*)0), VAR_2,
                                   ((void*)0), ((void*)0), VAR_9, VAR_10,
                                   ((void*)0), ((void*)0),
                                   VAR_13)));
    }

  FUNC_0(FUNC_9(((void*)0), &VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                               &VAR_17, ((void*)0), ((void*)0), ((void*)0),
                               ((void*)0), ((void*)0), ((void*)0),
                               VAR_14, VAR_5,
                               VAR_13, VAR_13));

  if (VAR_16 == VAR_3)
    FUNC_0(FUNC_2(VAR_14, VAR_5, VAR_6,
                                        VAR_9, VAR_10,
                                        VAR_13));

  if (VAR_17)
    {



      FUNC_0(FUNC_3(VAR_14, VAR_5,
                                           (VAR_16 == VAR_3)
                                             ? VAR_6
                                             : VAR_5,
                                           VAR_13));
    }

  FUNC_0(FUNC_8(VAR_14, VAR_5,
                               VAR_15 ? VAR_6 : ((void*)0),
                               VAR_2 ,
                               ((void*)0) , ((void*)0) ,
                               VAR_9, VAR_10,
                               VAR_11, VAR_12,
                               VAR_13));

  return VAR_1;
}
