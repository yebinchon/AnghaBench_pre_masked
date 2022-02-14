
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int **,int *,char const*,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,char const**,char const**,int *,char const*,int *) ;
 int * FUNC_4 (char const*,int *) ;
 int * FUNC_5 (int *,char*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_6(apr_hash_t **VAR_5,
               svn_fs_root_t *VAR_6,
               const char *VAR_7,
               const char *VAR_8,
               apr_pool_t *VAR_9,
               apr_pool_t *VAR_10)
{
  svn_revnum_t VAR_11;
  const char *VAR_12, *VAR_13;


  FUNC_0(FUNC_1(VAR_5, VAR_6, VAR_7, VAR_9));




  FUNC_0(FUNC_3(&VAR_11, &VAR_12,
                                       &VAR_13, VAR_6, VAR_7,
                                       VAR_10));

  FUNC_2(*VAR_5, VAR_2,
                FUNC_5(VAR_9, "%ld", VAR_11));
  FUNC_2(*VAR_5, VAR_1, VAR_12 ?
                FUNC_4(VAR_12, VAR_9) : ((void*)0));
  FUNC_2(*VAR_5, VAR_3, VAR_13 ?
                FUNC_4(VAR_13, VAR_9) : ((void*)0));
  FUNC_2(*VAR_5, VAR_4,
                FUNC_4(VAR_8, VAR_9));



  return VAR_0;
}
