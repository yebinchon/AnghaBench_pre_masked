
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct cam_sim {int (* sim_poll ) (struct cam_sim*) ;struct mtx* mtx; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct mtx*) ;
 int FUNC_2 (struct mtx*) ;
 int FUNC_3 (struct cam_sim*) ;

void
FUNC_4(struct cam_sim *VAR_0)
{
 struct mtx *VAR_1;

 VAR_1 = VAR_0->mtx;
 if (VAR_1)
  FUNC_1(VAR_1);
 (*(VAR_0->sim_poll))(VAR_0);
 if (VAR_1)
  FUNC_2(VAR_1);
 FUNC_0();
}
