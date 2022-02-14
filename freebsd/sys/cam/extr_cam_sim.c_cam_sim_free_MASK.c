
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct cam_sim {scalar_t__ refcount; int devq; struct mtx* mtx; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtx VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cam_sim*,int ) ;
 int FUNC_3 (struct cam_sim*,struct mtx*,int ,char*,int ) ;
 int FUNC_4 (struct mtx*,int ) ;
 int FUNC_5 (struct mtx*) ;
 int FUNC_6 (struct mtx*) ;

void
FUNC_7(struct cam_sim *VAR_4, int VAR_5)
{
 struct mtx *VAR_6 = VAR_4->mtx;
 int VAR_7;

 if (VAR_6) {
  FUNC_4(VAR_6, VAR_0);
 } else {
  VAR_6 = &VAR_3;
  FUNC_5(VAR_6);
 }
 VAR_4->refcount--;
 if (VAR_4->refcount > 0) {
  VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_2, "simfree", 0);
  FUNC_0(VAR_7 == 0, ("invalid error value for msleep(9)"));
 }
 FUNC_0(VAR_4->refcount == 0, ("sim->refcount == 0"));
 if (VAR_4->mtx == ((void*)0))
  FUNC_6(VAR_6);

 if (VAR_5)
  FUNC_1(VAR_4->devq);
 FUNC_2(VAR_4, VAR_1);
}
