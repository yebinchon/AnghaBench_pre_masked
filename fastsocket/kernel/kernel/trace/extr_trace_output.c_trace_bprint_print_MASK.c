
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_entry {int dummy; } ;
struct bprint_entry {int buf; int fmt; int ip; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct trace_seq*,int ,int) ;
 int FUNC_1 (struct bprint_entry*,struct trace_entry*) ;
 int FUNC_2 (struct trace_seq*,int ,int ) ;
 int FUNC_3 (struct trace_seq*,char*) ;

__attribute__((used)) static enum print_line_t
FUNC_4(struct trace_iterator *VAR_2, int VAR_3)
{
 struct trace_entry *VAR_4 = VAR_2->ent;
 struct trace_seq *VAR_5 = &VAR_2->seq;
 struct bprint_entry *VAR_6;

 FUNC_1(VAR_6, VAR_4);

 if (!FUNC_0(VAR_5, VAR_6->ip, VAR_3))
  goto partial;

 if (!FUNC_3(VAR_5, ": "))
  goto partial;

 if (!FUNC_2(VAR_5, VAR_6->fmt, VAR_6->buf))
  goto partial;

 return VAR_0;

 partial:
 return VAR_1;
}
