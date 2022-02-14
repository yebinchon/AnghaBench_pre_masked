
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int cmdline_count; struct cmdline_list* cmdlist; scalar_t__ cmdlines; } ;
struct cmdline_list {int pid; struct cmdline_list* next; int comm; } ;


 int FUNC_0 (struct pevent*,char const*,int) ;
 int FUNC_1 (struct cmdline_list*) ;
 struct cmdline_list* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;

int FUNC_4(struct pevent *VAR_0, const char *VAR_1, int VAR_2)
{
 struct cmdline_list *VAR_3;

 if (VAR_0->cmdlines)
  return FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_3 = FUNC_2(sizeof(*VAR_3));
 if (!VAR_3)
  return -1;

 VAR_3->comm = FUNC_3(VAR_1);
 if (!VAR_3->comm) {
  FUNC_1(VAR_3);
  return -1;
 }
 VAR_3->pid = VAR_2;
 VAR_3->next = VAR_0->cmdlist;

 VAR_0->cmdlist = VAR_3;
 VAR_0->cmdline_count++;

 return 0;
}
