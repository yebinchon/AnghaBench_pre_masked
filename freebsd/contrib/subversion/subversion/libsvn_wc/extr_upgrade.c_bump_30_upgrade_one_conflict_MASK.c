
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc__db_t ;
struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ svn_stringbuf_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 TYPE_1__* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int ,char const*,int ,int ) ;
 char* FUNC_4 (int *,int,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 char* FUNC_6 (int *,int,int *) ;
 int FUNC_7 (int **,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,char const*,char const*,char const*,char const*,char const*,char const*,char const*,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_wc__db_t *VAR_2,
                             const char *VAR_3,
                             svn_sqlite__stmt_t *VAR_4,
                             svn_sqlite__db_t *VAR_5,
                             apr_pool_t *VAR_6)
{
  svn_sqlite__stmt_t *VAR_7;
  svn_stringbuf_t *VAR_8;
  svn_skel_t *VAR_9;
  apr_int64_t VAR_10 = FUNC_5(VAR_4, 0);
  const char *VAR_11 = FUNC_6(VAR_4, 1, ((void*)0));
  const char *VAR_12 = FUNC_6(VAR_4, 2, ((void*)0));
  const char *VAR_13 = FUNC_6(VAR_4, 3, ((void*)0));
  const char *VAR_14 = FUNC_6(VAR_4, 4, ((void*)0));
  const char *VAR_15 = FUNC_6(VAR_4, 5, ((void*)0));
  apr_size_t VAR_16;
  const char *VAR_17 = FUNC_4(VAR_4, 6,
                                           &VAR_16, ((void*)0));

  FUNC_0(FUNC_9(&VAR_9,
                                                 VAR_2, VAR_3,
                                                 VAR_11,
                                                 VAR_12,
                                                 VAR_13,
                                                 VAR_14,
                                                 VAR_15,
                                                 VAR_17,
                                                 VAR_16,
                                                 VAR_6, VAR_6));

  FUNC_1(VAR_9 != ((void*)0));

  VAR_8 = FUNC_2(VAR_9, VAR_6);

  FUNC_0(FUNC_7(&VAR_7, VAR_5,
                                    VAR_0));
  FUNC_0(FUNC_3(VAR_7, "isb", VAR_10, VAR_11,
                            VAR_8->data, VAR_8->len));
  FUNC_0(FUNC_8(VAR_7));

  return VAR_1;
}
