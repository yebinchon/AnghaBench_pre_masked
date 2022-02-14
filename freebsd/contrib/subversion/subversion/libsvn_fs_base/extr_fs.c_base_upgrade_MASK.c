
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_mutex__t ;
typedef TYPE_1__* (* svn_fs_upgrade_notify_t ) (void*,int ,int ,int *) ;
typedef int svn_fs_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 char* FUNC_2 (int *,char*,int ) ;
 TYPE_1__* FUNC_3 (int *,char const*,int *,int *,int *) ;
 TYPE_1__* FUNC_4 (int) ;
 char* FUNC_5 (char const*,int ,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int *,int ,char const*,int *) ;
 TYPE_1__* FUNC_8 (int *,int *,int *) ;
 int VAR_5 ;
 TYPE_1__* FUNC_9 (int*,char const*,int *) ;
 TYPE_1__* FUNC_10 (char const*,int ,int *) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_fs_t *VAR_6,
             const char *VAR_7,
             svn_fs_upgrade_notify_t VAR_8,
             void *VAR_9,
             svn_cancel_func_t VAR_10,
             void *VAR_11,
             svn_mutex__t *VAR_12,
             apr_pool_t *VAR_13,
             apr_pool_t *VAR_14)
{
  const char *VAR_15;
  int VAR_16;
  svn_error_t *VAR_17;

  VAR_15 = FUNC_5(VAR_7, VAR_0, VAR_13);


  VAR_17 = FUNC_9(&VAR_16, VAR_15, VAR_13);
  if (VAR_17 && FUNC_0(VAR_17->apr_err))
    {

      VAR_16 = 0;
      FUNC_6(VAR_17);
      VAR_17 = VAR_4;
    }
  FUNC_1(VAR_17);
  FUNC_1(FUNC_4(VAR_16));


  FUNC_1(FUNC_10(VAR_15,
                                    VAR_1, VAR_13));
  if (VAR_8)
    FUNC_1(VAR_8(VAR_9, VAR_1,
                        VAR_5, VAR_13));


  if (VAR_16 < VAR_2)
    {
      apr_pool_t *VAR_18 = FUNC_11(VAR_13);
      svn_revnum_t VAR_19;
      const char *VAR_20;
      FUNC_1(FUNC_3(VAR_6, VAR_7, VAR_12, VAR_18, VAR_14));


      FUNC_1(FUNC_8(&VAR_19, VAR_6, VAR_18));
      VAR_20 = FUNC_2(VAR_18, "%ld", VAR_19);
      FUNC_1(FUNC_7
              (VAR_6, VAR_3,
               VAR_20, VAR_18));
      FUNC_12(VAR_18);
    }

  return VAR_4;
}
