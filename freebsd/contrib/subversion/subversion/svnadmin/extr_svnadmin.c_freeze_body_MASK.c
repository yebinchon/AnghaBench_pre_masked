
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct freeze_baton_t {int status; int args; int command; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int **,int *) ;
 scalar_t__ FUNC_2 (int **,int *) ;
 scalar_t__ FUNC_3 (int **,int *) ;
 int * FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (int *,int ,int ,int *,int *,int ,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_2,
            apr_pool_t *VAR_3)
{
  struct freeze_baton_t *VAR_4 = VAR_2;
  apr_status_t VAR_5;
  apr_file_t *VAR_6, *VAR_7, *VAR_8;

  VAR_5 = FUNC_2(&VAR_6, VAR_3);
  if (VAR_5)
    return FUNC_4(VAR_5, "Can't open stdin");
  VAR_5 = FUNC_3(&VAR_7, VAR_3);
  if (VAR_5)
    return FUNC_4(VAR_5, "Can't open stdout");
  VAR_5 = FUNC_1(&VAR_8, VAR_3);
  if (VAR_5)
    return FUNC_4(VAR_5, "Can't open stderr");

  FUNC_0(FUNC_5(((void*)0), VAR_4->command, VAR_4->args, &VAR_4->status,
                         ((void*)0), VAR_1,
                         VAR_6, VAR_7, VAR_8, VAR_3));

  return VAR_0;
}
