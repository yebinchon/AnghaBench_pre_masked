
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint32_t ;
struct uni_msg {int dummy; } ;
struct TYPE_24__ {int cause; int epref; } ;
struct TYPE_23__ {int cause; int epref; } ;
struct TYPE_22__ {int epref; } ;
struct TYPE_21__ {int epref; } ;
struct TYPE_20__ {int epref; } ;
struct TYPE_19__ {int epref; } ;
struct TYPE_18__ {int epref; } ;
struct TYPE_17__ {int epref; } ;
struct TYPE_16__ {int epref; } ;
struct TYPE_13__ {TYPE_9__ drop_party_ack; TYPE_8__ drop_party; TYPE_7__ add_party_rej; TYPE_6__ party_alerting; TYPE_5__ add_party; TYPE_4__ connect; TYPE_3__ alerting; TYPE_2__ call_proc; TYPE_1__ setup; } ;
struct uni_all {TYPE_10__ u; } ;
struct uni {int arg; TYPE_11__* funcs; int cause; int proto; int cx; int sb_tb; } ;
struct call {size_t cstate; struct uni* uni; int type; scalar_t__ mine; int cref; } ;
typedef enum call_sig { ____Placeholder_call_sig } call_sig ;
struct TYPE_15__ {int name; } ;
struct TYPE_14__ {int (* uni_output ) (struct uni*,int ,int ,int ,struct uni_msg*) ;} ;
 int FUNC_0 (struct call*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct uni_all*) ;
 int FUNC_2 (struct uni*,int ,int,char*,int,...) ;
 int * VAR_12 ;
 TYPE_12__* VAR_13 ;
 int FUNC_3 (struct call*) ;
 int FUNC_4 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_5 (struct call*,struct uni_msg*,int ,int) ;
 int FUNC_6 (struct call*,struct uni_msg*) ;
 int FUNC_7 (struct call*,struct uni_msg*) ;
 int FUNC_8 (struct call*,struct uni_msg*) ;
 int FUNC_9 (struct uni*,int ,int ,int ,struct uni_msg*) ;
 int FUNC_10 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_11 (struct call*) ;
 int FUNC_12 (struct call*,struct uni_msg*,struct uni_all*,int const) ;
 int FUNC_13 (struct call*) ;
 int FUNC_14 (struct call*) ;
 int FUNC_15 (struct call*) ;
 int FUNC_16 (struct call*,struct uni_msg*,int ,int const) ;
 int FUNC_17 (struct call*,struct uni_msg*,struct uni_all*,int) ;
 int FUNC_18 (struct call*) ;
 int FUNC_19 (struct call*,struct uni_msg*,struct uni_all*,int const) ;
 int FUNC_20 (struct call*,struct uni_msg*,int ,int const) ;
 int FUNC_21 (struct call*,struct uni_msg*,int ) ;
 int FUNC_22 (struct call*) ;
 int FUNC_23 (struct call*) ;
 int FUNC_24 (struct call*) ;
 int FUNC_25 (struct call*) ;
 int FUNC_26 (struct call*,struct uni_msg*,struct uni_all*,int) ;
 int FUNC_27 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_28 (struct call*,struct uni_all*,int ,int *,int) ;
 int FUNC_29 (struct uni_msg*,struct uni_all*,int *) ;
 int FUNC_30 (struct call*,int ) ;
 int FUNC_31 (struct uni_msg*) ;
 int FUNC_32 (struct call*,int) ;
 int FUNC_33 (struct uni_all*,struct uni*) ;
 int FUNC_34 (struct call*,int ,int ) ;
 int FUNC_35 (struct uni*,int ,int ,int ) ;
 int FUNC_36 (struct call*,struct uni_msg*,struct uni_all*,int) ;
 int FUNC_37 (struct call*,struct uni_msg*,struct uni_all*,int) ;
 int FUNC_38 (struct call*,struct uni_msg*,int ) ;
 int FUNC_39 (struct call*,struct uni_msg*,int ) ;
 int FUNC_40 (struct call*,struct uni_msg*,struct uni_all*,int const) ;
 int FUNC_41 (struct call*,struct uni_msg*,int ,int const) ;
 int FUNC_42 (struct call*,struct uni_msg*,struct uni_all*,int const) ;
 int FUNC_43 (struct call*,struct uni_msg*,struct uni_all*,int) ;
 int FUNC_44 (struct call*,struct uni_msg*,struct uni_all*,int) ;
 int FUNC_45 (struct call*,struct uni_msg*,int ) ;
 int FUNC_46 (struct call*,struct uni_msg*,int ) ;
 int FUNC_47 (struct call*) ;
 int FUNC_48 (struct call*) ;
 int FUNC_49 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_50 (struct call*,struct uni_msg*,int ) ;
 int FUNC_51 (struct call*,struct uni_msg*,struct uni_all*,int) ;
 int FUNC_52 (struct call*,struct uni_msg*,int ) ;
 int FUNC_53 (struct call*,struct uni_msg*,struct uni_all*,int const) ;
 int FUNC_54 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_55 (struct call*,struct uni_msg*,int ,int const) ;
 int FUNC_56 (struct call*,struct uni_msg*,int ) ;
 int FUNC_57 (struct call*,struct uni_all*) ;
 int FUNC_58 (struct call*,struct uni_all*) ;
 int FUNC_59 (struct call*,struct uni_msg*,int ,int const) ;
 int FUNC_60 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_61 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_62 (struct call*,struct uni_msg*,int ) ;
 int FUNC_63 (struct call*) ;
 int FUNC_64 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_65 (struct call*,struct uni_msg*) ;
 int FUNC_66 (struct call*,struct uni_msg*) ;
 int FUNC_67 (struct call*,struct uni_msg*) ;

void
FUNC_68(struct call *VAR_14, enum call_sig VAR_15, uint32_t VAR_16,
    struct uni_msg *VAR_17, struct uni_all *VAR_18)
{
 if (VAR_15 >= 160) {
  FUNC_2(VAR_14->uni, VAR_11, 1,
      "Signal %d outside of range to Call-Control", VAR_15);
  if (VAR_17)
   FUNC_31(VAR_17);
  if (VAR_18)
   FUNC_1(VAR_18);
  return;
 }

 FUNC_2(VAR_14->uni, VAR_10, 1, "Signal %s in state %s of call %u/%s"
     "; cookie %u", VAR_12[VAR_15], VAR_13[VAR_14->cstate].name, VAR_14->cref,
     VAR_14->mine ? "mine" : "his", VAR_16);

 switch (VAR_15) {

   case 156:
  if (VAR_14->cstate == 190 || VAR_14->cstate == 201)


   FUNC_25(VAR_14);
  else


   FUNC_48(VAR_14);
  break;

   case 159:
  if (VAR_14->cstate != 190 && VAR_14->cstate != 201) {
   FUNC_2(VAR_14->uni, VAR_11, 1,
       "link-establish-error.indication in cs=%s",
       VAR_13[VAR_14->cstate].name);
   break;
  }


  FUNC_23(VAR_14);
  break;

   case 157:
  switch (VAR_14->cstate) {

    case 191: case 202:
    case 187: case 198:
    case 186: case 197:
    case 185: case 196:
    case 184: case 195:
    case 183: case 194:
    case 182: case 193:


   FUNC_47(VAR_14);
   break;

    case 190: case 201:


   FUNC_24(VAR_14);
   break;

    case 189: case 200:
    case 188: case 199:


   break;

    default:
   FUNC_2(VAR_14->uni, VAR_11, 1,
       "link-establish.indication in cs=%s",
       VAR_13[VAR_14->cstate].name);
  }
  break;

   case 158:
  if (VAR_14->cstate != 190 && VAR_14->cstate != 201) {
   FUNC_2(VAR_14->uni, VAR_11, 1,
       "link-establish.confirm in cs=%s",
       VAR_13[VAR_14->cstate].name);
   break;
  }


  FUNC_22(VAR_14);
  break;

   case 128:


  FUNC_64(VAR_14, VAR_17, VAR_18);
  break;

   case 141:
  if (VAR_14->cstate != 192) {
   (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);
   FUNC_28(VAR_14, VAR_18, VAR_8,
       &VAR_18->u.setup.epref, -1);
   goto drop;
  }
  if (VAR_14->uni->proto == VAR_5)

   FUNC_19(VAR_14, VAR_17, VAR_18, 202);
  else

   FUNC_19(VAR_14, VAR_17, VAR_18, 185);
  break;

   case 170:
  if (VAR_14->cstate == 191) {

   FUNC_12(VAR_14, VAR_17, VAR_18, 187);
   break;
  }
  if (VAR_14->cstate == 196) {

   FUNC_12(VAR_14, VAR_17, VAR_18, 193);
   break;
  }
  (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);
  FUNC_28(VAR_14, VAR_18, VAR_8,
      &VAR_18->u.call_proc.epref, -1);
  goto drop;

   case 173:
  if (VAR_14->cstate == 191 || VAR_14->cstate == 187) {


   FUNC_40(VAR_14, VAR_17, VAR_18, 186);
   break;
  }
  if (VAR_14->cstate == 196) {


   FUNC_40(VAR_14, VAR_17, VAR_18, 195);
   break;
  }
  (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);
  FUNC_28(VAR_14, VAR_18, VAR_8,
      &VAR_18->u.alerting.epref, -1);
  goto drop;

   case 168:
  if (VAR_14->cstate == 191 || VAR_14->cstate == 187 ||
      VAR_14->cstate == 186) {



   FUNC_42(VAR_14, VAR_17, VAR_18, 190);
   break;
  }
  if (VAR_14->cstate == 196 || VAR_14->cstate == 195 ||
      VAR_14->cstate == 193) {



   FUNC_42(VAR_14, VAR_17, VAR_18, 194);
   break;
  }
  (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);
  FUNC_28(VAR_14, VAR_18, VAR_8,
      &VAR_18->u.connect.epref, -1);
  goto drop;

   case 167:
  if (VAR_14->cstate == 183) {

   FUNC_17(VAR_14, VAR_17, VAR_18, 190);
   break;
  }
  if (VAR_14->cstate == 201) {

   FUNC_4(VAR_14, VAR_17, VAR_18);
   break;
  }
  FUNC_28(VAR_14, VAR_18, VAR_8, ((void*)0), 0);
  goto drop;

   case 149:
  switch (VAR_14->cstate) {

    default:
   FUNC_28(VAR_14, VAR_18, VAR_8, ((void*)0), 0);
   goto drop;

    case 189:
    case 199:


   FUNC_10(VAR_14, VAR_17, VAR_18);
   break;

    case 191:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 190:
    case 188:

   FUNC_53(VAR_14, VAR_17, VAR_18, 188);
   break;

    case 202:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 201:
    case 200:

   FUNC_53(VAR_14, VAR_17, VAR_18, 200);
   break;
  }
  break;

   case 148:


  FUNC_54(VAR_14, VAR_17, VAR_18);
  break;

   case 155:


  FUNC_49(VAR_14, VAR_17, VAR_18);
  break;

   case 137:
  if (VAR_14->cstate == 189 || VAR_14->cstate == 188 ||
      VAR_14->cstate == 200 || VAR_14->cstate == 199) {




   FUNC_27(VAR_14, VAR_17, VAR_18);
   break;
  }


  FUNC_60(VAR_14, VAR_17, VAR_18);
  break;

   case 136:


  FUNC_61(VAR_14, VAR_17, VAR_18);
  break;

   case 180:
  (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);

  if (VAR_14->type != VAR_0 && VAR_14->type != VAR_1) {
   FUNC_28(VAR_14, VAR_18, VAR_8,
       &VAR_18->u.add_party.epref, VAR_9);
   goto drop;
  }
  switch (VAR_14->cstate) {
    case 184:
    case 183:
    case 190:
    case 197:
    case 201:





   FUNC_36(VAR_14, VAR_17, VAR_18, 1);
   break;

    default:
   FUNC_36(VAR_14, VAR_17, VAR_18, 0);
   goto drop;
  }
  break;

   case 153:
  (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);

  if (VAR_14->type != VAR_1) {
   FUNC_28(VAR_14, VAR_18, VAR_8,
       &VAR_18->u.party_alerting.epref, -1);
   goto drop;
  }
  switch (VAR_14->cstate) {

    default:

   FUNC_51(VAR_14, VAR_17, VAR_18, 0);
   break;

    case 186:
    case 190:





   FUNC_51(VAR_14, VAR_17, VAR_18, 1);
   break;
  }
  break;

   case 179:
  (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);

  if (VAR_14->type != VAR_1) {
   FUNC_28(VAR_14, VAR_18, VAR_8,
       &VAR_18->u.add_party_rej.epref, -1);
   goto drop;
  }
  switch (VAR_14->cstate) {

    case 190:



   FUNC_26(VAR_14, VAR_17, VAR_18, 1);
   break;

    default:

   FUNC_26(VAR_14, VAR_17, VAR_18, 0);
   break;
  }
  break;

   case 177:
  (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);

  if (VAR_14->type != VAR_1) {
   FUNC_28(VAR_14, VAR_18, VAR_8,
       &VAR_18->u.add_party_rej.epref, -1);
   goto drop;
  }
  switch (VAR_14->cstate) {

    case 186:
         case 190:
    case 195:
    case 194:
    case 201:





   FUNC_37(VAR_14, VAR_17, VAR_18, 1);
   break;

    default:

   FUNC_37(VAR_14, VAR_17, VAR_18, 0);
   break;
  }
  break;

   case 166:
  (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);

  if (VAR_14->type != VAR_1 && VAR_14->type != VAR_0) {
   FUNC_28(VAR_14, VAR_18, VAR_8,
       &VAR_18->u.drop_party.epref, -1);
   goto drop;
  }
  switch (VAR_14->cstate) {
    case 189:
    case 188:
    case 200:
    case 199:




   goto drop;

    case 192:
   FUNC_28(VAR_14, VAR_18, VAR_8,
       &VAR_18->u.drop_party.epref, VAR_9);
   goto drop;

    case 187:
    case 198:

   FUNC_43(VAR_14, VAR_17, VAR_18, 0);
   break;

    case 183:
   if (VAR_14->uni->sb_tb) {

    FUNC_43(VAR_14, VAR_17, VAR_18, 0);
    break;
   }


    default:




   FUNC_43(VAR_14, VAR_17, VAR_18, 1);
   break;
  }
  break;

   case 165:
  (void)FUNC_29(VAR_17, VAR_18, &VAR_14->uni->cx);

  if (VAR_14->type != VAR_1 && VAR_14->type != VAR_0) {
   FUNC_28(VAR_14, VAR_18, VAR_8,
       &VAR_18->u.drop_party_ack.epref, -1);
   goto drop;
  }
  switch (VAR_14->cstate) {

    case 189:
    case 188:




   goto drop;

    case 192:
   FUNC_28(VAR_14, VAR_18, VAR_8,
       &VAR_18->u.drop_party.epref, VAR_9);
   goto drop;

    case 186:
    case 197:
    case 184:
    case 195:
    case 183:
    case 194:
    case 190:
    case 201:




   FUNC_44(VAR_14, VAR_17, VAR_18, 1);
   break;

    default:

   FUNC_44(VAR_14, VAR_17, VAR_18, 0);
   break;
  }
  break;

   case 169:
  FUNC_64(VAR_14, VAR_17, VAR_18);
  break;




   case 139:
  if (VAR_14->cstate == 192) {


   if (VAR_14->uni->proto == VAR_5)
    FUNC_20(VAR_14, VAR_17, VAR_16, 196);
   else
    FUNC_20(VAR_14, VAR_17, VAR_16, 191);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "setup.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 138:
  if (VAR_14->cstate == 185 || VAR_14->cstate == 182 ||
      VAR_14->cstate == 184) {



   FUNC_59(VAR_14, VAR_17, VAR_16, 183);
   break;
  }
  if (VAR_14->cstate == 202 || VAR_14->cstate == 198 ||
      VAR_14->cstate == 197) {



   FUNC_59(VAR_14, VAR_17, VAR_16, 201);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "setup.response in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 140:
  if (VAR_14->cstate == 194) {

   FUNC_5(VAR_14, VAR_17, VAR_16, 201);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "setup_compl.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 150:
  if (VAR_14->cstate == 185) {

   FUNC_16(VAR_14, VAR_17, VAR_16, 182);
   break;
  }
  if (VAR_14->cstate == 202) {

   FUNC_16(VAR_14, VAR_17, VAR_16, 198);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "proceeding.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 172:
  if (VAR_14->cstate == 185 || VAR_14->cstate == 182) {


   FUNC_41(VAR_14, VAR_17, VAR_16, 184);
   break;
  }
  if (VAR_14->cstate == 202 || VAR_14->cstate == 198) {


   FUNC_41(VAR_14, VAR_17, VAR_16, 197);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "alerting.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 147:
  switch (VAR_14->cstate) {

    case 191:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 190:

   FUNC_55(VAR_14, VAR_17, VAR_16, 189);
   break;

    case 202:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 201:

   FUNC_55(VAR_14, VAR_17, VAR_16, 199);
   break;

    case 189:
    case 188:
    case 200:
    case 199:
    case 192:
   FUNC_2(VAR_14->uni, VAR_11, 1,
       "release.request in cs=%s",
       VAR_13[VAR_14->cstate].name);
   FUNC_34(VAR_14, VAR_2,
       VAR_16);
   FUNC_31(VAR_17);
   break;
  }
  break;

   case 146:
  if (VAR_14->cstate == 185 || VAR_14->cstate == 188 ||
      VAR_14->cstate == 202 || VAR_14->cstate == 200) {




   FUNC_56(VAR_14, VAR_17, VAR_16);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "release.response in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 154:


  FUNC_50(VAR_14, VAR_17, VAR_16);
  break;

   case 135:


  FUNC_62(VAR_14, VAR_17, VAR_16);
  break;

   case 174:
  if (VAR_14->cstate == 186 || VAR_14->cstate == 190 ||
      VAR_14->cstate == 195 || VAR_14->cstate == 201) {




   FUNC_39(VAR_14, VAR_17, VAR_16);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "add-party.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 152:
  if (VAR_14->cstate == 184 || VAR_14->cstate == 183 ||
      VAR_14->cstate == 190 ||
      VAR_14->cstate == 197 || VAR_14->cstate == 201) {





   FUNC_52(VAR_14, VAR_17, VAR_16);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1,
      "party-alerting.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 178:
  if (VAR_14->cstate == 190 || VAR_14->cstate == 201) {


   FUNC_21(VAR_14, VAR_17, VAR_16);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1,
      "add-party-ack.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 175:
  if (VAR_14->cstate == 184 || VAR_14->cstate == 183 ||
      VAR_14->cstate == 190 ||
      VAR_14->cstate == 197 || VAR_14->cstate == 201) {





   FUNC_38(VAR_14, VAR_17, VAR_16);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1,
      "add-party-rej.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 161:
  if (VAR_14->cstate != 189 && VAR_14->cstate != 188 &&
      VAR_14->cstate != 200 && VAR_14->cstate != 199 &&
      VAR_14->cstate != 192) {




   FUNC_46(VAR_14, VAR_17, VAR_16);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "drop-party.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 163:
  if (VAR_14->cstate != 189 && VAR_14->cstate != 188 &&
      VAR_14->cstate != 200 && VAR_14->cstate != 199 &&
      VAR_14->cstate != 192) {




   FUNC_45(VAR_14, VAR_17, VAR_16);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1,
      "drop-party-ack.request in cs=%s",
      VAR_13[VAR_14->cstate].name);
  FUNC_34(VAR_14, VAR_2, VAR_16);
  FUNC_31(VAR_17);
  break;

   case 181:
     {
  struct uni *VAR_19 = VAR_14->uni;

  FUNC_30(VAR_14, 0);
  FUNC_35(VAR_19, VAR_3, VAR_16, VAR_7);
  break;
     }




   case 134:
  if (VAR_14->cstate == 186 || VAR_14->cstate == 195) {


   FUNC_15(VAR_14);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "T301 in cs=%s",
      VAR_13[VAR_14->cstate].name);
  break;

   case 133:
  if (VAR_14->cstate == 191 || VAR_14->cstate == 196) {


   FUNC_13(VAR_14);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "T303 in cs=%s",
      VAR_13[VAR_14->cstate].name);
  break;

   case 132:
  if (VAR_14->cstate == 189 || VAR_14->cstate == 199) {


   FUNC_11(VAR_14);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "T308 in cs=%s",
      VAR_13[VAR_14->cstate].name);
  break;

   case 131:
  if (VAR_14->cstate == 187 || VAR_14->cstate == 193) {


   FUNC_14(VAR_14);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "T310 in cs=%s",
      VAR_13[VAR_14->cstate].name);
  break;

   case 130:
  if (VAR_14->cstate == 183) {

   FUNC_18(VAR_14);
   break;
  }
  FUNC_2(VAR_14->uni, VAR_11, 1, "T313 in cs=%s",
      VAR_13[VAR_14->cstate].name);
  break;

   case 129:


  FUNC_63(VAR_14);
  break;

   case 171:
  FUNC_0(VAR_14);
  break;




   case 162:
  if (VAR_14->uni->proto == VAR_6)

   FUNC_67(VAR_14, VAR_17);
  else

   FUNC_8(VAR_14, VAR_17);
  break;

   case 164:
  if (VAR_14->uni->proto == VAR_6)

   FUNC_66(VAR_14, VAR_17);
  else

   FUNC_7(VAR_14, VAR_17);
  break;

   case 176:
  if (VAR_14->uni->proto == VAR_6)

   FUNC_65(VAR_14, VAR_17);
  else

   FUNC_6(VAR_14, VAR_17);
  break;


   case 144:


  if (FUNC_32(VAR_14, 2) != 0)
   (void)FUNC_33(VAR_18, VAR_14->uni);
  else if(VAR_14->cstate != 189) {
   VAR_14->uni->cause = VAR_18->u.drop_party.cause;
   FUNC_3(VAR_14);
  }
  FUNC_1(VAR_18);
  break;

   case 143:


  if (FUNC_32(VAR_14, 2) != 0)
   (void)FUNC_33(VAR_18, VAR_14->uni);
  else if (VAR_14->cstate != 189) {
   VAR_14->uni->cause = VAR_18->u.drop_party_ack.cause;
   FUNC_3(VAR_14);
  }
  FUNC_1(VAR_18);
  break;

   case 145:


  FUNC_57(VAR_14, VAR_18);
  break;

   case 142:


  FUNC_58(VAR_14, VAR_18);
  break;

   case 151:
  VAR_14->uni->funcs->uni_output(VAR_14->uni, VAR_14->uni->arg,
      VAR_4, VAR_16, VAR_17);
  break;

   case 160:
  break;
 }

 return;

  drop:



 FUNC_31(VAR_17);
 FUNC_1(VAR_18);
}
