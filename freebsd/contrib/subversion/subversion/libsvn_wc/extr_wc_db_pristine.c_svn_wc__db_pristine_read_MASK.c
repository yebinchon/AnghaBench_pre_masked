
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int abspath; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_stream_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_11__ {scalar_t__ kind; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const**,int ,TYPE_2__ const*,int *,int *) ;
 int FUNC_6 (int **,int *,TYPE_1__*,TYPE_2__ const*,char const*,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,int *) ;
 int * FUNC_9 (int ,int *,int ,int ) ;
 int FUNC_10 (TYPE_1__**,char const**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_11(svn_stream_t **VAR_3,
                         svn_filesize_t *VAR_4,
                         svn_wc__db_t *VAR_5,
                         const char *VAR_6,
                         const svn_checksum_t *VAR_7,
                         apr_pool_t *VAR_8,
                         apr_pool_t *VAR_9)
{
  svn_wc__db_wcroot_t *VAR_10;
  const char *VAR_11;
  const char *VAR_12;

  FUNC_1(FUNC_7(VAR_6));



  if (!VAR_7)
    return FUNC_9(VAR_0, ((void*)0),
                             FUNC_4("Can't read '%s' from pristine store "
                               "because no checksum supplied"),
                             FUNC_8(VAR_6, VAR_9));

  FUNC_1(VAR_7->kind == VAR_2);

  FUNC_0(FUNC_10(&VAR_10, &VAR_11, VAR_5,
                              VAR_6, VAR_9, VAR_9));
  FUNC_3(VAR_10);

  FUNC_0(FUNC_5(&VAR_12, VAR_10->abspath,
                             VAR_7,
                             VAR_9, VAR_9));
  FUNC_2(
    FUNC_6(VAR_3, VAR_4,
                      VAR_10, VAR_7, VAR_12,
                      VAR_8, VAR_9),
    VAR_10);

  return VAR_1;
}
