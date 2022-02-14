
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int offset; int item_index; } ;
typedef TYPE_1__ l2p_proto_entry_t ;
typedef int apr_uint64_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;
typedef int apr_file_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__,int *) ;

svn_error_t *
FUNC_3(apr_file_t *VAR_1,
                                     apr_off_t VAR_2,
                                     apr_uint64_t VAR_3,
                                     apr_pool_t *VAR_4)
{
  l2p_proto_entry_t VAR_5;


  FUNC_0(VAR_2 >= -1);


  VAR_5.offset = (apr_uint64_t)VAR_2 + 1;



  FUNC_0(VAR_3 < VAR_0 / 2);
  VAR_5.item_index = VAR_3;

  return FUNC_1(FUNC_2(VAR_1, VAR_5,
                                                        VAR_4));
}
