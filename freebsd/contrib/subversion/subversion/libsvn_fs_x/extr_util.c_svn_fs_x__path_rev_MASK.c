
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (int *,int ,int ,char*,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int ) ;

const char *
FUNC_4(svn_fs_t *VAR_2,
                   svn_revnum_t VAR_3,
                   apr_pool_t *VAR_4)
{
  char VAR_5[VAR_1 + 1];
  VAR_5[0] = 'r';
  FUNC_2(VAR_5 + 1, VAR_3);

  FUNC_0(! FUNC_3(VAR_2, VAR_3));
  return FUNC_1(VAR_2, VAR_3, VAR_0, VAR_5, VAR_4);
}
