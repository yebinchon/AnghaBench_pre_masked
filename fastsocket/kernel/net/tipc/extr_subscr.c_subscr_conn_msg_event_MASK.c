
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unchar ;
typedef int u32 ;
struct tipc_subscr {int dummy; } ;
struct subscription {int dummy; } ;
struct subscriber {int * lock; } ;
struct sk_buff {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (int *) ;
 struct subscription* FUNC_1 (struct tipc_subscr*,struct subscriber*) ;
 int FUNC_2 (struct subscriber*) ;
 int FUNC_3 (struct subscription*) ;
 int * FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void *VAR_0,
      u32 VAR_1,
      struct sk_buff **VAR_2,
      const unchar *VAR_3,
      u32 VAR_4)
{
 struct subscriber *VAR_5 = VAR_0;
 spinlock_t *VAR_6;
 struct subscription *VAR_7;






 if (FUNC_4(VAR_1) == ((void*)0))
  return;

 VAR_6 = VAR_5->lock;

 if (VAR_4 != sizeof(struct tipc_subscr)) {
  FUNC_2(VAR_5);
  FUNC_0(VAR_6);
 } else {
  VAR_7 = FUNC_1((struct tipc_subscr *)VAR_3, VAR_5);
  FUNC_0(VAR_6);
  if (VAR_7 != ((void*)0)) {
   FUNC_3(VAR_7);
  }
 }
}
