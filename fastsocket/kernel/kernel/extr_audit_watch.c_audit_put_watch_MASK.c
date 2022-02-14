
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_watch {int parent; struct audit_watch* path; int rules; int count; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct audit_watch*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct audit_watch *VAR_0)
{
 if (FUNC_1(&VAR_0->count)) {
  FUNC_0(VAR_0->parent);
  FUNC_0(!FUNC_3(&VAR_0->rules));
  FUNC_2(VAR_0->path);
  FUNC_2(VAR_0);
 }
}
