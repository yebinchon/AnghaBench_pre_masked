
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct ftrace_event_call* private; } ;
struct ftrace_event_field {char const* type; int is_signed; int size; int offset; int name; } ;
struct TYPE_2__ {int print_fmt; } ;
struct ftrace_event_call {TYPE_1__ fmt; int id; int name; } ;




 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct ftrace_event_call *VAR_2 = VAR_0->private;
 struct ftrace_event_field *VAR_3;
 const char *VAR_4;

 switch ((unsigned long)VAR_1) {
 case 129:
  FUNC_0(VAR_0, "name: %s\n", VAR_2->name);
  FUNC_0(VAR_0, "ID: %d\n", VAR_2->id);
  FUNC_0(VAR_0, "format:\n");
  return 0;

 case 128:
  FUNC_0(VAR_0, "\nprint fmt: %s\n",
      VAR_2->fmt.print_fmt);
  return 0;
 }






 if ((unsigned long)VAR_1 & 1) {
  FUNC_1(VAR_0, '\n');
  VAR_1 = (void *)((unsigned long)VAR_1 & ~1L);
 }

 VAR_3 = VAR_1;
 VAR_4 = FUNC_2(VAR_3->type, '[');

 if (!FUNC_3(VAR_3->type, "__data_loc", 10))
  VAR_4 = ((void*)0);

 if (!VAR_4)
  FUNC_0(VAR_0, "\tfield:%s %s;\toffset:%u;\tsize:%u;\tsigned:%d;\n",
      VAR_3->type, VAR_3->name, VAR_3->offset,
      VAR_3->size, !!VAR_3->is_signed);
 else
  FUNC_0(VAR_0, "\tfield:%.*s %s%s;\toffset:%u;\tsize:%u;\tsigned:%d;\n",
      (int)(VAR_4 - VAR_3->type),
      VAR_3->type, VAR_3->name,
      VAR_4, VAR_3->offset,
      VAR_3->size, !!VAR_3->is_signed);

 return 0;
}
