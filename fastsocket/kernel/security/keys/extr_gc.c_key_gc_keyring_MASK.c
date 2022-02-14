
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct keyring_list {int nkeys; struct key** keys; } ;
struct TYPE_2__ {int subscriptions; } ;
struct key {scalar_t__ expiry; int flags; TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*,scalar_t__) ;
 int FUNC_3 (char*) ;
 struct keyring_list* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct key *VAR_2, time_t VAR_3)
{
 struct keyring_list *VAR_4;
 struct key *VAR_5;
 int VAR_6;

 FUNC_0("%x", FUNC_1(VAR_2));

 if (FUNC_8(VAR_1, &VAR_2->flags))
  goto dont_gc;


 FUNC_5();
 VAR_4 = FUNC_4(VAR_2->payload.subscriptions);
 if (!VAR_4)
  goto unlock_dont_gc;

 VAR_6 = VAR_4->nkeys;
 FUNC_7();
 for (VAR_6--; VAR_6 >= 0; VAR_6--) {
  VAR_5 = VAR_4->keys[VAR_6];
  if (FUNC_8(VAR_0, &VAR_5->flags) ||
      (VAR_5->expiry > 0 && VAR_5->expiry <= VAR_3))
   goto do_gc;
 }

unlock_dont_gc:
 FUNC_6();
dont_gc:
 FUNC_3(" [no gc]");
 return;

do_gc:
 FUNC_6();

 FUNC_2(VAR_2, VAR_3);
 FUNC_3(" [gc]");
}
