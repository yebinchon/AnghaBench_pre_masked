
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int **,int *) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 int * FUNC_3 (scalar_t__,char*) ;
 int * FUNC_4 (int *,char const*,char const* const*,int*,int *,int ,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_3,
        const char *const *VAR_4,
        apr_pool_t *VAR_5)
{
  apr_status_t VAR_6;
  apr_file_t *VAR_7;
  svn_error_t *VAR_8;
  int VAR_9;

  VAR_6 = FUNC_1(&VAR_7, VAR_5);
  if (VAR_6)
    return FUNC_3(VAR_6, "Can't open stdout");

  VAR_8 = FUNC_4(((void*)0) , VAR_3, VAR_4,
                       &VAR_9, ((void*)0) ,
                       VAR_2 ,
                       ((void*)0) , VAR_7, ((void*)0) ,
                       VAR_5);
  if (VAR_8 || VAR_9)
    return FUNC_2(VAR_0, VAR_8,
                             FUNC_0("Could not run external command '%s'"), VAR_3);
  return VAR_1;
}
