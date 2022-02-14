
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
struct TYPE_4__ {int * inner_stream; int * wcroot; } ;
typedef TYPE_1__ svn_wc__db_install_data_t ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 TYPE_1__* FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int **,char const*,int *,int *) ;
 int * FUNC_9 (int *,int *,int **,int ,int ,int *) ;
 int FUNC_10 (int **,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_11(svn_stream_t **VAR_4,
                                    svn_wc__db_install_data_t **VAR_5,
                                    svn_checksum_t **VAR_6,
                                    svn_checksum_t **VAR_7,
                                    svn_wc__db_t *VAR_8,
                                    const char *VAR_9,
                                    apr_pool_t *VAR_10,
                                    apr_pool_t *VAR_11)
{
  svn_wc__db_wcroot_t *VAR_12;
  const char *VAR_13;
  const char *VAR_14;

  FUNC_1(FUNC_7(VAR_9));

  FUNC_0(FUNC_10(&VAR_12, &VAR_13, VAR_8,
                              VAR_9, VAR_11, VAR_11));
  FUNC_3(VAR_12);

  VAR_14 = FUNC_6(VAR_12, VAR_11, VAR_11);

  *VAR_5 = FUNC_5(VAR_10, sizeof(**VAR_5));
  (*VAR_5)->wcroot = VAR_12;

  FUNC_2(FUNC_8(VAR_4,
                                           VAR_14,
                                           VAR_10, VAR_11),
            FUNC_4("Unable to create pristine install stream"));

  (*VAR_5)->inner_stream = *VAR_4;

  if (VAR_7)
    *VAR_4 = FUNC_9(*VAR_4, ((void*)0), VAR_7,
                                      VAR_2, VAR_0, VAR_10);
  if (VAR_6)
    *VAR_4 = FUNC_9(*VAR_4, ((void*)0), VAR_6,
                                      VAR_3, VAR_0, VAR_10);

  return VAR_1;
}
