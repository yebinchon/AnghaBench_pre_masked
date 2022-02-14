
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rose_neigh {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;

int FUNC_5(struct sk_buff *VAR_2, struct rose_neigh *VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_0);

 FUNC_0(VAR_2);

 if (VAR_4 != ((void*)0)) {
  FUNC_4(&VAR_1, VAR_4);

  if (!FUNC_1())
   FUNC_2();
 }

 return 1;
}
