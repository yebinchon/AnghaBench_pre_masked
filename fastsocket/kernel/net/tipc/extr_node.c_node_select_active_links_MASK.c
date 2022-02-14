
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_node {struct link** links; struct link** active_links; } ;
struct link {size_t priority; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct link*) ;

__attribute__((used)) static void FUNC_1(struct tipc_node *VAR_1)
{
 struct link **VAR_2 = &VAR_1->active_links[0];
 u32 VAR_3;
 u32 VAR_4 = 0;

 VAR_2[0] = VAR_2[1] = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct link *VAR_5 = VAR_1->links[VAR_3];

  if (!VAR_5 || !FUNC_0(VAR_5) ||
      (VAR_5->priority < VAR_4))
   continue;

  if (VAR_5->priority > VAR_4) {
   VAR_4 = VAR_5->priority;
   VAR_2[0] = VAR_2[1] = VAR_5;
  } else {
   VAR_2[1] = VAR_5;
  }
 }
}
