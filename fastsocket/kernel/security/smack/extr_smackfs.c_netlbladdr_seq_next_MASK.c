
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct list_head {void* next; } ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct list_head*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_2, void *VAR_3, loff_t *VAR_4)
{
 struct list_head *VAR_5 = VAR_3;

 if (FUNC_0(VAR_5, &VAR_1)) {
  *VAR_4 = VAR_0;
  return ((void*)0);
 }

 return VAR_5->next;
}
