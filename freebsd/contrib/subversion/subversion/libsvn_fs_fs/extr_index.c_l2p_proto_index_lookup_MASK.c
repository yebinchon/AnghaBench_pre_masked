
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {scalar_t__ item_index; scalar_t__ offset; } ;
typedef TYPE_1__ l2p_proto_entry_t ;
typedef scalar_t__ apr_uint64_t ;
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
 int FUNC_2 (int *,int const*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **,int ,int,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_off_t *VAR_5,
                       svn_fs_t *VAR_6,
                       const svn_fs_fs__id_part_t *VAR_7,
                       apr_uint64_t VAR_8,
                       apr_pool_t *VAR_9)
{
  svn_boolean_t VAR_10 = VAR_3;
  apr_file_t *VAR_11 = ((void*)0);
  FUNC_0(FUNC_4(&VAR_11,
                           FUNC_2(VAR_6, VAR_7,
                                                           VAR_9),
                           VAR_2 | VAR_0, VAR_1,
                           VAR_9));


  *VAR_5 = -1;
  while (!VAR_10)
    {
      l2p_proto_entry_t VAR_12;


      FUNC_0(FUNC_1(VAR_11, &VAR_12, &VAR_10,
                                              VAR_9));


      if (!VAR_10 && VAR_12.item_index == VAR_8)
        {
          *VAR_5 = (apr_off_t)VAR_12.offset - 1;
          break;
        }
    }

  FUNC_0(FUNC_3(VAR_11, VAR_9));

  return VAR_4;
}
