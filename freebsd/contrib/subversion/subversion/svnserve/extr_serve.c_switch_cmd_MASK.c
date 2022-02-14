
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
typedef int svn_boolean_t ;
struct TYPE_9__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {char const* repos_url; TYPE_1__* fs_path; int fs; } ;
struct TYPE_7__ {int data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int * FUNC_4 (int *,int *,int *,int *,TYPE_3__*,int ,char const*,char const*,int ,int ,int,int) ;
 int FUNC_5 (int ,int ,char const**) ;
 int FUNC_6 (TYPE_3__*,int *,int *,char*,int ) ;
 int FUNC_7 (char const*) ;
 int VAR_1 ;
 int FUNC_8 (int *,int ,int *) ;
 char* FUNC_9 (int ,char const*,int *) ;
 int FUNC_10 (char const*,char const*,int ,int ,int *) ;
 int FUNC_11 (char const*,int *) ;
 int FUNC_12 (int *,char*,int *,char const**,int *,char const**,char const**,scalar_t__*,scalar_t__*) ;
 char* FUNC_13 (char const*,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_14 (char const*,int *) ;
 int FUNC_15 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_ra_svn_conn_t *VAR_4,
           apr_pool_t *VAR_5,
           svn_ra_svn__list_t *VAR_6,
           void *VAR_7)
{
  server_baton_t *VAR_8 = VAR_7;
  svn_revnum_t VAR_9;
  const char *VAR_10, *VAR_11;
  const char *VAR_12, *VAR_13;
  svn_boolean_t VAR_14;


  svn_depth_t VAR_15 = VAR_1;
  svn_tristate_t VAR_16;
  svn_tristate_t VAR_17;


  FUNC_2(FUNC_12(VAR_6, "(?r)cbc?w?33", &VAR_9, &VAR_10,
                                  &VAR_14, &VAR_12, &VAR_11,
                                  &VAR_16, &VAR_17));
  VAR_10 = FUNC_13(VAR_10, VAR_5);
  VAR_12 = FUNC_14(VAR_12, VAR_5);

  if (VAR_11)
    VAR_15 = FUNC_7(VAR_11);
  else
    VAR_15 = FUNC_1(VAR_14);

  FUNC_2(FUNC_15(VAR_4, VAR_5, VAR_8));
  if (!FUNC_3(VAR_9))
    FUNC_0(FUNC_8(&VAR_9, VAR_8->repository->fs, VAR_5));

  FUNC_0(FUNC_5(FUNC_11(VAR_8->repository->repos_url,
                                              VAR_5),
                          FUNC_11(VAR_12, VAR_5),
                          &VAR_13));

  {
    const char *VAR_18 = FUNC_9(VAR_8->repository->fs_path->data,
                                             VAR_10, VAR_5);
    FUNC_2(FUNC_6(VAR_8, VAR_4, VAR_5, "%s",
                        FUNC_10(VAR_18, VAR_13, VAR_9,
                                        VAR_15, VAR_5)));
  }

  return FUNC_4(((void*)0), ((void*)0),
                       VAR_4, VAR_5, VAR_8, VAR_9, VAR_10, VAR_13, VAR_0,
                       VAR_15,
                       (VAR_16 == VAR_3),
                       (VAR_17 != VAR_2));
}
