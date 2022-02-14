
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ima_template_data {int* digest; int* file_name; } ;
typedef enum ima_show_type { ____Placeholder_ima_show_type } ima_show_type ;


 int VAR_0 ;


 int FUNC_0 (struct seq_file*,int*) ;
 int FUNC_1 (struct seq_file*,int*,int) ;
 int FUNC_2 (struct seq_file*,char*,int*) ;
 int FUNC_3 (int*) ;

void FUNC_4(struct seq_file *VAR_1, void *VAR_2, enum ima_show_type VAR_3)
{
 struct ima_template_data *VAR_4 = VAR_2;
 int VAR_5;

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_1, VAR_4->digest);
  FUNC_2(VAR_1, " %s\n", VAR_4->file_name);
  break;
 case 128:
  FUNC_1(VAR_1, VAR_4->digest, VAR_0);

  VAR_5 = FUNC_3(VAR_4->file_name);
  FUNC_1(VAR_1, &VAR_5, sizeof VAR_5);
  FUNC_1(VAR_1, VAR_4->file_name, VAR_5);
 default:
  break;
 }
}
