
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hlist_node {int dummy; } ;
typedef scalar_t__ loff_t ;


 struct hlist_node* FUNC_0 (struct seq_file*) ;
 struct hlist_node* FUNC_1 (struct seq_file*,struct hlist_node*) ;

__attribute__((used)) static struct hlist_node *FUNC_2(struct seq_file *VAR_0, loff_t VAR_1)
{
 struct hlist_node *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  while (VAR_1 && (VAR_2 = FUNC_1(VAR_0, VAR_2)))
   VAR_1--;
 return VAR_1 ? ((void*)0) : VAR_2;
}
