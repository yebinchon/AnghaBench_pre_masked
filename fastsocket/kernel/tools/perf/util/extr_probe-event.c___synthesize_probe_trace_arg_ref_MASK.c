
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_trace_arg_ref {int offset; struct probe_trace_arg_ref* next; } ;


 int FUNC_0 (char*,size_t,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct probe_trace_arg_ref *VAR_0,
          char **VAR_1, size_t *VAR_2,
          int VAR_3)
{
 int VAR_4;
 if (VAR_0->next) {
  VAR_3 = FUNC_1(VAR_0->next, VAR_1,
        VAR_2, VAR_3 + 1);
  if (VAR_3 < 0)
   goto out;
 }

 VAR_4 = FUNC_0(*VAR_1, *VAR_2, "%+ld(", VAR_0->offset);
 if (VAR_4 < 0)
  VAR_3 = VAR_4;
 else {
  *VAR_1 += VAR_4;
  *VAR_2 -= VAR_4;
 }
out:
 return VAR_3;

}
