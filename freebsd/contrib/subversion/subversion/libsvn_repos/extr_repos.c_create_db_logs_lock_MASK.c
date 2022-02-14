
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fs_type; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*,char const*,int *) ;
 char* FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_repos_t *VAR_4, apr_pool_t *VAR_5) {
  const char *VAR_6;
  const char *VAR_7;

  VAR_7 = FUNC_4(VAR_4, VAR_5);
  if (FUNC_2(VAR_4->fs_type, VAR_0) == 0)
    VAR_6 = VAR_2;
  else
    VAR_6 = VAR_3;

  FUNC_0(FUNC_3(VAR_7, VAR_6, VAR_5),
            FUNC_1("Creating db logs lock file"));

  return VAR_1;
}
