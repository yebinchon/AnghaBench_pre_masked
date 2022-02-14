
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_sqlite__db_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ apr_finfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int const*,int *) ;
 int * FUNC_4 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_7 (int *,int,int const*,int *) ;
 int FUNC_8 (int *,int,scalar_t__) ;
 int FUNC_9 (int **,int *,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__*,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (TYPE_1__*,int *,int ,int *) ;
 int FUNC_15 (int *,char const*,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_sqlite__db_t *VAR_7,

                     svn_stream_t *VAR_8,

                     const char *VAR_9,

                     const svn_checksum_t *VAR_10,

                     const svn_checksum_t *VAR_11,
                     apr_pool_t *VAR_12)
{
  svn_sqlite__stmt_t *VAR_13;
  svn_boolean_t VAR_14;



  FUNC_0(FUNC_9(&VAR_13, VAR_7, VAR_3));
  FUNC_0(FUNC_7(VAR_13, 1, VAR_10, VAR_12));
  FUNC_0(FUNC_12(&VAR_14, VAR_13));
  FUNC_0(FUNC_11(VAR_13));

  if (VAR_14)
    {
      FUNC_0(FUNC_13(VAR_8, VAR_12));
      return VAR_5;
    }



  {
    apr_finfo_t VAR_15;
    FUNC_0(FUNC_14(&VAR_15, VAR_8,
                                         VAR_0, VAR_12));
    FUNC_0(FUNC_15(VAR_8, VAR_9,
                                       VAR_6, VAR_12));

    FUNC_0(FUNC_9(&VAR_13, VAR_7, VAR_2));
    FUNC_0(FUNC_7(VAR_13, 1, VAR_10, VAR_12));
    FUNC_0(FUNC_7(VAR_13, 2, VAR_11, VAR_12));
    FUNC_0(FUNC_8(VAR_13, 3, VAR_15.size));
    FUNC_0(FUNC_10(((void*)0), VAR_13));

    FUNC_0(FUNC_5(VAR_9, VAR_1, VAR_12));
  }

  return VAR_5;
}
