
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_frags {int mem; } ;
struct inet_frags {int frag_expire; int qsize; int (* constructor ) (struct inet_frag_queue*,void*) ;} ;
struct inet_frag_queue {struct netns_frags* net; int refcnt; int lock; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int) ;
 struct inet_frag_queue* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inet_frag_queue*,void*) ;

__attribute__((used)) static struct inet_frag_queue *FUNC_6(struct netns_frags *VAR_1,
  struct inet_frags *VAR_2, void *VAR_3)
{
 struct inet_frag_queue *VAR_4;

 VAR_4 = FUNC_2(VAR_2->qsize, VAR_0);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 VAR_2->constructor(VAR_4, VAR_3);
 FUNC_0(VAR_2->qsize, &VAR_1->mem);
 FUNC_3(&VAR_4->timer, VAR_2->frag_expire, (unsigned long)VAR_4);
 FUNC_4(&VAR_4->lock);
 FUNC_1(&VAR_4->refcnt, 1);
 VAR_4->net = VAR_1;

 return VAR_4;
}
