
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* kex; int private_keys; int key; int public_keys; } ;
struct key_entry {TYPE_1__* kex; int private_keys; int key; int public_keys; } ;
struct TYPE_2__ {scalar_t__ server; } ;


 struct ssh* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ssh*,int ) ;
 int FUNC_2 (struct ssh*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (struct ssh*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct ssh *VAR_1)
{
 struct key_entry *VAR_2;

 FUNC_4(VAR_1);




 while ((VAR_2 = FUNC_0(&VAR_1->public_keys)) != ((void*)0)) {
  FUNC_1(&VAR_1->public_keys, VAR_2, VAR_0);
  if (VAR_1->kex && VAR_1->kex->server)
   FUNC_5(VAR_2->key);
  FUNC_2(VAR_2);
 }
 while ((VAR_2 = FUNC_0(&VAR_1->private_keys)) != ((void*)0)) {
  FUNC_1(&VAR_1->private_keys, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
 if (VAR_1->kex)
  FUNC_3(VAR_1->kex);
 FUNC_2(VAR_1);
}
