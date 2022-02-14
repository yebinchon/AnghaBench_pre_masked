
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tnc_if_imc {unsigned char* imc_send; scalar_t__ imc_send_len; } ;
typedef int TNC_UInt32 ;
typedef int TNC_Result ;
typedef scalar_t__ TNC_MessageType ;
typedef size_t TNC_IMCID ;
typedef int TNC_ConnectionID ;
typedef int TNC_BufferReference ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char* FUNC_0 (int ,int ,size_t*) ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,unsigned int,unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;
 struct tnc_if_imc** VAR_6 ;
 int FUNC_4 (int ,char*,int ,int ) ;
 int FUNC_5 (int ,char*,size_t,int ,scalar_t__) ;

__attribute__((used)) static TNC_Result FUNC_6(
 TNC_IMCID VAR_7,
 TNC_ConnectionID VAR_8,
 TNC_BufferReference VAR_9,
 TNC_UInt32 VAR_10,
 TNC_MessageType VAR_11)
{
 struct tnc_if_imc *VAR_12;
 unsigned char *VAR_13;
 size_t VAR_14;

 FUNC_5(VAR_0, "TNC: TNC_TNCC_SendMessage(imcID=%lu "
     "connectionID=%lu messageType=%lu)",
     VAR_7, VAR_8, VAR_11);
 FUNC_4(VAR_0, "TNC: TNC_TNCC_SendMessage",
     VAR_9, VAR_10);

 if (VAR_7 >= VAR_1 || VAR_6[VAR_7] == ((void*)0))
  return VAR_3;

 VAR_13 = FUNC_0(VAR_9, VAR_10, &VAR_14);
 if (VAR_13 == ((void*)0))
  return VAR_2;

 VAR_12 = VAR_6[VAR_7];
 FUNC_1(VAR_12->imc_send);
 VAR_12->imc_send_len = 0;
 VAR_12->imc_send = FUNC_3(VAR_14 + 100);
 if (VAR_12->imc_send == ((void*)0)) {
  FUNC_1(VAR_13);
  return VAR_4;
 }

 VAR_12->imc_send_len =
  FUNC_2((char *) VAR_12->imc_send, VAR_14 + 100,
       "<IMC-IMV-Message><Type>%08X</Type>"
       "<Base64>%s</Base64></IMC-IMV-Message>",
       (unsigned int) VAR_11, VAR_13);

 FUNC_1(VAR_13);

 return VAR_5;
}
