
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int objects; int unused_count; int object_count; } ;
typedef TYPE_1__ svn_object_pool__t ;
struct TYPE_13__ {int size; int data; } ;
typedef TYPE_2__ svn_membuf_t ;
typedef int svn_error_t ;
struct TYPE_15__ {int size; int data; } ;
struct TYPE_14__ {void* object; TYPE_1__* object_pool; TYPE_4__ key; int * pool; } ;
typedef TYPE_3__ object_ref_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,int ,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(void **VAR_1,
       svn_object_pool__t *VAR_2,
       const svn_membuf_t *VAR_3,
       void *VAR_4,
       apr_pool_t *VAR_5,
       apr_pool_t *VAR_6)
{
  object_ref_t *VAR_7
    = FUNC_2(VAR_2->objects, VAR_3->data, VAR_3->size);
  if (VAR_7)
    {



      FUNC_10(VAR_5);
    }
  else
    {

      VAR_7 = FUNC_4(VAR_5, sizeof(*VAR_7));
      VAR_7->object_pool = VAR_2;
      VAR_7->object = VAR_4;
      VAR_7->pool = VAR_5;

      FUNC_9(&VAR_7->key, VAR_3->size, VAR_5);
      VAR_7->key.size = VAR_3->size;
      FUNC_5(VAR_7->key.data, VAR_3->data, VAR_3->size);

      FUNC_3(VAR_2->objects, VAR_7->key.data,
                   VAR_7->key.size, VAR_7);
      FUNC_7(&VAR_2->object_count);




      FUNC_7(&VAR_7->object_pool->unused_count);
    }


  *VAR_1 = VAR_7->object;
  FUNC_0(VAR_7, VAR_6);


  if (FUNC_8(&VAR_2->unused_count) * 2
      > FUNC_1(VAR_2->objects) + 2)
    FUNC_6(VAR_2);

  return VAR_0;
}
