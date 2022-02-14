
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
struct TYPE_2__ {char const* repos_url; int entry_counter; int report_baton; scalar_t__ err; } ;
typedef TYPE_1__ report_driver_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,char const**) ;
 int FUNC_2 (char const*) ;
 int VAR_1 ;
 int FUNC_3 (char const*,int *) ;
 int FUNC_4 (int *,char*,char const**,char const**,int *,int *,char const**,char const**) ;
 char* FUNC_5 (char const*,int *) ;
 scalar_t__ FUNC_6 (int ,char const*,char const*,int ,int ,int ,char const*,int *) ;
 char* FUNC_7 (char const*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_8(svn_ra_svn_conn_t *VAR_2, apr_pool_t *VAR_3,
                              svn_ra_svn__list_t *VAR_4, void *VAR_5)
{
  report_driver_baton_t *VAR_6 = VAR_5;
  const char *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11;
  svn_revnum_t VAR_12;
  svn_boolean_t VAR_13;

  svn_depth_t VAR_14 = VAR_1;

  FUNC_0(FUNC_4(VAR_4, "ccrb?(?c)?w",
                                 &VAR_7, &VAR_8, &VAR_12, &VAR_13,
                                 &VAR_9, &VAR_11));



  VAR_7 = FUNC_5(VAR_7, VAR_3);
  VAR_8 = FUNC_7(VAR_8, VAR_3);
  if (VAR_11)
    VAR_14 = FUNC_2(VAR_11);
  if (!VAR_6->err)
    VAR_6->err = FUNC_1(FUNC_3(VAR_6->repos_url, VAR_3),
                         FUNC_3(VAR_8, VAR_3),
                         &VAR_10);
  if (!VAR_6->err)
    VAR_6->err = FUNC_6(VAR_6->report_baton, VAR_7, VAR_10, VAR_12,
                                  VAR_14, VAR_13, VAR_9, VAR_3);
  VAR_6->entry_counter++;
  return VAR_0;
}
