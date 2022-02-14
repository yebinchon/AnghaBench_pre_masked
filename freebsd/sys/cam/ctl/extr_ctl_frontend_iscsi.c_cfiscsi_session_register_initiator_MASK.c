
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfiscsi_target {int ct_port; } ;
struct cfiscsi_session {int cs_ctl_initid; int cs_initiator_id; struct cfiscsi_target* cs_target; } ;


 int FUNC_0 (struct cfiscsi_session*,char*,int) ;
 int FUNC_1 (struct cfiscsi_session*,char*,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *,int,int ,char*) ;
 char* FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct cfiscsi_session *VAR_1)
{
 struct cfiscsi_target *VAR_2;
 char *VAR_3;
 int VAR_4;

 FUNC_2(VAR_1->cs_ctl_initid == -1, ("already registered"));

 VAR_2 = VAR_1->cs_target;
 VAR_3 = FUNC_4(VAR_1->cs_initiator_id, VAR_0);
 VAR_4 = FUNC_3(&VAR_2->ct_port, -1, 0, VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(VAR_1, "ctl_add_initiator failed with error %d",
      VAR_4);
  VAR_1->cs_ctl_initid = -1;
  return (1);
 }
 VAR_1->cs_ctl_initid = VAR_4;




 return (0);
}
