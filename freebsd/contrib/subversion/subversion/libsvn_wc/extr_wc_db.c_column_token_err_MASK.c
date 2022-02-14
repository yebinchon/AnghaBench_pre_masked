
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
typedef TYPE_1__ svn_token_map_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_error_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,int ,int) ;
 char* FUNC_3 (int *,int,int *) ;
 int * FUNC_4 (int*,TYPE_1__ const*,char const*) ;

__attribute__((used)) static int
FUNC_5(svn_error_t **VAR_1,
                 svn_sqlite__stmt_t *VAR_2,
                 int VAR_3,
                 const svn_token_map_t *VAR_4)
{
  svn_error_t *VAR_5;
  const char *VAR_6 = FUNC_3(VAR_2, VAR_3, ((void*)0));
  int VAR_7;


  VAR_5 = FUNC_4(&VAR_7, VAR_4, VAR_6);

  if (VAR_5)
    {
      *VAR_1 = FUNC_1(
                *VAR_1,
                FUNC_2(
                    VAR_0, VAR_5,
                    FUNC_0("Encountered invalid node state in column %d of "
                      "info query to working copy database"),
                    VAR_3));
      VAR_7 = VAR_4[0].val;
    }

  return VAR_7;
}
