
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_notify_func2_t ;
struct TYPE_3__ {int db; } ;
typedef TYPE_1__ svn_wc_context_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,char const*,char const*,int const*,int ,int ,void*,int ,void*,int *) ;

svn_error_t *
FUNC_4(svn_wc_context_t *VAR_1,
                       const char *VAR_2,
                       const char *VAR_3,
                       svn_depth_t VAR_4,
                       const apr_array_header_t *VAR_5,
                       svn_cancel_func_t VAR_6,
                       void *VAR_7,
                       svn_wc_notify_func2_t VAR_8,
                       void *VAR_9,
                       apr_pool_t *VAR_10)
{

  FUNC_1(! (VAR_3 && VAR_3[0] == '\0'));

  FUNC_1(FUNC_2(VAR_2));

  FUNC_0(FUNC_3(VAR_1->db, VAR_2,
                                       VAR_3, VAR_5,
                                       VAR_4, VAR_8, VAR_9,
                                       VAR_6, VAR_7,
                                       VAR_10));

  return VAR_0;
}
