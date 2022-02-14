
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 int * FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int*,int *,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(int *VAR_5,
               svn_wc__db_t *VAR_6,
               const char *VAR_7,
               apr_pool_t *VAR_8)
{
  FUNC_0(FUNC_5(VAR_5, VAR_6,
                                    VAR_7, VAR_0, VAR_8));


  if (*VAR_5 == 0)
    return FUNC_4(VAR_1, ((void*)0),
                             FUNC_1("'%s' is not a working copy directory"),
                             FUNC_2(VAR_7,
                                                    VAR_8));

  if (*VAR_5 < VAR_4)
    return FUNC_3(VAR_2, ((void*)0),
                            FUNC_1("Log format too old, please use "
                              "Subversion 1.6 or earlier"));

  return VAR_3;
}
