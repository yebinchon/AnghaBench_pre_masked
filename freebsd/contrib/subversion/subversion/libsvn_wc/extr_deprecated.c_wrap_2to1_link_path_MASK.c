
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct wrap_2to1_report_baton {int baton; TYPE_1__* reporter; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int * (* link_path ) (int ,char const*,char const*,int ,int ,int *) ;} ;


 int * FUNC_0 (int ,char const*,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_1(void *VAR_0,
                                        const char *VAR_1,
                                        const char *VAR_2,
                                        svn_revnum_t VAR_3,
                                        svn_boolean_t VAR_4,
                                        const char *VAR_5,
                                        apr_pool_t *VAR_6)
{
  struct wrap_2to1_report_baton *VAR_7 = VAR_0;

  return VAR_7->reporter->link_path(VAR_7->baton, VAR_1, VAR_2, VAR_3,
                                  VAR_4, VAR_6);
}
