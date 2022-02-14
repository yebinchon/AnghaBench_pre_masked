
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct cam_sim {int refcount; struct mtx* mtx; } ;


 int FUNC_0 (int,char*) ;
 struct mtx VAR_0 ;
 int FUNC_1 (struct mtx*) ;
 int FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct mtx*) ;
 int FUNC_4 (struct cam_sim*) ;

void
FUNC_5(struct cam_sim *VAR_1)
{
 struct mtx *VAR_2 = VAR_1->mtx;

 if (VAR_2) {
  if (!FUNC_2(VAR_2))
   FUNC_1(VAR_2);
  else
   VAR_2 = ((void*)0);
 } else {
  VAR_2 = &VAR_0;
  FUNC_1(VAR_2);
 }
 FUNC_0(VAR_1->refcount >= 1, ("sim->refcount >= 1"));
 VAR_1->refcount--;
 if (VAR_1->refcount == 0)
  FUNC_4(VAR_1);
 if (VAR_2)
  FUNC_3(VAR_2);
}
