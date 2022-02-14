
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ object_count; scalar_t__ unused_count; } ;
typedef TYPE_1__ svn_object_pool__t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static apr_status_t
FUNC_1(void *VAR_1)
{
  svn_object_pool__t *VAR_2 = VAR_1;


  FUNC_0( VAR_2->object_count
                           == VAR_2->unused_count);

  return VAR_0;
}
