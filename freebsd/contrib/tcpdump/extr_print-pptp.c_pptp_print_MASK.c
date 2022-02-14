
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
typedef int u_char ;
struct pptp_hdr {int reserved0; int ctrl_msg_type; int magic_cookie; int msg_type; int length; } ;
struct TYPE_19__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;


 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (TYPE_1__*,int const*) ;
 int FUNC_7 (TYPE_1__*,int const*) ;
 int FUNC_8 (TYPE_1__*,int const*) ;
 int FUNC_9 (TYPE_1__*,int const*) ;
 int FUNC_10 (TYPE_1__*,int const*) ;
 int * VAR_2 ;
 int FUNC_11 (TYPE_1__*,int const*) ;
 int FUNC_12 (TYPE_1__*,int const*) ;
 int FUNC_13 (TYPE_1__*,int const*) ;
 int FUNC_14 (TYPE_1__*,int const*) ;
 int FUNC_15 (TYPE_1__*,int const*) ;
 int FUNC_16 (TYPE_1__*,int const*) ;
 int FUNC_17 (TYPE_1__*,int const*) ;
 int FUNC_18 (TYPE_1__*,int const*) ;
 int VAR_3 ;

void
FUNC_19(netdissect_options *VAR_4,
           const u_char *VAR_5)
{
 const struct pptp_hdr *VAR_6;
 uint32_t VAR_7;
 uint16_t VAR_8;

 FUNC_2((VAR_4, ": pptp"));

 VAR_6 = (const struct pptp_hdr *)VAR_5;

 FUNC_3(VAR_6->length);
 if (VAR_4->ndo_vflag) {
  FUNC_2((VAR_4, " Length=%u", FUNC_0(&VAR_6->length)));
 }
 FUNC_3(VAR_6->msg_type);
 if (VAR_4->ndo_vflag) {
  switch(FUNC_0(&VAR_6->msg_type)) {
  case 129:
   FUNC_2((VAR_4, " CTRL-MSG"));
   break;
  case 128:
   FUNC_2((VAR_4, " MGMT-MSG"));
   break;
  default:
   FUNC_2((VAR_4, " UNKNOWN-MSG-TYPE"));
   break;
  }
 }

 FUNC_3(VAR_6->magic_cookie);
 VAR_7 = FUNC_1(&VAR_6->magic_cookie);
 if (VAR_7 != VAR_0) {
  FUNC_2((VAR_4, " UNEXPECTED Magic-Cookie!!(%08x)", VAR_7));
 }
 if (VAR_4->ndo_vflag || VAR_7 != VAR_0) {
  FUNC_2((VAR_4, " Magic-Cookie=%08x", VAR_7));
 }
 FUNC_3(VAR_6->ctrl_msg_type);
 VAR_8 = FUNC_0(&VAR_6->ctrl_msg_type);
 if (VAR_8 < VAR_1) {
  FUNC_2((VAR_4, " CTRL_MSGTYPE=%s",
         VAR_2[VAR_8]));
 } else {
  FUNC_2((VAR_4, " UNKNOWN_CTRL_MSGTYPE(%u)", VAR_8));
 }
 FUNC_3(VAR_6->reserved0);

 VAR_5 += 12;

 switch(VAR_8) {
 case 134:
  FUNC_14(VAR_4, VAR_5);
  break;
 case 135:
  FUNC_13(VAR_4, VAR_5);
  break;
 case 131:
  FUNC_17(VAR_4, VAR_5);
  break;
 case 132:
  FUNC_16(VAR_4, VAR_5);
  break;
 case 141:
  FUNC_7(VAR_4, VAR_5);
  break;
 case 142:
  FUNC_6(VAR_4, VAR_5);
  break;
 case 136:
  FUNC_12(VAR_4, VAR_5);
  break;
 case 137:
  FUNC_11(VAR_4, VAR_5);
  break;
 case 138:
  FUNC_10(VAR_4, VAR_5);
  break;
 case 139:
  FUNC_9(VAR_4, VAR_5);
  break;
 case 140:
  FUNC_8(VAR_4, VAR_5);
  break;
 case 144:
  FUNC_4(VAR_4, VAR_5);
  break;
 case 143:
  FUNC_5(VAR_4, VAR_5);
  break;
 case 130:
  FUNC_18(VAR_4, VAR_5);
  break;
 case 133:
  FUNC_15(VAR_4, VAR_5);
  break;
 default:

  break;
 }

 return;

trunc:
 FUNC_2((VAR_4, "%s", VAR_3));
}
