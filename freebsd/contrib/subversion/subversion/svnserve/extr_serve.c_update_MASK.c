
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ svn_tristate_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_9__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int fs; TYPE_1__* fs_path; } ;
struct TYPE_7__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__*,int *,int *,int *,TYPE_3__*,int ,char const*,int *,int ,int ,int,int) ;
 int FUNC_5 (TYPE_3__*,int *,int *,char*,int ) ;
 int FUNC_6 (int *,int *,TYPE_3__*,int ,char const*,int ) ;
 int VAR_3 ;
 int FUNC_7 (char const*) ;
 int VAR_4 ;
 int FUNC_8 (int *,int ,int *) ;
 char* FUNC_9 (int ,char const*,int *) ;
 int FUNC_10 (char const*,int ,int ,int *) ;
 int FUNC_11 (char const*,int ,int ,int,int *) ;
 int FUNC_12 (int *,char*,int *,char const**,scalar_t__*,char const**,scalar_t__*,scalar_t__*) ;
 char* FUNC_13 (char const*,int *) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_ra_svn_conn_t *VAR_6,
       apr_pool_t *VAR_7,
       svn_ra_svn__list_t *VAR_8,
       void *VAR_9)
{
  server_baton_t *VAR_10 = VAR_9;
  svn_revnum_t VAR_11;
  const char *VAR_12, *VAR_13, *VAR_14;
  svn_boolean_t VAR_15;
  svn_tristate_t VAR_16;
  svn_tristate_t VAR_17;


  svn_depth_t VAR_18 = VAR_4;
  svn_boolean_t VAR_19;


  FUNC_2(FUNC_12(VAR_8, "(?r)cb?w3?3", &VAR_11, &VAR_12,
                                  &VAR_15, &VAR_14,
                                  &VAR_16, &VAR_17));
  VAR_12 = FUNC_13(VAR_12, VAR_7);

  if (VAR_14)
    VAR_18 = FUNC_7(VAR_14);
  else
    VAR_18 = FUNC_1(VAR_15);

  VAR_13 = FUNC_9(VAR_10->repository->fs_path->data, VAR_12, VAR_7);

  FUNC_2(FUNC_6(VAR_6, VAR_7, VAR_10, VAR_3, VAR_13, VAR_0));

  if (!FUNC_3(VAR_11))
    FUNC_0(FUNC_8(&VAR_11, VAR_10->repository->fs, VAR_7));

  FUNC_2(FUNC_4(&VAR_19, ((void*)0),
                        VAR_6, VAR_7, VAR_10, VAR_11, VAR_12, ((void*)0), VAR_2,
                        VAR_18,
                        (VAR_16 == VAR_5),
                        (VAR_17 == VAR_5)));
  if (VAR_19)
    {
      FUNC_2(FUNC_5(VAR_10, VAR_6, VAR_7, "%s",
                          FUNC_10(VAR_13, VAR_11,
                                            VAR_18, VAR_7)));
    }
  else
    {
      FUNC_2(FUNC_5(VAR_10, VAR_6, VAR_7, "%s",
                          FUNC_11(VAR_13, VAR_11, VAR_18,
                                          (VAR_16
                                           == VAR_5),
                                          VAR_7)));
    }

  return VAR_1;
}
