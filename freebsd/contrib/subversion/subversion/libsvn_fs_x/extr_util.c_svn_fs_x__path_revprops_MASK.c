
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (int *,int ,int ,char*,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

const char *
FUNC_5(svn_fs_t *VAR_1,
                        svn_revnum_t VAR_2,
                        apr_pool_t *VAR_3)
{
  char VAR_4[VAR_0 + 1];
  VAR_4[0] = 'p';
  FUNC_2(VAR_4 + 1, VAR_2);

  FUNC_0(! FUNC_4(VAR_1, VAR_2));



  return FUNC_1(VAR_1, VAR_2,
                                  FUNC_3(VAR_1, VAR_2) ,
                                  VAR_4, VAR_3);
}
