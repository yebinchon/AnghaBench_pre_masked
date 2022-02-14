
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,char const*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_3,
           svn_revnum_t VAR_4,
           apr_pool_t *VAR_5)
{
  svn_fs_t *VAR_6;


  FUNC_0(FUNC_1(&VAR_6, VAR_3, VAR_5));


  FUNC_2("       Start       Length Type   Revision     Item Checksum\n");


  FUNC_0(FUNC_3(VAR_6, VAR_4, VAR_2, ((void*)0),
                                VAR_1, ((void*)0), VAR_5));

  return VAR_0;
}
