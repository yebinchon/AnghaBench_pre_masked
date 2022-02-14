
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_3__ {void** lockcookie; int txn_id; } ;
typedef TYPE_1__ get_writable_proto_rev_baton_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int ,int ,int *) ;
 int VAR_5 ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int * FUNC_5 (int **,int ,int,int ,int *) ;
 int * FUNC_6 (int *,int ,int *,int *) ;
 int FUNC_7 (int *,int ,void*,int *) ;
 int FUNC_8 (int *,int ,TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(apr_file_t **VAR_6,
                       void **VAR_7,
                       svn_fs_t *VAR_8,
                       svn_fs_x__txn_id_t VAR_9,
                       apr_pool_t *VAR_10)
{
  get_writable_proto_rev_baton_t VAR_11;
  svn_error_t *VAR_12;
  apr_off_t VAR_13 = 0;

  VAR_11.lockcookie = VAR_7;
  VAR_11.txn_id = VAR_9;

  FUNC_0(FUNC_8(VAR_8, VAR_5, &VAR_11, VAR_10));


  VAR_12 = FUNC_5(VAR_6,
                         FUNC_4(VAR_8, VAR_9, VAR_10),
                         VAR_3 | VAR_4 | VAR_0, VAR_2,
                         VAR_10);
  if (!VAR_12)
    VAR_12 = FUNC_6(*VAR_6, VAR_1, &VAR_13, VAR_10);






  if (!VAR_12)
    VAR_12 = FUNC_1(VAR_8, *VAR_6, VAR_13, VAR_9, VAR_10);

  if (VAR_12)
    {
      VAR_12 = FUNC_2(
              VAR_12,
              FUNC_7(VAR_8, VAR_9, *VAR_7, VAR_10));

      *VAR_7 = ((void*)0);
    }

  return FUNC_3(VAR_12);
}
