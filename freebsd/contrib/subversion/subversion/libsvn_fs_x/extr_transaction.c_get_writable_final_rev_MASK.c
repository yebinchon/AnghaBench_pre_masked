
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_x__batch_fsync_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_3__ {void** lockcookie; int txn_id; } ;
typedef TYPE_1__ get_writable_proto_rev_baton_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int *,int *,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,char const*,int *) ;
 int FUNC_4 (int **,int *,char const*,int *) ;
 char* FUNC_5 (int *,int ,int *) ;
 char* FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (char const*,char const*,int ,int *) ;
 int FUNC_8 (int *,int ,int *,int *) ;
 int FUNC_9 (int *,int ,void*,int *) ;
 int FUNC_10 (int *,int ,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(apr_file_t **VAR_4,
                       svn_fs_t *VAR_5,
                       svn_fs_x__txn_id_t VAR_6,
                       svn_revnum_t VAR_7,
                       svn_fs_x__batch_fsync_t *VAR_8,
                       apr_pool_t *VAR_9)
{
  get_writable_proto_rev_baton_t VAR_10;
  apr_off_t VAR_11 = 0;
  void *VAR_12;

  const char *VAR_13
    = FUNC_6(VAR_5, VAR_6, VAR_9);
  const char *VAR_14
    = FUNC_5(VAR_5, VAR_7, VAR_9);


  VAR_10.lockcookie = &VAR_12;
  VAR_10.txn_id = VAR_6;

  FUNC_0(FUNC_10(VAR_5, VAR_3, &VAR_10,
                            VAR_9));



  FUNC_0(FUNC_2(FUNC_7(VAR_13,
                                                       VAR_14,
                                                       VAR_1,
                                                       VAR_9),
                                   FUNC_9(VAR_5, VAR_6, VAR_12,
                                                    VAR_9)));
  FUNC_0(FUNC_3(VAR_8, VAR_14,
                                         VAR_9));



  FUNC_0(FUNC_4(VAR_4, VAR_8, VAR_14,
                                          VAR_9));
  FUNC_0(FUNC_8(*VAR_4, VAR_0, &VAR_11, VAR_9));




  FUNC_0(FUNC_1(VAR_5, *VAR_4, VAR_11, VAR_6,
                                  VAR_9));

  return VAR_2;
}
