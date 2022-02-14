
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_probe_arg_field {char* name; struct perf_probe_arg_field* next; scalar_t__ ref; } ;
struct perf_probe_arg {char* name; char* var; char* type; struct perf_probe_arg_field* field; } ;


 int FUNC_0 (char*,size_t,char*,char*,...) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;

int FUNC_3(struct perf_probe_arg *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct perf_probe_arg_field *VAR_3 = VAR_0->field;
 int VAR_4;
 char *VAR_5 = VAR_1;

 if (VAR_0->name && VAR_0->var)
  VAR_4 = FUNC_0(VAR_5, VAR_2, "%s=%s", VAR_0->name, VAR_0->var);
 else
  VAR_4 = FUNC_0(VAR_5, VAR_2, "%s", VAR_0->name ? VAR_0->name : VAR_0->var);
 if (VAR_4 <= 0)
  goto error;
 VAR_5 += VAR_4;
 VAR_2 -= VAR_4;

 while (VAR_3) {
  if (VAR_3->name[0] == '[')
   VAR_4 = FUNC_0(VAR_5, VAR_2, "%s", VAR_3->name);
  else
   VAR_4 = FUNC_0(VAR_5, VAR_2, "%s%s",
      VAR_3->ref ? "->" : ".", VAR_3->name);
  if (VAR_4 <= 0)
   goto error;
  VAR_5 += VAR_4;
  VAR_2 -= VAR_4;
  VAR_3 = VAR_3->next;
 }

 if (VAR_0->type) {
  VAR_4 = FUNC_0(VAR_5, VAR_2, ":%s", VAR_0->type);
  if (VAR_4 <= 0)
   goto error;
  VAR_5 += VAR_4;
  VAR_2 -= VAR_4;
 }

 return VAR_5 - VAR_1;
error:
 FUNC_1("Failed to synthesize perf probe argument: %s\n",
   FUNC_2(-VAR_4));
 return VAR_4;
}
