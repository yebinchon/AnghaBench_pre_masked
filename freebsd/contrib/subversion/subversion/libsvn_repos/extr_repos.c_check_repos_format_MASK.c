
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; int path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int ,int *,int ,int,int,int) ;
 int FUNC_4 (int*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_repos_t *VAR_5,
                   apr_pool_t *VAR_6)
{
  int VAR_7;
  const char *VAR_8;

  VAR_8 = FUNC_2(VAR_5->path, VAR_2, VAR_6);
  FUNC_0(FUNC_4(&VAR_7, VAR_8, VAR_6));

  if (VAR_7 != VAR_3 &&
      VAR_7 != VAR_4)
    {
      return FUNC_3
        (VAR_0, ((void*)0),
         FUNC_1("Expected repository format '%d' or '%d'; found format '%d'"),
         VAR_4, VAR_3,
         VAR_7);
    }

  VAR_5->format = VAR_7;

  return VAR_1;
}
