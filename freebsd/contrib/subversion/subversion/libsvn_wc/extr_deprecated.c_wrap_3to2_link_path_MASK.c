
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct wrap_3to2_report_baton {int baton; TYPE_1__* reporter; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* link_path ) (int ,char const*,char const*,int ,int ,char const*,int *) ;} ;


 int * FUNC_0 (int ,char const*,char const*,int ,int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_1(void *VAR_0,
                                        const char *VAR_1,
                                        const char *VAR_2,
                                        svn_revnum_t VAR_3,
                                        svn_depth_t VAR_4,
                                        svn_boolean_t VAR_5,
                                        const char *VAR_6,
                                        apr_pool_t *VAR_7)
{
  struct wrap_3to2_report_baton *VAR_8 = VAR_0;

  return VAR_8->reporter->link_path(VAR_8->baton, VAR_1, VAR_2, VAR_3,
                                  VAR_5, VAR_6, VAR_7);
}
