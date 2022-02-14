
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct iscsi_bhs_scsi_command {int bhssc_expstatsn; int bhssc_cmdsn; } ;
struct icl_pdu {TYPE_1__* ip_bhs; } ;
struct cfiscsi_session {scalar_t__ cs_statsn; int cs_cmdsn; scalar_t__ cs_timeout; } ;
struct TYPE_2__ {int bhs_opcode; } ;


 int FUNC_0 (struct cfiscsi_session*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct cfiscsi_session*) ;
 int FUNC_2 (struct cfiscsi_session*) ;
 int FUNC_3 (struct cfiscsi_session*,char*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 struct cfiscsi_session* FUNC_6 (struct icl_pdu const*) ;
 int FUNC_7 (struct cfiscsi_session*) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9(const struct icl_pdu *VAR_3)
{
 const struct iscsi_bhs_scsi_command *VAR_4;
 struct cfiscsi_session *VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_5 = FUNC_6(VAR_3);
 VAR_5->cs_timeout = 0;




 if ((VAR_3->ip_bhs->bhs_opcode & ~VAR_0) ==
     VAR_1)
  return (0);





 VAR_4 = (const struct iscsi_bhs_scsi_command *)VAR_3->ip_bhs;
 VAR_6 = FUNC_8(VAR_4->bhssc_cmdsn);
 VAR_7 = FUNC_8(VAR_4->bhssc_expstatsn);

 FUNC_1(VAR_5);
 if ((VAR_3->ip_bhs->bhs_opcode & VAR_0) == 0) {




  if (FUNC_5(VAR_6, VAR_5->cs_cmdsn) ||
      FUNC_4(VAR_6, VAR_5->cs_cmdsn - 1 + VAR_2)) {
   FUNC_2(VAR_5);
   FUNC_3(VAR_5, "received PDU with CmdSN %u, "
       "while expected %u", VAR_6, VAR_5->cs_cmdsn);
   return (1);
  }






  if (VAR_6 != VAR_5->cs_cmdsn) {
   FUNC_2(VAR_5);
   FUNC_3(VAR_5, "received PDU with CmdSN %u, "
       "while expected %u; dropping connection",
       VAR_6, VAR_5->cs_cmdsn);
   FUNC_7(VAR_5);
   return (1);
  }
  VAR_5->cs_cmdsn++;
 }

 FUNC_2(VAR_5);

 return (0);
}
