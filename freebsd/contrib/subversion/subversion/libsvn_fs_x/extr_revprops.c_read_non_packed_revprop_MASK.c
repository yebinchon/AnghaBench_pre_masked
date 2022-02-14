
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stringbuf_t ;
typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int **,int *,int ,int *,int *,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int **,int *,int ,int,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(apr_hash_t **VAR_3,
                        svn_fs_t *VAR_4,
                        svn_revnum_t VAR_5,
                        apr_pool_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  svn_stringbuf_t *VAR_8 = ((void*)0);
  apr_pool_t *VAR_9 = FUNC_7(VAR_7);
  svn_boolean_t VAR_10 = VAR_0;
  int VAR_11;

  for (VAR_11 = 0;
       VAR_11 < VAR_1 && !VAR_10 && !VAR_8;
       ++VAR_11)
    {
      FUNC_6(VAR_9);
      FUNC_0(FUNC_5(&VAR_8,
                                  &VAR_10,
                                  FUNC_4(VAR_4, VAR_5, VAR_9),
                                  VAR_11 + 1 < VAR_1,
                                  VAR_9));
    }

  if (VAR_8)
    {
      svn_string_t *VAR_12;


      FUNC_1(FUNC_9(VAR_8, VAR_7),
                FUNC_2(VAR_7,
                             "Revprop file for r%ld is corrupt",
                             VAR_5));



      VAR_12 = FUNC_8(VAR_8, VAR_6);
      FUNC_0(FUNC_3(VAR_3, VAR_4, VAR_5, VAR_12,
                            VAR_6, VAR_9));
    }

  FUNC_6(VAR_9);

  return VAR_2;
}
