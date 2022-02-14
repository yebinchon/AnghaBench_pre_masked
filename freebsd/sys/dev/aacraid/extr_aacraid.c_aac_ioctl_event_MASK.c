
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_io_lock; } ;
struct aac_event {int ev_type; } ;
struct aac_command {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aac_softc*,struct aac_event*) ;
 int FUNC_1 (struct aac_softc*,struct aac_command**) ;
 int FUNC_2 (struct aac_event*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void
FUNC_5(struct aac_softc *VAR_2, struct aac_event *VAR_3, void *VAR_4)
{

 switch (VAR_3->ev_type) {
 case 128:
  FUNC_3(&VAR_2->aac_io_lock, VAR_0);
  if (FUNC_1(VAR_2, (struct aac_command **)VAR_4)) {
   FUNC_0(VAR_2, VAR_3);
   return;
  }
  FUNC_2(VAR_3, VAR_1);
  FUNC_4(VAR_4);
  break;
 default:
  break;
 }
}
