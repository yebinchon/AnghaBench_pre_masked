
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ parent_eid; int payload; int name; } ;
typedef TYPE_1__ svn_element__content_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *) ;

svn_boolean_t
FUNC_2(const svn_element__content_t *VAR_2,
                           const svn_element__content_t *VAR_3,
                           apr_pool_t *VAR_4)
{
  if (!VAR_2 && !VAR_3)
    {
      return VAR_1;
    }
  else if (!VAR_2 || !VAR_3)
    {
      return VAR_0;
    }

  if (VAR_2->parent_eid != VAR_3->parent_eid)
    {
      return VAR_0;
    }
  if (FUNC_0(VAR_2->name, VAR_3->name) != 0)
    {
      return VAR_0;
    }
  if (! FUNC_1(VAR_2->payload, VAR_3->payload,
                                   VAR_4))
    {
      return VAR_0;
    }

  return VAR_1;
}
