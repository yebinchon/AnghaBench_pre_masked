
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_dev; int aac_ev_cmfree; } ;
struct aac_event {int ev_type; } ;



 int VAR_0 ;
 int FUNC_0 (int *,struct aac_event*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;

void
FUNC_2(struct aac_softc *VAR_2, struct aac_event *VAR_3)
{

 switch (VAR_3->ev_type & VAR_0) {
 case 128:
  FUNC_0(&VAR_2->aac_ev_cmfree, VAR_3, VAR_1);
  break;
 default:
  FUNC_1(VAR_2->aac_dev, "aac_add event: unknown event %d\n",
      VAR_3->ev_type);
  break;
 }
}
