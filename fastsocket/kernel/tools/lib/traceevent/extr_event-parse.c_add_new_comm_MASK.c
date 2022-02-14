
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int cmdline_count; struct cmdline* cmdlines; } ;
struct cmdline {int pid; scalar_t__ comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmdline* FUNC_0 (struct cmdline*,struct cmdline*,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cmdline*) ;
 int FUNC_2 (struct cmdline*,size_t,int,int ) ;
 struct cmdline* FUNC_3 (struct cmdline*,int) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(struct pevent *VAR_4, const char *VAR_5, int VAR_6)
{
 struct cmdline *VAR_7 = VAR_4->cmdlines;
 const struct cmdline *VAR_8;
 struct cmdline VAR_9;

 if (!VAR_6)
  return 0;


 VAR_9.pid = VAR_6;

 VAR_8 = FUNC_0(&VAR_9, VAR_4->cmdlines, VAR_4->cmdline_count,
         sizeof(*VAR_4->cmdlines), VAR_2);
 if (VAR_8) {
  VAR_3 = VAR_0;
  return -1;
 }

 VAR_7 = FUNC_3(VAR_7, sizeof(*VAR_7) * (VAR_4->cmdline_count + 1));
 if (!VAR_7) {
  VAR_3 = VAR_1;
  return -1;
 }

 VAR_7[VAR_4->cmdline_count].comm = FUNC_4(VAR_5);
 if (!VAR_7[VAR_4->cmdline_count].comm) {
  FUNC_1(VAR_7);
  VAR_3 = VAR_1;
  return -1;
 }

 VAR_7[VAR_4->cmdline_count].pid = VAR_6;

 if (VAR_7[VAR_4->cmdline_count].comm)
  VAR_4->cmdline_count++;

 FUNC_2(VAR_7, VAR_4->cmdline_count, sizeof(*VAR_7), VAR_2);
 VAR_4->cmdlines = VAR_7;

 return 0;
}
