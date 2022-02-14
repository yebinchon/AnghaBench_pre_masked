
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct subscriber {int * lock; } ;
struct sk_buff {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct subscriber*) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0,
           u32 VAR_1,
           struct sk_buff **VAR_2,
           unsigned char const *VAR_3,
           unsigned int VAR_4,
           int VAR_5)
{
 struct subscriber *VAR_6 = VAR_0;
 spinlock_t *VAR_7;

 if (FUNC_2(VAR_1) == ((void*)0))
  return;

 VAR_7 = VAR_6->lock;
 FUNC_1(VAR_6);
 FUNC_0(VAR_7);
}
