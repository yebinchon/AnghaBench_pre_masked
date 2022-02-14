
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned long) ;
 int FUNC_1 (struct seq_file*,char const) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 const char **VAR_2 = VAR_1;
 const char *VAR_3 = *VAR_2;
 int VAR_4;

 FUNC_0(VAR_0, "0x%lx : \"", *(unsigned long *)VAR_2);




 for (VAR_4 = 0; VAR_3[VAR_4]; VAR_4++) {
  switch (VAR_3[VAR_4]) {
  case '\n':
   FUNC_2(VAR_0, "\\n");
   break;
  case '\t':
   FUNC_2(VAR_0, "\\t");
   break;
  case '\\':
   FUNC_2(VAR_0, "\\");
   break;
  case '"':
   FUNC_2(VAR_0, "\\\"");
   break;
  default:
   FUNC_1(VAR_0, VAR_3[VAR_4]);
  }
 }
 FUNC_2(VAR_0, "\"\n");

 return 0;
}
