
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ts; struct trace_seq seq; struct trace_entry* ent; } ;
struct trace_entry {int dummy; } ;
struct print_entry {char* buf; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long long,int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct trace_seq*,char*,unsigned int,unsigned long,char const*) ;

__attribute__((used)) static enum print_line_t FUNC_3(struct trace_iterator *VAR_3)
{
 struct trace_entry *VAR_4 = VAR_3->ent;
 struct print_entry *VAR_5 = (struct print_entry *)VAR_4;
 const char *VAR_6 = VAR_5->buf;
 struct trace_seq *VAR_7 = &VAR_3->seq;
 unsigned long long VAR_8 = FUNC_1(VAR_3->ts);
 unsigned long VAR_9 = FUNC_0(VAR_8, VAR_2);
 unsigned VAR_10 = (unsigned long)VAR_8;
 int VAR_11;


 VAR_11 = FUNC_2(VAR_7, "MARK %u.%06lu %s", VAR_10, VAR_9, VAR_6);
 if (!VAR_11)
  return VAR_1;

 return VAR_0;
}
