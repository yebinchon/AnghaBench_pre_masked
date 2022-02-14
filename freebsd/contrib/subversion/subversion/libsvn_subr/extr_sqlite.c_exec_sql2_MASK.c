
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int db3; } ;
typedef TYPE_1__ svn_sqlite__db_t ;
typedef int svn_error_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char const*,int *,int *,char**) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int *,int ,int,char*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_sqlite__db_t *VAR_2, const char *VAR_3, int VAR_4)
{
  char *VAR_5;
  int VAR_6 = FUNC_2(VAR_2->db3, VAR_3, ((void*)0), ((void*)0), &VAR_5);

  if (VAR_6 != VAR_0 && VAR_6 != VAR_4)
    {
      svn_error_t *VAR_7 = FUNC_4(FUNC_0(VAR_6), ((void*)0),
                                           FUNC_1("sqlite[S%d]: %s,"
                                             " executing statement '%s'"),
                                           VAR_6, VAR_5, VAR_3);
      FUNC_3(VAR_5);
      return VAR_7;
    }

  return VAR_1;
}
