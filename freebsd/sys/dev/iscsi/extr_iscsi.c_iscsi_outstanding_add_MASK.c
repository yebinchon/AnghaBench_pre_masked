
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
typedef int uint32_t ;
struct iscsi_session {int is_outstanding; int is_conn; } ;
struct iscsi_outstanding {union ccb* io_ccb; int io_initiator_task_tag; int io_icl_prv; } ;
struct icl_pdu {int dummy; } ;


 int FUNC_0 (struct iscsi_session*) ;
 int FUNC_1 (struct iscsi_session*,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,struct iscsi_outstanding*,int ) ;
 int FUNC_4 (int ,struct icl_pdu*,int *,int *,int *) ;
 int VAR_2 ;
 int * FUNC_5 (struct iscsi_session*,int ) ;
 int VAR_3 ;
 struct iscsi_outstanding* FUNC_6 (int ,int) ;
 int FUNC_7 (int ,struct iscsi_outstanding*) ;

__attribute__((used)) static struct iscsi_outstanding *
FUNC_8(struct iscsi_session *VAR_4, struct icl_pdu *VAR_5,
    union ccb *VAR_6, uint32_t *VAR_7)
{
 struct iscsi_outstanding *VAR_8;
 int VAR_9;

 FUNC_0(VAR_4);

 VAR_8 = FUNC_6(VAR_3, VAR_0 | VAR_1);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_4, "failed to allocate %zd bytes",
      sizeof(*VAR_8));
  return (((void*)0));
 }

 VAR_9 = FUNC_4(VAR_4->is_conn, VAR_5, &VAR_6->csio,
     VAR_7, &VAR_8->io_icl_prv);
 if (VAR_9 != 0) {
  FUNC_1(VAR_4,
      "icl_conn_task_setup() failed with error %d", VAR_9);
  FUNC_7(VAR_3, VAR_8);
  return (((void*)0));
 }

 FUNC_2(FUNC_5(VAR_4, *VAR_7) == ((void*)0),
     ("initiator_task_tag 0x%x already added", *VAR_7));

 VAR_8->io_initiator_task_tag = *VAR_7;
 VAR_8->io_ccb = VAR_6;
 FUNC_3(&VAR_4->is_outstanding, VAR_8, VAR_2);
 return (VAR_8);
}
