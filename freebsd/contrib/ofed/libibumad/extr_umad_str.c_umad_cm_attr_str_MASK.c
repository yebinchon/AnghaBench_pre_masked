
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be16 ;
 int FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char * FUNC_2(__be16 VAR_0)
{
 switch(FUNC_0(VAR_0)) {
  case 133:
   return "ConnectRequest";
  case 136:
   return "MsgRcptAck";
  case 135:
   return "ConnectReject";
  case 134:
   return "ConnectReply";
  case 132:
   return "ReadyToUse";
  case 138:
   return "DisconnectRequest";
  case 139:
   return "DisconnectReply";
  case 129:
   return "ServiceIDResReq";
  case 130:
   return "ServiceIDResReqResp";
  case 137:
   return "LoadAlternatePath";
  case 140:
   return "AlternatePathResponse";
  case 131:
   return "SuggestAlternatePath";
  case 128:
   return "SuggestPathResponse";
  default:
   return (FUNC_1(VAR_0));
 }
 return ("<unknown>");
}
