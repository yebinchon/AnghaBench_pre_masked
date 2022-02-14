
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct cgraph_node {scalar_t__ call_site_hash; struct cgraph_edge* callees; } ;
struct cgraph_edge {scalar_t__ call_stmt; struct cgraph_edge* next_callee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int ,int *) ;
 void** FUNC_2 (scalar_t__,scalar_t__,int ,int ) ;
 struct cgraph_edge* FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;

struct cgraph_edge *
FUNC_5 (struct cgraph_node *VAR_3, tree VAR_4)
{
  struct cgraph_edge *VAR_5, *VAR_6;
  int VAR_7 = 0;

  if (VAR_3->call_site_hash)
    return FUNC_3 (VAR_3->call_site_hash, VAR_4,
          FUNC_4 (VAR_4));






  for (VAR_5 = VAR_3->callees; VAR_5; VAR_5= VAR_5->next_callee)
    {
      if (VAR_5->call_stmt == VAR_4)
 break;
      VAR_7++;
    }
  if (VAR_7 > 100)
    {
      VAR_3->call_site_hash = FUNC_1 (120, VAR_2, VAR_1, ((void*)0));
      for (VAR_6 = VAR_3->callees; VAR_6; VAR_6 = VAR_6->next_callee)
 {
          void **VAR_8;
   VAR_8 = FUNC_2 (VAR_3->call_site_hash,
        VAR_6->call_stmt,
        FUNC_4 (VAR_6->call_stmt),
        VAR_0);
   FUNC_0 (!*VAR_8);
   *VAR_8 = VAR_6;
 }
    }
  return VAR_5;
}
