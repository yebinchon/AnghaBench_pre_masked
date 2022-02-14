
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct TYPE_2__ {int only_empty_entries; int entry_counter; int report_baton; scalar_t__ err; int * from_rev; } ;
typedef TYPE_1__ report_driver_baton_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,char const**,int *,int *,char const**,char const**) ;
 char* FUNC_4 (char const*,int *) ;
 scalar_t__ FUNC_5 (int ,char const*,int ,int ,int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_6(svn_ra_svn_conn_t *VAR_3, apr_pool_t *VAR_4,
                             svn_ra_svn__list_t *VAR_5, void *VAR_6)
{
  report_driver_baton_t *VAR_7 = VAR_6;
  const char *VAR_8, *VAR_9, *VAR_10;
  svn_revnum_t VAR_11;

  svn_depth_t VAR_12 = VAR_2;
  svn_boolean_t VAR_13;

  FUNC_0(FUNC_3(VAR_5, "crb?(?c)?w",
                                  &VAR_8, &VAR_11, &VAR_13, &VAR_9,
                                  &VAR_10));
  if (VAR_10)
    VAR_12 = FUNC_2(VAR_10);
  VAR_8 = FUNC_4(VAR_8, VAR_4);
  if (VAR_7->from_rev && FUNC_1(VAR_8, "") == 0)
    *VAR_7->from_rev = VAR_11;
  if (!VAR_7->err)
    VAR_7->err = FUNC_5(VAR_7->report_baton, VAR_8, VAR_11, VAR_12,
                                 VAR_13, VAR_9, VAR_4);
  VAR_7->entry_counter++;
  if (!VAR_13)
    VAR_7->only_empty_entries = VAR_0;
  return VAR_1;
}
