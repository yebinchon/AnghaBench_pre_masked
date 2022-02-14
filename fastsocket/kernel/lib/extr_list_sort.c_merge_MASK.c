
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; } ;


 int FUNC_0 (void*,struct list_head*,struct list_head*) ;

__attribute__((used)) static struct list_head *FUNC_1(void *VAR_0,
    int (*VAR_1)(void *VAR_2, struct list_head *VAR_3,
     struct list_head *VAR_4),
    struct list_head *VAR_5, struct list_head *VAR_6)
{
 struct list_head VAR_7, *VAR_8 = &VAR_7;

 while (VAR_5 && VAR_6) {

  if ((*VAR_1)(VAR_0, VAR_5, VAR_6) <= 0) {
   VAR_8->next = VAR_5;
   VAR_5 = VAR_5->next;
  } else {
   VAR_8->next = VAR_6;
   VAR_6 = VAR_6->next;
  }
  VAR_8 = VAR_8->next;
 }
 VAR_8->next = VAR_5?:VAR_6;
 return VAR_7.next;
}
