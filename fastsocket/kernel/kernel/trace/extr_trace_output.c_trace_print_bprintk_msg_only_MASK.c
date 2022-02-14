
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {struct trace_entry* ent; struct trace_seq seq; } ;
struct trace_entry {int dummy; } ;
struct bprint_entry {int buf; int fmt; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bprint_entry*,struct trace_entry*) ;
 int FUNC_1 (struct trace_seq*,int ,int ) ;

enum print_line_t FUNC_2(struct trace_iterator *VAR_2)
{
 struct trace_seq *VAR_3 = &VAR_2->seq;
 struct trace_entry *VAR_4 = VAR_2->ent;
 struct bprint_entry *VAR_5;
 int VAR_6;

 FUNC_0(VAR_5, VAR_4);

 VAR_6 = FUNC_1(VAR_3, VAR_5->fmt, VAR_5->buf);
 if (!VAR_6)
  return VAR_1;

 return VAR_0;
}
