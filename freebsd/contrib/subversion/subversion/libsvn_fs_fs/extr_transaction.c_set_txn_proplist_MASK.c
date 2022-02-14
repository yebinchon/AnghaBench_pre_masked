
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 char* FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (char const*,char const*,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char const**,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_t *VAR_4,
                 const svn_fs_fs__id_part_t *VAR_5,
                 apr_hash_t *VAR_6,
                 apr_pool_t *VAR_7)
{
  svn_stream_t *VAR_8;
  const char *VAR_9;
  const char *VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_7);


  FUNC_0(FUNC_6(&VAR_8, &VAR_9,
                                 FUNC_2(VAR_10, VAR_7),
                                 VAR_3,
                                 VAR_7, VAR_7));


  FUNC_0(FUNC_3(VAR_6, VAR_8, VAR_1, VAR_7));
  FUNC_0(FUNC_5(VAR_8));

  FUNC_0(FUNC_4(VAR_9, VAR_10, VAR_0, VAR_7));

  return VAR_2;
}
