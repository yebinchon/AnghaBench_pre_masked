
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_msg {int dummy; } ;
struct uni_all {int mtype; } ;
struct call {scalar_t__ mine; int cref; int uni; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct uni_all*) ;







 int FUNC_1 (int ,int ,int,char*,int,int ,char*) ;
 int FUNC_2 (struct call*,int ,int ,struct uni_msg*,struct uni_all*) ;
 int FUNC_3 (struct uni_msg*) ;

__attribute__((used)) static void
FUNC_4(struct call *VAR_17, struct uni_msg *VAR_18, struct uni_all *VAR_19)
{
 FUNC_1(VAR_17->uni, VAR_16, 2, "CALL MTYPE = %x %d/%s",
  VAR_19->mtype, VAR_17->cref, VAR_17->mine ? "mine":"his");

 switch (VAR_19->mtype) {

   case 130:



  break;

   case 139:
  FUNC_2(VAR_17, VAR_4, 0, VAR_18, VAR_19);
  return;

   case 140:
  FUNC_2(VAR_17, VAR_3, 0, VAR_18, VAR_19);
  return;

   case 132:
  FUNC_2(VAR_17, VAR_11, 0, VAR_18, VAR_19);
  return;

   case 131:
  FUNC_2(VAR_17, VAR_12, 0, VAR_18, VAR_19);
  return;

   case 138:
  FUNC_2(VAR_17, VAR_5, 0, VAR_18, VAR_19);
  return;

   case 137:
  FUNC_2(VAR_17, VAR_6, 0, VAR_18, VAR_19);
  return;

   case 134:
  FUNC_2(VAR_17, VAR_9, 0, VAR_18, VAR_19);
  return;

   case 129:
  FUNC_2(VAR_17, VAR_13, 0, VAR_18, VAR_19);
  return;

   case 128:
  FUNC_2(VAR_17, VAR_14, 0, VAR_18, VAR_19);
  return;

   case 143:
  FUNC_2(VAR_17, VAR_0, 0, VAR_18, VAR_19);
  return;

   case 133:
  FUNC_2(VAR_17, VAR_10, 0, VAR_18, VAR_19);
  return;

   case 142:
  FUNC_2(VAR_17, VAR_1, 0, VAR_18, VAR_19);
  return;

   case 141:
  FUNC_2(VAR_17, VAR_2, 0, VAR_18, VAR_19);
  return;

   case 136:
  FUNC_2(VAR_17, VAR_7, 0, VAR_18, VAR_19);
  return;

   case 135:
  FUNC_2(VAR_17, VAR_8, 0, VAR_18, VAR_19);
  return;

   default:
  FUNC_2(VAR_17, VAR_15, 0, VAR_18, VAR_19);
  return;
 }
 FUNC_0(VAR_19);
 FUNC_3(VAR_18);
}
