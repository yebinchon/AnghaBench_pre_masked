
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int result_pool; int * mergeinfo; } ;
typedef TYPE_1__ mergeinfo_receiver_baton_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(const char *VAR_1,
                   svn_mergeinfo_t VAR_2,
                   void *VAR_3,
                   apr_pool_t *VAR_4)
{
  mergeinfo_receiver_baton_t *VAR_5 = VAR_3;
  *VAR_5->mergeinfo = FUNC_0(VAR_2, VAR_5->result_pool);

  return VAR_0;
}
