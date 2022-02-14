
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct keyring_list {int nkeys; int * keys; } ;
struct TYPE_5__ {int subscriptions; } ;
struct TYPE_7__ {int * next; } ;
struct TYPE_6__ {TYPE_3__ link; } ;
struct key {TYPE_1__ payload; TYPE_2__ type_data; scalar_t__ description; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct keyring_list*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct keyring_list* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct key *VAR_1)
{
 struct keyring_list *VAR_2;
 int VAR_3;

 if (VAR_1->description) {
  FUNC_5(&VAR_0);

  if (VAR_1->type_data.link.next != ((void*)0) &&
      !FUNC_3(&VAR_1->type_data.link))
   FUNC_2(&VAR_1->type_data.link);

  FUNC_6(&VAR_0);
 }

 VAR_2 = FUNC_4(VAR_1->payload.subscriptions);
 if (VAR_2) {
  for (VAR_3 = VAR_2->nkeys - 1; VAR_3 >= 0; VAR_3--)
   FUNC_0(VAR_2->keys[VAR_3]);
  FUNC_1(VAR_2);
 }
}
