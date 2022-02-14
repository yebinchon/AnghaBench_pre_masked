
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct TYPE_4__ {int report_baton; TYPE_1__* sess; } ;
typedef TYPE_2__ reporter_baton_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {char* repos_url; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char*,char const*,int ) ;
 int * FUNC_2 (int ,int *,int ,char const*,char*) ;
 int * FUNC_3 (int ,char const*,char const*,int ,int ,int ,char const*,int *) ;
 char* FUNC_4 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_2,
                   const char *VAR_3,
                   const char *VAR_4,
                   svn_revnum_t VAR_5,
                   svn_depth_t VAR_6,
                   svn_boolean_t VAR_7,
                   const char *VAR_8,
                   apr_pool_t *VAR_9)
{
  reporter_baton_t *VAR_10 = VAR_2;
  const char *VAR_11 = VAR_10->sess->repos_url;
  const char *VAR_12 = FUNC_4(VAR_11, VAR_4, VAR_9);
  const char *VAR_13;

  if (!VAR_12)
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_0("'%s'\n"
                               "is not the same repository as\n"
                               "'%s'"), VAR_4, VAR_10->sess->repos_url);


  if (VAR_12[0] == '\0')
    VAR_13 = "/";
  else
    VAR_13 = FUNC_1(VAR_9, "/", VAR_12, VAR_1);

  return FUNC_3(VAR_10->report_baton, VAR_3, VAR_13, VAR_5,
                              VAR_6, VAR_7, VAR_8, VAR_9);
}
