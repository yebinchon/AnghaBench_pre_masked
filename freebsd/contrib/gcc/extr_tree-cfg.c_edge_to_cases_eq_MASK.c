
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edge_to_cases_elt {scalar_t__ e; } ;
typedef scalar_t__ edge ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  edge VAR_2 = ((struct edge_to_cases_elt *)VAR_0)->e;
  edge VAR_3 = ((struct edge_to_cases_elt *)VAR_1)->e;

  return VAR_2 == VAR_3;
}
