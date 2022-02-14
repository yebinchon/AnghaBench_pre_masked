
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tncs_data {TYPE_1__* imv_data; } ;
struct TYPE_2__ {unsigned char* imv_send; scalar_t__ imv_send_len; } ;
typedef int TNC_UInt32 ;
typedef int TNC_Result ;
typedef scalar_t__ TNC_MessageType ;
typedef size_t TNC_IMVID ;
typedef int TNC_ConnectionID ;
typedef int TNC_BufferReference ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned char* FUNC_0 (int ,int ,size_t*) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,unsigned int,unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;
 struct tncs_data* FUNC_4 (int ) ;
 int * FUNC_5 (size_t) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int ,char*,size_t,int ,scalar_t__) ;

__attribute__((used)) static TNC_Result FUNC_8(
 TNC_IMVID VAR_5,
 TNC_ConnectionID VAR_6,
 TNC_BufferReference VAR_7,
 TNC_UInt32 VAR_8,
 TNC_MessageType VAR_9)
{
 struct tncs_data *VAR_10;
 unsigned char *VAR_11;
 size_t VAR_12;

 FUNC_7(VAR_0, "TNC: TNC_TNCS_SendMessage(imvID=%lu "
     "connectionID=%lu messageType=%lu)",
     VAR_5, VAR_6, VAR_9);
 FUNC_6(VAR_0, "TNC: TNC_TNCS_SendMessage",
     VAR_7, VAR_8);

 if (FUNC_5(VAR_5) == ((void*)0))
  return VAR_2;

 VAR_10 = FUNC_4(VAR_6);
 if (VAR_10 == ((void*)0))
  return VAR_2;

 VAR_11 = FUNC_0(VAR_7, VAR_8, &VAR_12);
 if (VAR_11 == ((void*)0))
  return VAR_1;

 FUNC_1(VAR_10->imv_data[VAR_5].imv_send);
 VAR_10->imv_data[VAR_5].imv_send_len = 0;
 VAR_10->imv_data[VAR_5].imv_send = FUNC_3(VAR_12 + 100);
 if (VAR_10->imv_data[VAR_5].imv_send == ((void*)0)) {
  FUNC_1(VAR_11);
  return VAR_3;
 }

 VAR_10->imv_data[VAR_5].imv_send_len =
  FUNC_2((char *) VAR_10->imv_data[VAR_5].imv_send,
       VAR_12 + 100,
       "<IMC-IMV-Message><Type>%08X</Type>"
       "<Base64>%s</Base64></IMC-IMV-Message>",
       (unsigned int) VAR_9, VAR_11);

 FUNC_1(VAR_11);

 return VAR_4;
}
