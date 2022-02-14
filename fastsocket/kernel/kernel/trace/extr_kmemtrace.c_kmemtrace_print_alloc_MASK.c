
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct kmemtrace_alloc_entry {int node; scalar_t__ gfp_flags; scalar_t__ bytes_alloc; scalar_t__ bytes_req; scalar_t__ ptr; scalar_t__ call_site; int type_id; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kmemtrace_alloc_entry*,int ) ;
 int FUNC_1 (struct trace_seq*,char*,int ,void*,unsigned long,unsigned long,unsigned long,unsigned long,int ) ;

__attribute__((used)) static enum print_line_t
FUNC_2(struct trace_iterator *VAR_2, int VAR_3)
{
 struct trace_seq *VAR_4 = &VAR_2->seq;
 struct kmemtrace_alloc_entry *VAR_5;
 int VAR_6;

 FUNC_0(VAR_5, VAR_2->ent);

 VAR_6 = FUNC_1(VAR_4, "type_id %d call_site %pF ptr %lu "
     "bytes_req %lu bytes_alloc %lu gfp_flags %lu node %d\n",
     VAR_5->type_id, (void *)VAR_5->call_site, (unsigned long)VAR_5->ptr,
     (unsigned long)VAR_5->bytes_req, (unsigned long)VAR_5->bytes_alloc,
     (unsigned long)VAR_5->gfp_flags, VAR_5->node);

 if (!VAR_6)
  return VAR_1;
 return VAR_0;
}
