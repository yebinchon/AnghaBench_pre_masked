
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_entry {int refcount; } ;
struct tracepoint {int name; } ;


 int FUNC_0 (struct tracepoint*) ;
 struct tracepoint_entry* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tracepoint_entry**,struct tracepoint*,int) ;
 int VAR_0 ;

void
FUNC_5(struct tracepoint *VAR_1, struct tracepoint *VAR_2)
{
 struct tracepoint *VAR_3;
 struct tracepoint_entry *VAR_4;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_0);
 for (VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_1(VAR_3->name);
  if (VAR_4) {
   FUNC_4(&VAR_4, VAR_3,
     !!VAR_4->refcount);
  } else {
   FUNC_0(VAR_3);
  }
 }
 FUNC_3(&VAR_0);
}
