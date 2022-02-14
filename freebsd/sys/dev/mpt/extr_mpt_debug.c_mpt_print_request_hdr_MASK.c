
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ChainOffset; int MsgFlags; int MsgContext; int Function; } ;
typedef TYPE_1__ MSG_REQUEST_HEADER ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(MSG_REQUEST_HEADER *VAR_0)
{

 FUNC_1("%s @ %p\n", FUNC_0(VAR_0->Function), VAR_0);
 FUNC_1("\tChain Offset  0x%02x\n", VAR_0->ChainOffset);
 FUNC_1("\tMsgFlags      0x%02x\n", VAR_0->MsgFlags);
 FUNC_1("\tMsgContext    0x%08x\n", VAR_0->MsgContext);
}
