
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printk_list {unsigned long long addr; int printk; struct printk_list* next; } ;
struct pevent {int printk_count; struct printk_list* printklist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct printk_list*) ;
 struct printk_list* FUNC_1 (int) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct pevent *VAR_2, char *VAR_3,
     unsigned long long VAR_4)
{
 struct printk_list *VAR_5 = FUNC_1(sizeof(*VAR_5));

 if (!VAR_5)
  return -1;

 VAR_5->next = VAR_2->printklist;
 VAR_5->addr = VAR_4;

 VAR_5->printk = FUNC_2(VAR_3);
 if (!VAR_5->printk)
  goto out_free;

 VAR_2->printklist = VAR_5;
 VAR_2->printk_count++;

 return 0;

out_free:
 FUNC_0(VAR_5);
 VAR_1 = VAR_0;
 return -1;
}
