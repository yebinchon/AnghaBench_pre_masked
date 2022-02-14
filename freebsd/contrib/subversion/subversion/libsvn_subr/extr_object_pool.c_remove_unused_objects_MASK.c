
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int unused_count; int object_count; int objects; int pool; } ;
typedef TYPE_2__ svn_object_pool__t ;
struct TYPE_6__ {int size; int data; } ;
struct TYPE_8__ {int * pool; TYPE_1__ key; int ref_count; } ;
typedef TYPE_3__ object_ref_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(svn_object_pool__t *VAR_0)
{
  apr_pool_t *VAR_1 = FUNC_6(VAR_0->pool);


  apr_hash_index_t *VAR_2;
  for (VAR_2 = FUNC_0(VAR_1, VAR_0->objects);
       VAR_2 != ((void*)0);
       VAR_2 = FUNC_1(VAR_2))
    {
      object_ref_t *VAR_3 = FUNC_3(VAR_2);



      if (FUNC_5(&VAR_3->ref_count) == 0)
        {
          FUNC_2(VAR_0->objects, VAR_3->key.data,
                       VAR_3->key.size, ((void*)0));
          FUNC_4(&VAR_0->object_count);
          FUNC_4(&VAR_0->unused_count);

          FUNC_7(VAR_3->pool);
        }
    }

  FUNC_7(VAR_1);
}
