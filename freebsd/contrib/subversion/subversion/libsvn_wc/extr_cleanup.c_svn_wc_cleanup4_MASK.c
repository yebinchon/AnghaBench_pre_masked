
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_3__ {int * db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int *,char const*,scalar_t__,scalar_t__,scalar_t__,int ,void*,int *) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,char const*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int *) ;
 int FUNC_7 (int **,int *,int ,int ,int *,int *) ;
 int FUNC_8 (int *,char const*,int *) ;

svn_error_t *
FUNC_9(svn_wc_context_t *VAR_2,
                const char *VAR_3,
                svn_boolean_t VAR_4,
                svn_boolean_t VAR_5,
                svn_boolean_t VAR_6,
                svn_boolean_t VAR_7,
                svn_cancel_func_t VAR_8,
                void *VAR_9,
                svn_wc_notify_func2_t VAR_10,
                void *VAR_11,
                apr_pool_t *VAR_12)
{
  svn_wc__db_t *VAR_13;

  FUNC_1(FUNC_3(VAR_3));
  FUNC_1(VAR_2 != ((void*)0));

  if (VAR_4)
    {




      FUNC_0(FUNC_6(VAR_2->db, VAR_3,
                                   VAR_12));

      FUNC_0(FUNC_7(&VAR_13,
                              ((void*)0) , VAR_0, VAR_0,
                              VAR_12, VAR_12));
    }
  else
    VAR_13 = VAR_2->db;

  FUNC_0(FUNC_2(VAR_13, VAR_3,
                           VAR_4,
                           VAR_5,
                           VAR_7,
                           VAR_8, VAR_9,
                           VAR_12));



  if (VAR_6)
    FUNC_0(FUNC_4(VAR_13, VAR_3,
                                                      VAR_12));

  if (VAR_7)
    FUNC_0(FUNC_8(VAR_13, VAR_3, VAR_12));


  if (VAR_4)
    FUNC_0(FUNC_5(VAR_13));

  return VAR_1;
}
