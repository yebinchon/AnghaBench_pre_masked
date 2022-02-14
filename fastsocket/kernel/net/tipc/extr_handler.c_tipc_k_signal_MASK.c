
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_item {unsigned long data; int next_signal; int handler; } ;
typedef int Handler ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 struct queue_item* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int VAR_7 ;

unsigned int FUNC_6(Handler VAR_8, unsigned long VAR_9)
{
 struct queue_item *VAR_10;

 if (!VAR_3) {
  FUNC_0("Signal request ignored by handler\n");
  return -VAR_1;
 }

 FUNC_3(&VAR_4);
 VAR_10 = FUNC_1(VAR_6, VAR_2);
 if (!VAR_10) {
  FUNC_0("Signal queue out of memory\n");
  FUNC_4(&VAR_4);
  return -VAR_0;
 }
 VAR_10->handler = VAR_8;
 VAR_10->data = VAR_9;
 FUNC_2(&VAR_10->next_signal, &VAR_5);
 FUNC_4(&VAR_4);
 FUNC_5(&VAR_7);
 return 0;
}
