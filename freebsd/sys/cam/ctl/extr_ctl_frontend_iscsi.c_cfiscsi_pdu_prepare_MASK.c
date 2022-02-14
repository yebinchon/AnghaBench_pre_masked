
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_bhs_scsi_response {scalar_t__ bhssr_opcode; int bhssr_initiator_task_tag; int bhssr_flags; void* bhssr_maxcmdsn; void* bhssr_expcmdsn; void* bhssr_statsn; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;
struct cfiscsi_session {int cs_statsn; int cs_cmdsn; scalar_t__ cs_outstanding_ctl_pdus; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfiscsi_session*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct cfiscsi_session* FUNC_1 (struct icl_pdu*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_4(struct icl_pdu *VAR_5)
{
 struct cfiscsi_session *VAR_6;
 struct iscsi_bhs_scsi_response *VAR_7;
 bool VAR_8 = 1;

 VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_6);





 VAR_7 = (struct iscsi_bhs_scsi_response *)VAR_5->ip_bhs;





 if (VAR_7->bhssr_opcode == VAR_2)
  VAR_8 = 0;





 if (VAR_7->bhssr_opcode == VAR_1 &&
     VAR_7->bhssr_initiator_task_tag == 0xffffffff)
  VAR_8 = 0;





 if (VAR_7->bhssr_opcode == VAR_3 &&
     (VAR_7->bhssr_flags & VAR_0) == 0)
  VAR_8 = 0;





 if (VAR_7->bhssr_opcode != VAR_3 ||
     (VAR_7->bhssr_flags & VAR_0))
  VAR_7->bhssr_statsn = FUNC_2(VAR_6->cs_statsn);
 VAR_7->bhssr_expcmdsn = FUNC_2(VAR_6->cs_cmdsn);
 VAR_7->bhssr_maxcmdsn = FUNC_2(VAR_6->cs_cmdsn - 1 +
     FUNC_3(0, VAR_4 - VAR_6->cs_outstanding_ctl_pdus));

 if (VAR_8)
  VAR_6->cs_statsn++;

 return (0);
}
