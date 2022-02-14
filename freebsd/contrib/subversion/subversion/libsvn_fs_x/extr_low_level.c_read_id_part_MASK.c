
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_x__id_t ;
typedef int svn_error_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (int *,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_x__id_t *VAR_2,
             apr_hash_t *VAR_3,
             const char *VAR_4)
{
  const char *VAR_5 = FUNC_4(VAR_3, VAR_4);
  if (VAR_5 == ((void*)0))
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_1("Missing %s field in node-rev"),
                             VAR_4);

  FUNC_0(FUNC_3(VAR_2, VAR_5));
  return VAR_1;
}
