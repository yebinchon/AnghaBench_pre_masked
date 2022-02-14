
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ck_array {TYPE_2__* active; TYPE_2__* transaction; TYPE_1__* allocator; } ;
struct _ck_array {int dummy; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_4__ {int (* free ) (TYPE_2__*,int,int) ;} ;


 int FUNC_0 (TYPE_2__*,int,int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;

void
FUNC_2(struct ck_array *VAR_0, bool VAR_1)
{

 VAR_0->allocator->free(VAR_0->active,
     sizeof(struct _ck_array) + sizeof(void *) * VAR_0->active->length, VAR_1);

 if (VAR_0->transaction != ((void*)0)) {
  VAR_0->allocator->free(VAR_0->transaction,
      sizeof(struct _ck_array) + sizeof(void *) * VAR_0->transaction->length, VAR_1);
 }

 VAR_0->transaction = VAR_0->active = ((void*)0);
 return;
}
