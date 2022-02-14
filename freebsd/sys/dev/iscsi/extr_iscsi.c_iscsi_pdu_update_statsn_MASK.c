
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct iscsi_session {scalar_t__ is_statsn; scalar_t__ is_maxcmdsn; scalar_t__ is_expcmdsn; scalar_t__ is_timeout; int is_maintenance_cv; int is_postponed; } ;
struct iscsi_bhs_data_in {scalar_t__ bhsdi_opcode; int bhsdi_flags; int bhsdi_maxcmdsn; int bhsdi_expcmdsn; int bhsdi_statsn; } ;
struct icl_pdu {scalar_t__ ip_bhs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iscsi_session*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct iscsi_session*) ;
 int FUNC_2 (struct iscsi_session*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 struct iscsi_session* FUNC_5 (struct icl_pdu const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct iscsi_session*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(const struct icl_pdu *VAR_2)
{
 const struct iscsi_bhs_data_in *VAR_3;
 struct iscsi_session *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_4 = FUNC_5(VAR_2);

 FUNC_1(VAR_4);





 VAR_3 = (const struct iscsi_bhs_data_in *)VAR_2->ip_bhs;






 if (VAR_3->bhsdi_opcode != VAR_1 ||
     (VAR_3->bhsdi_flags & VAR_0) != 0) {
  VAR_7 = FUNC_9(VAR_3->bhsdi_statsn);
  if (VAR_7 != VAR_4->is_statsn && VAR_7 != (VAR_4->is_statsn + 1)) {

   FUNC_2(VAR_4, "PDU 0x%x StatSN %u != "
       "session ExpStatSN %u (or + 1); reconnecting",
       VAR_3->bhsdi_opcode, VAR_7, VAR_4->is_statsn);
   FUNC_8(VAR_4);
  }
  if (FUNC_3(VAR_7, VAR_4->is_statsn))
   VAR_4->is_statsn = VAR_7;
 }

 VAR_5 = FUNC_9(VAR_3->bhsdi_expcmdsn);
 VAR_6 = FUNC_9(VAR_3->bhsdi_maxcmdsn);

 if (FUNC_4(VAR_6 + 1, VAR_5)) {
  FUNC_0(VAR_4,
      "PDU MaxCmdSN %u + 1 < PDU ExpCmdSN %u; ignoring",
      VAR_6, VAR_5);
 } else {
  if (FUNC_3(VAR_6, VAR_4->is_maxcmdsn)) {
   VAR_4->is_maxcmdsn = VAR_6;





   if (!FUNC_6(&VAR_4->is_postponed))
    FUNC_7(&VAR_4->is_maintenance_cv);
  } else if (FUNC_4(VAR_6, VAR_4->is_maxcmdsn)) {

   FUNC_0(VAR_4,
       "PDU MaxCmdSN %u < session MaxCmdSN %u; ignoring",
       VAR_6, VAR_4->is_maxcmdsn);
  }

  if (FUNC_3(VAR_5, VAR_4->is_expcmdsn)) {
   VAR_4->is_expcmdsn = VAR_5;
  } else if (FUNC_4(VAR_5, VAR_4->is_expcmdsn)) {

   FUNC_0(VAR_4,
       "PDU ExpCmdSN %u < session ExpCmdSN %u; ignoring",
       VAR_5, VAR_4->is_expcmdsn);
  }
 }







 VAR_4->is_timeout = 0;
}
