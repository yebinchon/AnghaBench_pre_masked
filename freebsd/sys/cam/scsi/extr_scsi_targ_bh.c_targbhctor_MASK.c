
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct targbh_softc {int init_level; int state; int immed_notify_slist; int * accept_tio_list; int work_queue; int pending_queue; } ;
struct cam_periph {struct targbh_softc* softc; } ;
typedef scalar_t__ cam_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (struct targbh_softc*,int) ;
 int FUNC_3 (struct cam_periph*) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct cam_periph*) ;

__attribute__((used)) static cam_status
FUNC_7(struct cam_periph *VAR_5, void *VAR_6)
{
 struct targbh_softc *VAR_7;


 VAR_7 = (struct targbh_softc *)FUNC_4(sizeof(*VAR_7),
           VAR_3, VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_5("targctor: unable to malloc softc\n");
  return (VAR_1);
 }

 FUNC_2(VAR_7, sizeof(*VAR_7));
 FUNC_1(&VAR_7->pending_queue);
 FUNC_1(&VAR_7->work_queue);
 VAR_7->accept_tio_list = ((void*)0);
 FUNC_0(&VAR_7->immed_notify_slist);
 VAR_7->state = VAR_4;
 VAR_5->softc = VAR_7;
 VAR_7->init_level++;

 if (FUNC_6(VAR_5) != VAR_0)
  FUNC_3(VAR_5);
 return (VAR_0);
}
