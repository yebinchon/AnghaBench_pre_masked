
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_element__payload_t ;
struct TYPE_4__ {int parent_eid; int payload; int name; } ;
typedef TYPE_1__ svn_element__content_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int const*,int *) ;

svn_element__content_t *
FUNC_3(int VAR_0,
                            const char *VAR_1,
                            const svn_element__payload_t *VAR_2,
                            apr_pool_t *VAR_3)
{
  svn_element__content_t *VAR_4
     = FUNC_0(VAR_3, sizeof(*VAR_4));

  VAR_4->parent_eid = VAR_0;
  VAR_4->name = FUNC_1(VAR_3, VAR_1);
  VAR_4->payload = FUNC_2(VAR_2, VAR_3);
  return VAR_4;
}
