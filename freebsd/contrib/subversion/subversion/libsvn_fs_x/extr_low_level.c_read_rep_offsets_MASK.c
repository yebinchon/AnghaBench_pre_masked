
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_fs_x__representation_t ;
typedef int svn_fs_x__id_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int *,char const*) ;
 TYPE_1__* FUNC_3 (int const*,int *) ;
 int * FUNC_4 (int **,int ,int *,int *) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_x__representation_t **VAR_1,
                 char *VAR_2,
                 const svn_fs_x__id_t *VAR_3,
                 apr_pool_t *VAR_4,
                 apr_pool_t *VAR_5)
{
  svn_error_t *VAR_6
    = FUNC_4(VAR_1,
                                     FUNC_5(VAR_2,
                                                               VAR_5),
                                     VAR_4,
                                     VAR_5);
  if (VAR_6)
    {
      const svn_string_t *VAR_7;
      const char *VAR_8;

      VAR_7 = FUNC_3(VAR_3, VAR_5);
      VAR_8 = FUNC_1(VAR_5,
                           FUNC_0("While reading representation offsets "
                             "for node-revision '%s':"),
                           VAR_7->data);

      return FUNC_2(VAR_6, VAR_8);
    }

  return VAR_0;
}
