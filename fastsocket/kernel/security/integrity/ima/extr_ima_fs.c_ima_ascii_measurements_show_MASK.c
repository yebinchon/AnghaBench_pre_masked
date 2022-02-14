
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ima_template_entry {int template; int template_name; int digest; } ;
struct ima_template_data {int dummy; } ;
struct ima_queue_entry {struct ima_template_entry* entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (struct seq_file*,struct ima_template_data*,int ) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{

 struct ima_queue_entry *VAR_4 = VAR_3;
 struct ima_template_entry *VAR_5;


 VAR_5 = VAR_4->entry;
 if (VAR_5 == ((void*)0))
  return -1;


 FUNC_2(VAR_2, "%2d ", VAR_0);


 FUNC_0(VAR_2, VAR_5->digest);


 FUNC_2(VAR_2, " %s ", VAR_5->template_name);


 FUNC_1(VAR_2, (struct ima_template_data *)&VAR_5->template,
     VAR_1);
 return 0;
}
