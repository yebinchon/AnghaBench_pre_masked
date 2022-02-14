
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; int dev; } ;
struct rose_neigh {scalar_t__ dce_mode; int queue; scalar_t__ restarted; scalar_t__ loopback; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *,struct sk_buff**) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct rose_neigh*) ;
 int FUNC_3 (struct sk_buff*,struct rose_neigh*) ;
 int FUNC_4 (struct sk_buff*,struct rose_neigh*) ;
 int FUNC_5 (struct rose_neigh*) ;
 int FUNC_6 (struct rose_neigh*) ;
 int FUNC_7 (struct rose_neigh*) ;
 unsigned char* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *,struct sk_buff*) ;

void FUNC_10(struct sk_buff *VAR_3, struct rose_neigh *VAR_4)
{
 unsigned char *VAR_5;
 if (VAR_4->loopback) {
  FUNC_3(VAR_3, VAR_4);
  return;
 }

 if (!FUNC_2(VAR_4))
  VAR_4->restarted = 0;

 VAR_5 = FUNC_8(VAR_3, 1);
 *VAR_5++ = VAR_0;

 if (VAR_4->restarted) {
  if (!FUNC_4(VAR_3, VAR_4))
   FUNC_1(VAR_3);
 } else {
  FUNC_9(&VAR_4->queue, VAR_3);

  if (!FUNC_6(VAR_4)) {
   FUNC_7(VAR_4);
   VAR_4->dce_mode = 0;
   FUNC_5(VAR_4);
  }
 }
}
