
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct kallsym_iter* private; } ;
struct kallsym_iter {int * name; int type; scalar_t__ value; scalar_t__* module_name; scalar_t__ exported; } ;


 int FUNC_0 (struct seq_file*,char*,void*,char,int *,...) ;
 char FUNC_1 (int ) ;
 char FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct kallsym_iter *VAR_2 = VAR_0->private;


 if (!VAR_2->name[0])
  return 0;

 if (VAR_2->module_name[0]) {
  char VAR_3;





  VAR_3 = VAR_2->exported ? FUNC_2(VAR_2->type) :
     FUNC_1(VAR_2->type);
  FUNC_0(VAR_0, "%pK %c %s\t[%s]\n", (void *)VAR_2->value,
      VAR_3, VAR_2->name, VAR_2->module_name);
 } else
  FUNC_0(VAR_0, "%pK %c %s\n", (void *)VAR_2->value,
      VAR_2->type, VAR_2->name);
 return 0;
}
