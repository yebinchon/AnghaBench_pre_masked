
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int objects; } ;
typedef TYPE_1__ svn_object_pool__t ;
struct TYPE_9__ {int size; int data; } ;
typedef TYPE_2__ svn_membuf_t ;
typedef int svn_error_t ;
struct TYPE_10__ {void* object; } ;
typedef TYPE_3__ object_ref_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 TYPE_3__* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_1,
       svn_object_pool__t *VAR_2,
       svn_membuf_t *VAR_3,
       apr_pool_t *VAR_4)
{
  object_ref_t *VAR_5
    = FUNC_1(VAR_2->objects, VAR_3->data, VAR_3->size);

  if (VAR_5)
    {
      *VAR_1 = VAR_5->object;
      FUNC_0(VAR_5, VAR_4);
    }
  else
    {
      *VAR_1 = ((void*)0);
    }

  return VAR_0;
}
