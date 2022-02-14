
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char const*,int *,int *) ;
 int FUNC_6 (int *,char const*,char const*,char const*,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_wc__db_t *VAR_6,
         const char *VAR_7,
         const char *VAR_8,
         const char *VAR_9,
         const char *VAR_10,
         svn_revnum_t VAR_11,
         svn_depth_t VAR_12,
         apr_pool_t *VAR_13)
{

  FUNC_0(FUNC_3(FUNC_5(VAR_7, ((void*)0), VAR_13),
                                 VAR_0, VAR_13));




  FUNC_0(FUNC_2(VAR_7, VAR_4, VAR_13));






  FUNC_0(FUNC_1(VAR_7, VAR_13));


  FUNC_0(FUNC_6(VAR_6, VAR_7,
                          VAR_8, VAR_9, VAR_10,
                          VAR_11, VAR_12,
                          VAR_13));


  FUNC_0(FUNC_4(FUNC_5(VAR_7,
                                               VAR_2,
                                               VAR_13),
                             VAR_5,
                             VAR_13));
  FUNC_0(FUNC_4(FUNC_5(VAR_7,
                                               VAR_3,
                                               VAR_13),
                             VAR_5,
                             VAR_13));

  return VAR_1;
}
