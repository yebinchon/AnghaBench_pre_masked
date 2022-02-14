
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__ item_index; scalar_t__ offset; } ;
typedef TYPE_1__ l2p_proto_entry_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__,int *) ;

svn_error_t *
FUNC_2(apr_file_t *VAR_0,
                                        apr_pool_t *VAR_1)
{
  l2p_proto_entry_t VAR_2;
  VAR_2.offset = 0;
  VAR_2.item_index = 0;

  return FUNC_0(FUNC_1(VAR_0, VAR_2,
                                                        VAR_1));
}
