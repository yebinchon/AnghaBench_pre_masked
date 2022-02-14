
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keyring_list {int nkeys; struct key** keys; } ;
struct key_type {scalar_t__ (* match ) (struct key*,char const*) ;} ;
struct TYPE_2__ {int subscriptions; } ;
struct key {int usage; int flags; struct key_type const* type; TYPE_1__ payload; } ;
typedef int key_ref_t ;
typedef int key_perm_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct key* FUNC_4 (int ) ;
 int FUNC_5 (struct key*,unsigned long) ;
 struct keyring_list* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct key*,char const*) ;
 int FUNC_11 (int ,int *) ;

key_ref_t FUNC_12(key_ref_t VAR_2,
          const struct key_type *VAR_3,
          const char *VAR_4,
          key_perm_t VAR_5)
{
 struct keyring_list *VAR_6;
 unsigned long VAR_7;
 struct key *VAR_8, *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = FUNC_4(VAR_2);
 VAR_7 = FUNC_2(VAR_2);

 FUNC_7();

 VAR_6 = FUNC_6(VAR_8->payload.subscriptions);
 if (VAR_6) {
  VAR_10 = VAR_6->nkeys;
  FUNC_9();
  for (VAR_11 = 0; VAR_11 < VAR_10 ; VAR_11++) {
   VAR_9 = VAR_6->keys[VAR_11];

   if (VAR_9->type == VAR_3 &&
       (!VAR_9->type->match ||
        VAR_9->type->match(VAR_9, VAR_4)) &&
       FUNC_3(FUNC_5(VAR_9, VAR_7),
        VAR_5) == 0 &&
       !FUNC_11(VAR_1, &VAR_9->flags)
       )
    goto found;
  }
 }

 FUNC_8();
 return FUNC_0(-VAR_0);

found:
 FUNC_1(&VAR_9->usage);
 FUNC_8();
 return FUNC_5(VAR_9, VAR_7);
}
