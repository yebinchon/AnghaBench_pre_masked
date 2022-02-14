
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mutex; } ;
typedef TYPE_1__ svn_object_pool__t ;
typedef int svn_membuf_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_1 (void**,TYPE_1__*,int *,int *) ;

svn_error_t *
FUNC_2(void **VAR_1,
                        svn_object_pool__t *VAR_2,
                        svn_membuf_t *VAR_3,
                        apr_pool_t *VAR_4)
{
  *VAR_1 = ((void*)0);
  FUNC_0(VAR_2->mutex,
                       FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4));
  return VAR_0;
}
