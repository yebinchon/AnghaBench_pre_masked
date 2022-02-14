
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int props; } ;
typedef TYPE_1__ svn_element__payload_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {scalar_t__ nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__**,int ,int ,int *) ;

__attribute__((used)) static svn_boolean_t
FUNC_2(svn_element__payload_t *VAR_1,
            svn_element__payload_t *VAR_2,
            apr_pool_t *VAR_3)
{
  apr_array_header_t *VAR_4;

  if (!VAR_1 || !VAR_2)
    return VAR_0;

  FUNC_0(FUNC_1(&VAR_4,
                                 VAR_1->props,
                                 VAR_2->props,
                                 VAR_3));
  return (VAR_4->nelts == 0);
}
