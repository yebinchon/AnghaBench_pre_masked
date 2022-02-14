
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,scalar_t__,int ,void*,int *) ;
 int FUNC_3 (TYPE_1__*,char const*,int ,int ,int ,int ,int *,int ,int *,int ,void*,int *) ;

svn_error_t *
FUNC_4(svn_wc_context_t *VAR_3,
                                    const char *VAR_4,
                                    svn_boolean_t VAR_5,
                                    svn_boolean_t VAR_6,
                                    svn_cancel_func_t VAR_7,
                                    void *VAR_8,
                                    apr_pool_t *VAR_9)
{
  if (VAR_6)
    {
      FUNC_0(FUNC_3(VAR_3, VAR_4, VAR_2,
                                 VAR_0, VAR_0, VAR_0, ((void*)0),
                                 VAR_1, ((void*)0),
                                 VAR_7, VAR_8,
                                 VAR_9));
    }
  return FUNC_1(
      FUNC_2(VAR_3->db,
                                                    VAR_4,
                                                    VAR_5,
                                                    VAR_7,
                                                    VAR_8,
                                                    VAR_9));
}
