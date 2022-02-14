
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tncs_data {int done; int recommendation; int connectionID; struct tnc_if_imv* imv; scalar_t__ tncs_message; TYPE_1__* imv_data; } ;
struct tnc_if_imv {size_t imvID; struct tnc_if_imv* next; } ;
typedef enum tncs_process_res { ____Placeholder_tncs_process_res } tncs_process_res ;
typedef enum IMV_Action_Recommendation { ____Placeholder_IMV_Action_Recommendation } IMV_Action_Recommendation ;
struct TYPE_2__ {scalar_t__ recommendation; } ;
typedef scalar_t__ TNC_IMV_Action_Recommendation ;
typedef int TNC_ConnectionState ;


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
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,char*,int ,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct tnc_if_imv*,int ,int ) ;
 int FUNC_4 (struct tncs_data*) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static enum tncs_process_res FUNC_6(struct tncs_data *VAR_11)
{
 enum IMV_Action_Recommendation VAR_12;
 struct tnc_if_imv *VAR_13;
 TNC_ConnectionState VAR_14;
 char *VAR_15;

 FUNC_5(VAR_0, "TNC: No more messages from IMVs");

 if (VAR_11->done)
  return VAR_2;

 FUNC_4(VAR_11);


 VAR_12 = 128;
 for (VAR_13 = VAR_11->imv; VAR_13; VAR_13 = VAR_13->next) {
  TNC_IMV_Action_Recommendation VAR_16;
  VAR_16 = VAR_11->imv_data[VAR_13->imvID].recommendation;
  if (VAR_16 == 129)
   VAR_12 = 129;
  if (VAR_16 == 130 &&
      VAR_12 != 129)
   VAR_12 = 130;
  if (VAR_16 == 131 &&
      VAR_12 == 128)
   VAR_12 = 131;
 }

 FUNC_5(VAR_0, "TNC: Recommendation: %d", VAR_12);
 VAR_11->recommendation = VAR_12;
 VAR_11->done = 1;

 VAR_15 = ((void*)0);
 switch (VAR_12) {
 case 131:
 case 128:
  VAR_15 = "allow";
  VAR_14 = VAR_7;
  break;
 case 130:
  VAR_15 = "isolate";
  VAR_14 = VAR_8;
  break;
 case 129:
  VAR_15 = "none";
  VAR_14 = VAR_9;
  break;
 default:
  VAR_14 = VAR_7;
  break;
 }

 if (VAR_15) {
  FUNC_0(VAR_11->tncs_message);
  VAR_11->tncs_message = FUNC_2(200);
  if (VAR_11->tncs_message) {
   FUNC_1(VAR_11->tncs_message, 199,
        "<TNCC-TNCS-Message><Type>%08X</Type>"
        "<XML><TNCCS-Recommendation type=\"%s\">"
        "</TNCCS-Recommendation></XML>"
        "</TNCC-TNCS-Message>",
        VAR_10, VAR_15);
  }
 }

 for (VAR_13 = VAR_11->imv; VAR_13; VAR_13 = VAR_13->next) {
  FUNC_3(VAR_13, VAR_11->connectionID,
        VAR_14);
 }

 switch (VAR_12) {
 case 131:
  return VAR_3;
 case 129:
  return VAR_5;
 case 130:
  return VAR_4;
 case 128:
  return VAR_6;
 default:
  return VAR_1;
 }
}
