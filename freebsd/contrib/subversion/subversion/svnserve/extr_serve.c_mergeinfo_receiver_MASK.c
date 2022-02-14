
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int conn; int fs_path; } ;
typedef TYPE_1__ mergeinfo_receiver_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 char* FUNC_2 (int ,char const*) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int ,int *,char*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_1,
                   svn_mergeinfo_t VAR_2,
                   void *VAR_3,
                   apr_pool_t *VAR_4)
{
  mergeinfo_receiver_baton_t *VAR_5 = VAR_3;
  svn_string_t *VAR_6;




  FUNC_0(FUNC_1(VAR_5, VAR_4));


  VAR_1 = FUNC_2(VAR_5->fs_path, VAR_1);
  FUNC_0(FUNC_3(&VAR_6, VAR_2,
                                  VAR_4));
  FUNC_0(FUNC_4(VAR_5->conn, VAR_4, "cs", VAR_1,
                                  VAR_6));

  return VAR_0;
}
