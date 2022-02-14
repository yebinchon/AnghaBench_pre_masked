
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ctl_io {int dummy; } ctl_io ;
typedef void* uint32_t ;
struct cfiscsi_session {int cs_conn; } ;
struct cfiscsi_data_wait {void* cdw_initiator_task_tag; void* cdw_target_transfer_tag; union ctl_io* cdw_ctl_io; int cdw_icl_prv; } ;


 int FUNC_0 (struct cfiscsi_session*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,union ctl_io*,void**,int *) ;
 struct cfiscsi_data_wait* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct cfiscsi_data_wait*) ;

__attribute__((used)) static struct cfiscsi_data_wait *
FUNC_4(struct cfiscsi_session *VAR_3, union ctl_io *VAR_4,
    uint32_t VAR_5, uint32_t *VAR_6)
{
 struct cfiscsi_data_wait *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_0 | VAR_1);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_3,
      "failed to allocate %zd bytes", sizeof(*VAR_7));
  return (((void*)0));
 }

 VAR_8 = FUNC_1(VAR_3->cs_conn, VAR_4, VAR_6,
     &VAR_7->cdw_icl_prv);
 if (VAR_8 != 0) {
  FUNC_0(VAR_3,
      "icl_conn_transfer_setup() failed with error %d", VAR_8);
  FUNC_3(VAR_2, VAR_7);
  return (((void*)0));
 }

 VAR_7->cdw_ctl_io = VAR_4;
 VAR_7->cdw_target_transfer_tag = *VAR_6;
 VAR_7->cdw_initiator_task_tag = VAR_5;

 return (VAR_7);
}
