
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int payload; int name; } ;
typedef TYPE_1__ svn_element__content_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__ const*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;

svn_element__content_t *
FUNC_3(const svn_element__content_t *VAR_0,
                         apr_pool_t *VAR_1)
{
  svn_element__content_t *VAR_2
     = FUNC_0(VAR_1, VAR_0, sizeof(*VAR_2));

  VAR_2->name = FUNC_1(VAR_1, VAR_0->name);
  VAR_2->payload = FUNC_2(VAR_0->payload, VAR_1);
  return VAR_2;
}
