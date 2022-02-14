
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_arg_ref {int offset; struct probe_trace_arg_ref* next; } ;
struct probe_trace_arg {char* name; char* value; char* type; struct probe_trace_arg_ref* ref; } ;


 int FUNC_0 (struct probe_trace_arg_ref*,char**,size_t*,int) ;
 int FUNC_1 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_2(struct probe_trace_arg *VAR_0,
           char *VAR_1, size_t VAR_2)
{
 struct probe_trace_arg_ref *VAR_3 = VAR_0->ref;
 int VAR_4, VAR_5 = 0;
 char *VAR_6 = VAR_1;


 if (VAR_0->name)
  VAR_4 = FUNC_1(VAR_1, VAR_2, " %s=", VAR_0->name);
 else
  VAR_4 = FUNC_1(VAR_1, VAR_2, " ");
 if (VAR_4 < 0)
  return VAR_4;
 VAR_1 += VAR_4;
 VAR_2 -= VAR_4;


 if (VAR_0->value[0] == '@' && VAR_0->ref)
   VAR_3 = VAR_3->next;


 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_3, &VAR_1,
         &VAR_2, 1);
  if (VAR_5 < 0)
   return VAR_5;
 }


 if (VAR_0->value[0] == '@' && VAR_0->ref)
  VAR_4 = FUNC_1(VAR_1, VAR_2, "%s%+ld", VAR_0->value,
     VAR_0->ref->offset);
 else
  VAR_4 = FUNC_1(VAR_1, VAR_2, "%s", VAR_0->value);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_1 += VAR_4;
 VAR_2 -= VAR_4;


 while (VAR_5--) {
  VAR_4 = FUNC_1(VAR_1, VAR_2, ")");
  if (VAR_4 < 0)
   return VAR_4;
  VAR_1 += VAR_4;
  VAR_2 -= VAR_4;
 }

 if (VAR_0->type) {
  VAR_4 = FUNC_1(VAR_1, VAR_2, ":%s", VAR_0->type);
  if (VAR_4 <= 0)
   return VAR_4;
  VAR_1 += VAR_4;
 }

 return VAR_1 - VAR_6;
}
