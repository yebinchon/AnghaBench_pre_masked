
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_message {int dialog_token; } ;


 int VAR_0 ;
 int FUNC_0 (struct p2p_message*,int ,int) ;
 int FUNC_1 (int const*,size_t,struct p2p_message*) ;
 int FUNC_2 (int ,char*,...) ;

int FUNC_3(const u8 *VAR_1, size_t VAR_2, struct p2p_message *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));
 FUNC_2(VAR_0, "P2P: Parsing the received message");
 if (VAR_2 < 1) {
  FUNC_2(VAR_0, "P2P: No Dialog Token in the message");
  return -1;
 }
 VAR_3->dialog_token = VAR_1[0];
 FUNC_2(VAR_0, "P2P: * Dialog Token: %d", VAR_3->dialog_token);

 return FUNC_1(VAR_1 + 1, VAR_2 - 1, VAR_3);
}
