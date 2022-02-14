
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_11__ {TYPE_2__* repository; } ;
typedef TYPE_3__ server_baton_t ;
struct TYPE_12__ {int * conn; TYPE_3__* server; } ;
typedef TYPE_4__ authz_baton_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int repos; int fs; TYPE_1__* fs_path; } ;
struct TYPE_9__ {int data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (void*,int *,int *,char*,int ) ;
 int * FUNC_5 (int *,TYPE_3__*,int *,int *) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (int ,int *,char*) ;
 int * FUNC_8 (scalar_t__*,int ,int *) ;
 char* FUNC_9 (int ,char const*,int *) ;
 int FUNC_10 (char const*,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_11 (int *,char*,char const**,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (int *,int *,char*) ;
 int * FUNC_13 (int *,int *,char*) ;
 char* FUNC_14 (char const*,int *) ;
 int * FUNC_15 (int ,char const*,scalar_t__,scalar_t__,scalar_t__,int ,void*,int ,TYPE_4__*,int *) ;
 int FUNC_16 (int *,int *,TYPE_3__*) ;

__attribute__((used)) static svn_error_t *
FUNC_17(svn_ra_svn_conn_t *VAR_3,
                      apr_pool_t *VAR_4,
                      svn_ra_svn__list_t *VAR_5,
                      void *VAR_6)
{
  svn_error_t *VAR_7, *VAR_8;
  server_baton_t *VAR_9 = VAR_6;
  svn_revnum_t VAR_10, VAR_11, VAR_12;
  const char *VAR_13;
  const char *VAR_14;
  authz_baton_t VAR_15;

  VAR_15.server = VAR_9;
  VAR_15.conn = VAR_3;


  FUNC_1(FUNC_11(VAR_5, "c(?r)(?r)(?r)",
                                  &VAR_13, &VAR_10,
                                  &VAR_11, &VAR_12));
  VAR_13 = FUNC_14(VAR_13, VAR_4);

  VAR_14 = FUNC_9(VAR_9->repository->fs_path->data, VAR_13,
                              VAR_4);

  FUNC_1(FUNC_16(VAR_3, VAR_4, VAR_9));
  FUNC_1(FUNC_4(VAR_6, VAR_3, VAR_4, "%s",
                      FUNC_10(VAR_14, VAR_10,
                                                     VAR_11, VAR_12,
                                                     VAR_4)));


  if (!FUNC_2(VAR_11) || !FUNC_2(VAR_10))
    {
      svn_revnum_t VAR_16;

      VAR_7 = FUNC_8(&VAR_16, VAR_9->repository->fs, VAR_4);

      if (VAR_7)
        {
          VAR_7 = FUNC_6(
                    FUNC_13(VAR_3, VAR_4, "done"),
                    VAR_7);

          return FUNC_5(VAR_7, VAR_9, VAR_3, VAR_4);
        }

      if (!FUNC_2(VAR_11))
        VAR_11 = VAR_16;
      if (!FUNC_2(VAR_10))
        VAR_10 = VAR_16;
    }


  if (!FUNC_2(VAR_12))
    VAR_12 = 0;

  if (VAR_12 > VAR_11)
    {
      VAR_7 = FUNC_13(VAR_3, VAR_4, "done");
      VAR_7 = FUNC_7(VAR_0, VAR_7,
                              "Get-location-segments end revision must not be "
                              "younger than start revision");
      return FUNC_5(VAR_7, VAR_9, VAR_3, VAR_4);
    }

  if (VAR_11 > VAR_10)
    {
      VAR_7 = FUNC_13(VAR_3, VAR_4, "done");
      VAR_7 = FUNC_7(VAR_0, VAR_7,
                              "Get-location-segments start revision must not "
                              "be younger than peg revision");
      return FUNC_5(VAR_7, VAR_9, VAR_3, VAR_4);
    }







  VAR_7 = FUNC_15(VAR_9->repository->repos, VAR_14,
                                         VAR_10, VAR_11, VAR_12,
                                         VAR_2, (void *)VAR_3,
                                         FUNC_3(VAR_9), &VAR_15,
                                         VAR_4);
  VAR_8 = FUNC_13(VAR_3, VAR_4, "done");
  if (VAR_8)
    {
      return FUNC_6(VAR_8, VAR_7);
    }
  FUNC_0(VAR_7);

  FUNC_1(FUNC_12(VAR_3, VAR_4, ""));

  return VAR_1;
}
