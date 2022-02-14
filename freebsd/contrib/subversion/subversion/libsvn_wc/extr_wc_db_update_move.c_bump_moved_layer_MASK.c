
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int wc_id; int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_sqlite__stmt_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,char const*,int,char const*,char const*,int *,int *) ;
 int FUNC_2 (scalar_t__*,TYPE_1__*,char const*,int,int ,int *) ;
 char* FUNC_3 (char const*,int,int *) ;
 int FUNC_4 (int *,char*,int ,char const*,int,int) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,int *) ;
 int FUNC_8 (TYPE_1__*,char const*,int,char const*,int *,int *,int *) ;
 int FUNC_9 (int **,int *,int *,TYPE_1__*,char const*,int *,int *) ;
 int FUNC_10 (scalar_t__*,TYPE_1__*,char const*,scalar_t__,int *) ;
 int FUNC_11 (TYPE_1__*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(svn_boolean_t *VAR_4,
                 svn_wc__db_wcroot_t *VAR_5,
                 const char *VAR_6,
                 int VAR_7,
                 const char *VAR_8,
                 int VAR_9,
                 svn_depth_t VAR_10,
                 const char *VAR_11,
                 svn_wc__db_t *VAR_12,
                 apr_pool_t *VAR_13)
{
  svn_sqlite__stmt_t *VAR_14;
  svn_boolean_t VAR_15;
  svn_skel_t *VAR_16;
  svn_boolean_t VAR_17;
  const char *VAR_18;

  FUNC_0(FUNC_11(VAR_5, VAR_6, VAR_13));

  *VAR_4 = VAR_0;

  FUNC_0(FUNC_5(&VAR_14, VAR_5->sdb,
                                    VAR_1));

  FUNC_0(FUNC_4(VAR_14, "isdd", VAR_5->wc_id, VAR_6,
                            VAR_7, VAR_9));

  FUNC_0(FUNC_7(&VAR_15, VAR_14));
  FUNC_0(FUNC_6(VAR_14));

  if (VAR_15)
    return VAR_2;

  if (VAR_7 == 0)
    FUNC_0(FUNC_2(&VAR_17, VAR_5, VAR_8,
                                     VAR_7, VAR_10, VAR_13));
  else


    VAR_17 = VAR_3;


  if (VAR_17)
    {
      svn_boolean_t VAR_19;

      FUNC_0(FUNC_10(&VAR_19, VAR_5,
                                                   VAR_11,
                                                   VAR_0, VAR_13));

      if (!VAR_19)
        VAR_17 = VAR_0;
    }

  VAR_18 = FUNC_3(VAR_8, VAR_9,
                                        VAR_13);

  if (!VAR_17)
    {
      FUNC_0(FUNC_1(VAR_5, VAR_8, VAR_7,
                                      VAR_18, VAR_11,
                                      VAR_12, VAR_13));

      return VAR_2;
    }

  FUNC_0(FUNC_9(&VAR_16, ((void*)0), ((void*)0),
                                            VAR_5, VAR_18,
                                            VAR_13, VAR_13));


  if (!VAR_16)
    {


      FUNC_0(FUNC_11(VAR_5, VAR_8, VAR_13));

      FUNC_0(FUNC_8(VAR_5,
                                                VAR_8, VAR_7,
                                                VAR_11, ((void*)0), ((void*)0),
                                                VAR_13));

      *VAR_4 = VAR_3;
    }

  return VAR_2;
}
