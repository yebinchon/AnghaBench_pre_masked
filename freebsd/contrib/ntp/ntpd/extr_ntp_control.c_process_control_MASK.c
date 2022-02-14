
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32 ;
struct recvbuf {int recv_length; int recv_srcadr; int recv_pkt; int dstadr; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct ntp_control {int r_m_e_op; scalar_t__ offset; TYPE_2__ u; int count; int associd; int sequence; int li_vn_mode; } ;
struct ctl_proc {int control_code; scalar_t__ flags; int (* handler ) (struct recvbuf*,int) ;} ;
typedef int keyid_t ;
struct TYPE_4__ {int * data; } ;
struct TYPE_6__ {TYPE_1__ u; scalar_t__ status; int associd; int sequence; int li_vn_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 void* VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* VAR_16 ;
 scalar_t__ FUNC_3 (scalar_t__,int *,size_t,size_t) ;
 int FUNC_4 (scalar_t__,int *) ;
 struct ctl_proc* VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (int ) ;
 int * VAR_19 ;
 scalar_t__ VAR_20 ;
 void* VAR_21 ;
 int * VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_6 (int ) ;
 int VAR_24 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 char* VAR_34 ;
 char* VAR_35 ;
 int VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 int * VAR_45 ;
 TYPE_3__ VAR_46 ;
 int FUNC_9 (struct recvbuf*,int) ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;

void
FUNC_10(
 struct recvbuf *VAR_49,
 int VAR_50
 )
{
 struct ntp_control *VAR_51;
 int VAR_52;
 int VAR_53;
 const struct ctl_proc *VAR_54;
 keyid_t *VAR_55;
 int VAR_56;
 size_t VAR_57;

 FUNC_0(3, ("in process_control()\n"));




 VAR_32++;
 VAR_45 = &VAR_49->recv_srcadr;
 VAR_24 = VAR_49->dstadr;
 VAR_51 = (struct ntp_control *)&VAR_49->recv_pkt;





 if (VAR_49->recv_length < (int)VAR_5
     || (VAR_8 | VAR_7 | VAR_4) & VAR_51->r_m_e_op
     || VAR_51->offset != 0) {
  FUNC_0(1, ("invalid format in control packet\n"));
  if (VAR_49->recv_length < (int)VAR_5)
   VAR_33++;
  if (VAR_8 & VAR_51->r_m_e_op)
   VAR_31++;
  if (VAR_7 & VAR_51->r_m_e_op)
   VAR_30++;
  if (VAR_4 & VAR_51->r_m_e_op)
   VAR_29++;
  if (VAR_51->offset != 0)
   VAR_25++;
  return;
 }
 VAR_44 = FUNC_2(VAR_51->li_vn_mode);
 if (VAR_44 > VAR_15 || VAR_44 < VAR_14) {
  FUNC_0(1, ("unknown version %d in control packet\n",
       VAR_44));
  VAR_27++;
  return;
 }





 VAR_46.li_vn_mode = FUNC_1(VAR_48, VAR_44,
      VAR_12);
 VAR_43 = VAR_51->r_m_e_op;
 VAR_46.sequence = VAR_51->sequence;
 VAR_46.associd = VAR_51->associd;
 VAR_46.status = 0;
 VAR_40 = 1;
 VAR_42 = 0;
 VAR_36 = FUNC_6(VAR_51->associd);
 VAR_37 = VAR_9;
 VAR_38 = VAR_9;
 VAR_41 = 0;
 VAR_39 = VAR_9;
 VAR_52 = (int)FUNC_8(VAR_51->count);
 VAR_21 = VAR_9;
 VAR_20 = 0;
 VAR_23 = 0;
 VAR_22 = VAR_46.u.data;
 VAR_19 = &VAR_46.u.data[VAR_6];

 if ((VAR_49->recv_length & 0x3) != 0)
  FUNC_0(3, ("Control packet length %d unrounded\n",
       VAR_49->recv_length));





 VAR_53 = VAR_49->recv_length - VAR_5;
 if (VAR_53 < VAR_52 || VAR_49->recv_length & 0x3) {
  FUNC_5(VAR_1);
  VAR_28++;
  return;
 }

 VAR_56 = VAR_52 + VAR_5;


 VAR_56 = (VAR_56 + 7) & ~7;
 VAR_57 = VAR_49->recv_length - VAR_56;
 if ((VAR_49->recv_length & 3) == 0 &&
     VAR_57 >= VAR_11 && VAR_57 <= VAR_10 &&
     VAR_47) {
  VAR_38 = VAR_16;
  VAR_55 = (void *)((char *)VAR_51 + VAR_56);
  VAR_41 = FUNC_7(*VAR_55);
  FUNC_0(3, ("recv_len %d, properlen %d, wants auth with keyid %08x, MAC length=%zu\n",
       VAR_49->recv_length, VAR_56, VAR_41,
       VAR_57));

  if (!FUNC_4(VAR_41, &VAR_49->recv_srcadr))
   FUNC_0(3, ("invalid keyid %08x\n", VAR_41));
  else if (FUNC_3(VAR_41, (u_int32 *)VAR_51,
         VAR_49->recv_length - VAR_57,
         VAR_57)) {
   VAR_39 = VAR_16;
   FUNC_0(3, ("authenticated okay\n"));
  } else {
   VAR_41 = 0;
   FUNC_0(3, ("authentication failed\n"));
  }
 }




 VAR_35 = (char *)VAR_51->u.data;
 VAR_34 = VAR_35 + VAR_52;




 for (VAR_54 = VAR_17; VAR_54->control_code != VAR_13; VAR_54++) {
  if (VAR_54->control_code == VAR_43) {
   FUNC_0(3, ("opcode %d, found command handler\n",
        VAR_43));
   if (VAR_54->flags == VAR_0
       && (!VAR_39
    || VAR_41 != VAR_18)) {
    FUNC_5(VAR_3);
    return;
   }
   (VAR_54->handler)(VAR_49, VAR_50);
   return;
  }
 }




 VAR_26++;
 FUNC_5(VAR_2);
 return;
}
