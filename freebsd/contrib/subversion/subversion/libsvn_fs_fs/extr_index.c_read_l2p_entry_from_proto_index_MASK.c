
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int item_index; int offset; } ;
typedef TYPE_1__ l2p_proto_entry_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(apr_file_t *VAR_1,
                                l2p_proto_entry_t *VAR_2,
                                svn_boolean_t *VAR_3,
                                apr_pool_t *VAR_4)
{
  FUNC_0(FUNC_1(VAR_1, &VAR_2->offset, VAR_3,
                                       VAR_4));
  FUNC_0(FUNC_1(VAR_1, &VAR_2->item_index, VAR_3,
                                       VAR_4));

  return VAR_0;
}
