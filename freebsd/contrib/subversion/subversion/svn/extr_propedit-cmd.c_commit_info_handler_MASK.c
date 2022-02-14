
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_commit_info_t ;
struct commit_info_baton {int target_local; int pname; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const*,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const svn_commit_info_t *VAR_1,
                    void *VAR_2,
                    apr_pool_t *VAR_3)
{
  struct commit_info_baton *VAR_4 = VAR_2;

  FUNC_0(FUNC_3(VAR_3,
                             FUNC_1("Set new value for property '%s' on '%s'\n"),
                             VAR_4->pname, VAR_4->target_local));
  FUNC_0(FUNC_2(VAR_1, ((void*)0), VAR_3));

  return VAR_0;
}
