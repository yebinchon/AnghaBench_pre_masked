
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtable {struct inet_peer* peer; int rt_dst; } ;
struct inet_peer {int dummy; } ;
typedef int DEFINE_SPINLOCK ;


 struct inet_peer* FUNC_0 (int ,int) ;
 int FUNC_1 (struct inet_peer*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rtable *VAR_0, int VAR_1)
{
 static DEFINE_SPINLOCK(VAR_2);
 struct inet_peer *VAR_3;

 VAR_3 = FUNC_0(VAR_0->rt_dst, VAR_1);

 FUNC_2(&VAR_2);
 if (VAR_0->peer == ((void*)0)) {
  VAR_0->peer = VAR_3;
  VAR_3 = ((void*)0);
 }
 FUNC_3(&VAR_2);
 if (VAR_3)
  FUNC_1(VAR_3);
}
