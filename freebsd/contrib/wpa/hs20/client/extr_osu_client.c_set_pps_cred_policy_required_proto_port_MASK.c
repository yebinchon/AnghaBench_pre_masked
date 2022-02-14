
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int ifname; int xml; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,size_t,char*,char*,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int,char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 char* FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct hs20_osu_client *VAR_1,
          int VAR_2, xml_node_t *VAR_3)
{
 xml_node_t *VAR_4;
 char *VAR_5, *VAR_6;
 char *VAR_7;
 size_t VAR_8;

 VAR_4 = FUNC_0(VAR_1->xml, VAR_3, "IPProtocol");
 if (VAR_4 == ((void*)0)) {
  FUNC_6(VAR_0, "Ignore RequiredProtoPortTuple without mandatory IPProtocol node");
  return;
 }

 VAR_5 = FUNC_7(VAR_1->xml, VAR_4);
 if (VAR_5 == ((void*)0))
  return;

 FUNC_6(VAR_0, "- Policy/RequiredProtoPortTuple/<X+>/IPProtocol = %s",
     VAR_5);

 VAR_4 = FUNC_0(VAR_1->xml, VAR_3, "PortNumber");
 VAR_6 = VAR_4 ? FUNC_7(VAR_1->xml, VAR_4) : ((void*)0);
 if (VAR_6) {
  FUNC_6(VAR_0, "- Policy/RequiredProtoPortTuple/<X+>/PortNumber = %s",
      VAR_6);
  VAR_8 = FUNC_4(VAR_5) + FUNC_4(VAR_6) + 10;
  VAR_7 = FUNC_2(VAR_8);
  if (VAR_7)
   FUNC_3(VAR_7, VAR_8, "%s:%s", VAR_5, VAR_6);
  FUNC_8(VAR_1->xml, VAR_6);
 } else {
  VAR_8 = FUNC_4(VAR_5) + 10;
  VAR_7 = FUNC_2(VAR_8);
  if (VAR_7)
   FUNC_3(VAR_7, VAR_8, "%s", VAR_5);
 }

 FUNC_8(VAR_1->xml, VAR_5);

 if (VAR_7 == ((void*)0))
  return;

 if (FUNC_5(VAR_1->ifname, VAR_2, "req_conn_capab", VAR_7) < 0)
  FUNC_6(VAR_0, "Could not set req_conn_capab");

 FUNC_1(VAR_7);
}
