
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int revision; int url; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (char const**,char const*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__ const**,int ,char const*,int ,int ,int *,int *) ;

svn_error_t *
FUNC_5(char **VAR_3,
                    svn_revnum_t *VAR_4,
                    const char *VAR_5,
                    svn_wc_adm_access_t *VAR_6,
                    apr_pool_t *VAR_7)
{
  const char *VAR_8;
  const svn_wc_entry_t *VAR_9;

  FUNC_0(FUNC_2(&VAR_8, VAR_5, VAR_7));

  FUNC_0(FUNC_4(&VAR_9, FUNC_3(VAR_6),
                            VAR_8, VAR_0,
                            VAR_2,
                            VAR_7, VAR_7));

  if (VAR_3)
    *VAR_3 = FUNC_1(VAR_7, VAR_9->url);

  if (VAR_4)
    *VAR_4 = VAR_9->revision;

  return VAR_1;
}
