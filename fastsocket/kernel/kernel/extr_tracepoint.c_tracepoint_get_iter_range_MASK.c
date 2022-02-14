
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint {int dummy; } ;



int FUNC_0(struct tracepoint **VAR_0,
 struct tracepoint *VAR_1, struct tracepoint *VAR_2)
{
 if (!*VAR_0 && VAR_1 != VAR_2) {
  *VAR_0 = VAR_1;
  return 1;
 }
 if (*VAR_0 >= VAR_1 && *VAR_0 < VAR_2)
  return 1;
 return 0;
}
