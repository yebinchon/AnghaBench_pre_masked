
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {scalar_t__ item_index; int sub_item; scalar_t__ offset; } ;
typedef TYPE_1__ l2p_proto_entry_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int * VAR_4 ;
 int FUNC_1 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int ,int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_off_t *VAR_5,
                       apr_uint32_t *VAR_6,
                       svn_fs_t *VAR_7,
                       svn_fs_x__txn_id_t VAR_8,
                       apr_uint64_t VAR_9,
                       apr_pool_t *VAR_10)
{
  svn_boolean_t VAR_11 = VAR_3;
  apr_file_t *VAR_12 = ((void*)0);
  FUNC_0(FUNC_4(&VAR_12,
                           FUNC_2(VAR_7, VAR_8,
                                                          VAR_10),
                           VAR_2 | VAR_0, VAR_1,
                           VAR_10));


  *VAR_5 = -1;
  while (!VAR_11)
    {
      l2p_proto_entry_t VAR_13;


      FUNC_0(FUNC_1(VAR_12, &VAR_13, &VAR_11,
                                              VAR_10));


      if (!VAR_11 && VAR_13.item_index == VAR_9)
        {
          *VAR_5 = (apr_off_t)VAR_13.offset - 1;
          *VAR_6 = VAR_13.sub_item;
          break;
        }
    }

  FUNC_0(FUNC_3(VAR_12, VAR_10));

  return VAR_4;
}
