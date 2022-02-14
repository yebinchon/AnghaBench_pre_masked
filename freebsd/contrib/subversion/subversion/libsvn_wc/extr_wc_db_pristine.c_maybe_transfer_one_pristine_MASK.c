
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {int abspath; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_stream_t ;
typedef int svn_sqlite__stmt_t ;
struct TYPE_24__ {int apr_err; } ;
typedef TYPE_2__ svn_error_t ;
typedef int svn_checksum_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_3 ;
 TYPE_2__* FUNC_2 (char const**,int ,int const*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,int ,int *) ;
 int VAR_4 ;
 TYPE_2__* FUNC_9 (char const*,char const*,int ,int *) ;
 TYPE_2__* FUNC_10 (int *,int,int const*,int *) ;
 TYPE_2__* FUNC_11 (int *,int,int ) ;
 TYPE_2__* FUNC_12 (int **,int ,int ) ;
 TYPE_2__* FUNC_13 (int*,int *) ;
 TYPE_2__* FUNC_14 (int *,int *,int ,void*,int *) ;
 TYPE_2__* FUNC_15 (int **,char const*,int *,int *) ;
 TYPE_2__* FUNC_16 (int **,char const**,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_wc__db_wcroot_t *VAR_5,
                            svn_wc__db_wcroot_t *VAR_6,
                            const svn_checksum_t *VAR_7,
                            const svn_checksum_t *VAR_8,
                            apr_int64_t VAR_9,
                            svn_cancel_func_t VAR_10,
                            void *VAR_11,
                            apr_pool_t *VAR_12)
{
  const char *VAR_13;
  svn_sqlite__stmt_t *VAR_14;
  svn_stream_t *VAR_15;
  svn_stream_t *VAR_16;
  const char *VAR_17;
  const char *VAR_18;
  int VAR_19;
  svn_error_t *VAR_20;

  FUNC_1(FUNC_12(&VAR_14, VAR_6->sdb,
                                    VAR_2));
  FUNC_1(FUNC_10(VAR_14, 1, VAR_7, VAR_12));
  FUNC_1(FUNC_10(VAR_14, 2, VAR_8, VAR_12));
  FUNC_1(FUNC_11(VAR_14, 3, VAR_9));

  FUNC_1(FUNC_13(&VAR_19, VAR_14));

  if (VAR_19 == 0)
    return VAR_3;

  FUNC_1(FUNC_16(&VAR_16, &VAR_17,
                                 FUNC_3(VAR_6,
                                                      VAR_12,
                                                      VAR_12),
                                 VAR_4,
                                 VAR_12, VAR_12));

  FUNC_1(FUNC_2(&VAR_18, VAR_5->abspath, VAR_7,
                             VAR_12, VAR_12));

  FUNC_1(FUNC_15(&VAR_15, VAR_18,
                                   VAR_12, VAR_12));


  FUNC_1(FUNC_14(VAR_15, VAR_16,
                           VAR_10, VAR_11,
                           VAR_12));

  FUNC_1(FUNC_2(&VAR_13, VAR_6->abspath, VAR_7,
                             VAR_12, VAR_12));



  VAR_20 = FUNC_9(VAR_17, VAR_13, VAR_1,
                            VAR_12);


  if (VAR_20 && FUNC_0(VAR_20->apr_err))
    {
      svn_error_t *VAR_21;

      VAR_21 = FUNC_8(FUNC_4(VAR_13,
                                                VAR_12),
                             VAR_0, VAR_12);

      if (VAR_21)

        return FUNC_7(FUNC_6(VAR_20, VAR_21));
      else

        FUNC_5(VAR_20);

      FUNC_1(FUNC_9(VAR_17, VAR_13, VAR_1,
                                  VAR_12));
    }
  else
    FUNC_1(VAR_20);

  return VAR_3;
}
