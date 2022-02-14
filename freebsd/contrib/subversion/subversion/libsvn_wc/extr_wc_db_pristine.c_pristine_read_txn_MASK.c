
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_stream_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const*,int *) ;
 int * FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int **,char const*,int ,int ,int *) ;
 int FUNC_5 (int *,int,int const*,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int **,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_stream_t **VAR_6,
                  svn_filesize_t *VAR_7,
                  svn_wc__db_wcroot_t *VAR_8,
                  const svn_checksum_t *VAR_9,
                  const char *VAR_10,
                  apr_pool_t *VAR_11,
                  apr_pool_t *VAR_12)
{
  svn_sqlite__stmt_t *VAR_13;
  svn_boolean_t VAR_14;



  FUNC_0(FUNC_7(&VAR_13, VAR_8->sdb,
                                    VAR_3));
  FUNC_0(FUNC_5(VAR_13, 1, VAR_9, VAR_12));
  FUNC_0(FUNC_9(&VAR_14, VAR_13));

  if (VAR_7)
    *VAR_7 = FUNC_6(VAR_13, 0);

  FUNC_0(FUNC_8(VAR_13));
  if (! VAR_14)
    {
      return FUNC_3(VAR_4, ((void*)0),
                               FUNC_1("Pristine text '%s' not present"),
                               FUNC_2(
                                 VAR_9, VAR_12));
    }
  if (VAR_6)
    {
      apr_file_t *VAR_15;
      FUNC_0(FUNC_4(&VAR_15, VAR_10, VAR_1,
                               VAR_0, VAR_11));
      *VAR_6 = FUNC_10(VAR_15, VAR_2, VAR_11);
    }

  return VAR_5;
}
