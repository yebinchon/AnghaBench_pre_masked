
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_ra_svn_conn_t ;
typedef int svn_ra_svn__list_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int baton; int pool; } ;
typedef TYPE_2__ ra_svn_token_entry_t ;
struct TYPE_10__ {TYPE_1__* editor; } ;
typedef TYPE_3__ ra_svn_driver_state_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {int (* add_directory ) (char const*,int ,char const*,int ,int *,void**) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_3__*,int *,int ,TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*,void*,int *,int ,int *) ;
 int FUNC_4 (char const*,int ,char const*,int ,int *,void**) ;
 char* FUNC_5 (char const*,int *) ;
 scalar_t__ FUNC_6 (char const*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int const*,char*,char const**,int **,int **,char const**,int *) ;
 char* FUNC_9 (char const*,int *) ;
 char* FUNC_10 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_ra_svn_conn_t *VAR_2,
                      apr_pool_t *VAR_3,
                      const svn_ra_svn__list_t *VAR_4,
                      ra_svn_driver_state_t *VAR_5)
{
  const char *VAR_6, *VAR_7;
  svn_string_t *VAR_8, *VAR_9;
  svn_revnum_t VAR_10;
  ra_svn_token_entry_t *VAR_11;
  apr_pool_t *VAR_12;
  void *VAR_13;

  FUNC_1(FUNC_8(VAR_4, "css(?cr)", &VAR_6, &VAR_8,
                                  &VAR_9, &VAR_7, &VAR_10));
  FUNC_1(FUNC_2(VAR_5, VAR_8, VAR_0, &VAR_11));
  VAR_12 = FUNC_7(VAR_11->pool);
  VAR_6 = FUNC_9(VAR_6, VAR_3);



  if (VAR_7)
    {
      if (FUNC_6(VAR_7))
        VAR_7 = FUNC_10(VAR_7, VAR_3);
      else
        VAR_7 = FUNC_5(VAR_7, VAR_3);
    }

  FUNC_0(VAR_5->editor->add_directory(VAR_6, VAR_11->baton, VAR_7,
                                        VAR_10, VAR_12, &VAR_13));
  FUNC_3(VAR_5, VAR_13, VAR_9, VAR_0, VAR_12);
  return VAR_1;
}
