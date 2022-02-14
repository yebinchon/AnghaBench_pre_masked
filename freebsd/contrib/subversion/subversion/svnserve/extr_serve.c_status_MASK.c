
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
typedef int svn_depth_t ;
typedef int svn_boolean_t ;
struct TYPE_9__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {TYPE_1__* fs_path; int fs; } ;
struct TYPE_7__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int *,int *,int *,TYPE_3__*,int ,char const*,int *,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int *,int *,char*,int ) ;
 int FUNC_6 (char const*) ;
 int VAR_1 ;
 int FUNC_7 (int *,int ,int *) ;
 char* FUNC_8 (int ,char const*,int *) ;
 int FUNC_9 (char const*,int ,int ,int *) ;
 int FUNC_10 (int *,char*,char const**,int *,int *,char const**) ;
 char* FUNC_11 (char const*,int *) ;
 int FUNC_12 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_ra_svn_conn_t *VAR_2,
       apr_pool_t *VAR_3,
       svn_ra_svn__list_t *VAR_4,
       void *VAR_5)
{
  server_baton_t *VAR_6 = VAR_5;
  svn_revnum_t VAR_7;
  const char *VAR_8, *VAR_9;
  svn_boolean_t VAR_10;


  svn_depth_t VAR_11 = VAR_1;


  FUNC_2(FUNC_10(VAR_4, "cb?(?r)?w",
                                  &VAR_8, &VAR_10, &VAR_7, &VAR_9));
  VAR_8 = FUNC_11(VAR_8, VAR_3);

  if (VAR_9)
    VAR_11 = FUNC_6(VAR_9);
  else
    VAR_11 = FUNC_1(VAR_10);

  FUNC_2(FUNC_12(VAR_2, VAR_3, VAR_6));
  if (!FUNC_3(VAR_7))
    FUNC_0(FUNC_7(&VAR_7, VAR_6->repository->fs, VAR_3));

  {
    const char *VAR_12 = FUNC_8(VAR_6->repository->fs_path->data,
                                             VAR_8, VAR_3);
    FUNC_2(FUNC_5(VAR_6, VAR_2, VAR_3, "%s",
                        FUNC_9(VAR_12, VAR_7, VAR_11, VAR_3)));
  }

  return FUNC_4(((void*)0), ((void*)0), VAR_2, VAR_3, VAR_6, VAR_7, VAR_8, ((void*)0), VAR_0,
                       VAR_11, VAR_0, VAR_0);
}
