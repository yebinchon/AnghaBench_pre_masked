
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_frags {int dummy; } ;
struct inet_frags {int dummy; } ;
struct inet_frag_queue {int dummy; } ;


 struct inet_frag_queue* FUNC_0 (struct netns_frags*,struct inet_frags*,void*) ;
 struct inet_frag_queue* FUNC_1 (struct netns_frags*,struct inet_frag_queue*,struct inet_frags*,void*) ;

__attribute__((used)) static struct inet_frag_queue *FUNC_2(struct netns_frags *VAR_0,
  struct inet_frags *VAR_1, void *VAR_2)
{
 struct inet_frag_queue *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 return FUNC_1(VAR_0, VAR_3, VAR_1, VAR_2);
}
