
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mrsas_softc {int sim_lock; int sim_1; int sim_0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 union ccb* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (union ccb*) ;
 int VAR_5 ;
 int FUNC_6 (union ccb*) ;

int
FUNC_7(struct mrsas_softc *VAR_6)
{
 union ccb *VAR_7;
 union ccb *VAR_8;

 if ((VAR_7 = FUNC_3()) == ((void*)0)) {
  return (VAR_4);
 }
 if ((VAR_8 = FUNC_3()) == ((void*)0)) {
  FUNC_5(VAR_7);
  return (VAR_4);
 }
 FUNC_1(&VAR_6->sim_lock);
 if (FUNC_4(&VAR_7->ccb_h.path, VAR_5, FUNC_0(VAR_6->sim_0),
     VAR_2, VAR_0) != VAR_1) {
  FUNC_5(VAR_7);
  FUNC_5(VAR_8);
  FUNC_2(&VAR_6->sim_lock);
  return (VAR_3);
 }
 if (FUNC_4(&VAR_8->ccb_h.path, VAR_5, FUNC_0(VAR_6->sim_1),
     VAR_2, VAR_0) != VAR_1) {
  FUNC_5(VAR_7);
  FUNC_5(VAR_8);
  FUNC_2(&VAR_6->sim_lock);
  return (VAR_3);
 }
 FUNC_2(&VAR_6->sim_lock);
 FUNC_6(VAR_7);
 FUNC_6(VAR_8);

 return (0);
}
