
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int seq; int ent; } ;
struct special_entry {int arg3; int arg2; int arg1; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct special_entry*,int ) ;
 int FUNC_1 (int *,char*,int ,int ,int ) ;

__attribute__((used)) static enum print_line_t FUNC_2(struct trace_iterator *VAR_2,
          int VAR_3)
{
 struct special_entry *VAR_4;

 FUNC_0(VAR_4, VAR_2->ent);

 if (!FUNC_1(&VAR_2->seq, "# %ld %ld %ld\n",
         VAR_4->arg1,
         VAR_4->arg2,
         VAR_4->arg3))
  return VAR_1;

 return VAR_0;
}
