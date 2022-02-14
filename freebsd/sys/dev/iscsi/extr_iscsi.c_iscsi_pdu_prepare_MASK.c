
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_session {scalar_t__ is_statsn; scalar_t__ is_cmdsn; int is_maxcmdsn; int is_expcmdsn; } ;
struct iscsi_bhs_scsi_command {int bhssc_opcode; void* bhssc_expstatsn; void* bhssc_cmdsn; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iscsi_session*,char*,scalar_t__,int ,int ,int) ;
 int FUNC_1 (struct iscsi_session*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 struct iscsi_session* FUNC_3 (struct icl_pdu*) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_5(struct icl_pdu *VAR_2)
{
 struct iscsi_session *VAR_3;
 struct iscsi_bhs_scsi_command *VAR_4;

 VAR_3 = FUNC_3(VAR_2);

 FUNC_1(VAR_3);





 VAR_4 = (struct iscsi_bhs_scsi_command *)VAR_2->ip_bhs;




 if (VAR_4->bhssc_opcode != VAR_1) {
  if (FUNC_2(VAR_3->is_cmdsn, VAR_3->is_maxcmdsn) &&
      (VAR_4->bhssc_opcode & VAR_0) == 0) {
   return (1);
  }
  VAR_4->bhssc_cmdsn = FUNC_4(VAR_3->is_cmdsn);
  if ((VAR_4->bhssc_opcode & VAR_0) == 0)
   VAR_3->is_cmdsn++;
 }
 VAR_4->bhssc_expstatsn = FUNC_4(VAR_3->is_statsn + 1);

 return (0);
}
