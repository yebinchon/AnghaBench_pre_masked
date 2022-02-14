
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int users; } ;
struct netpoll {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct netpoll*) ;
 int FUNC_3 () ;
 struct sk_buff* FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct netpoll *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct sk_buff *VAR_6;

 FUNC_6();
 FUNC_3();
repeat:

 VAR_6 = FUNC_0(VAR_3, VAR_0);
 if (!VAR_6)
  VAR_6 = FUNC_4(&VAR_1);

 if (!VAR_6) {
  if (++VAR_5 < 10) {
   FUNC_2(VAR_2);
   goto repeat;
  }
  return ((void*)0);
 }

 FUNC_1(&VAR_6->users, 1);
 FUNC_5(VAR_6, VAR_4);
 return VAR_6;
}
