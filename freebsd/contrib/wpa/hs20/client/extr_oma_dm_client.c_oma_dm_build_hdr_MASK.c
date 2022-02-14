
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
typedef int xml_namespace_t ;
struct hs20_osu_client {char const* devid; int xml; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (struct hs20_osu_client*,int *,char*,char const*) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (int ,int *,int *,char*) ;
 int * FUNC_4 (int ,char*,int *,int **,char*) ;
 int FUNC_5 (int ,int *,int *,char*,char*) ;

__attribute__((used)) static xml_node_t * FUNC_6(struct hs20_osu_client *VAR_1,
         const char *VAR_2, int VAR_3)
{
 xml_node_t *VAR_4, *VAR_5;
 xml_namespace_t *VAR_6;

 if (!VAR_1->devid) {
  FUNC_2(VAR_0,
      "DevId from devinfo.xml is not available - cannot use OMA DM");
  return ((void*)0);
 }

 VAR_4 = FUNC_4(VAR_1->xml, "SYNCML:SYNCML1.2", ((void*)0), &VAR_6,
          "SyncML");

 VAR_5 = FUNC_3(VAR_1->xml, VAR_4, ((void*)0), "SyncHdr");
 FUNC_5(VAR_1->xml, VAR_5, ((void*)0), "VerDTD", "1.2");
 FUNC_5(VAR_1->xml, VAR_5, ((void*)0), "VerProto", "DM/1.2");
 FUNC_5(VAR_1->xml, VAR_5, ((void*)0), "SessionID", "1");
 FUNC_5(VAR_1->xml, VAR_5, ((void*)0), "MsgID", FUNC_0(VAR_3));

 FUNC_1(VAR_1, VAR_5, "Target", VAR_2);
 FUNC_1(VAR_1, VAR_5, "Source", VAR_1->devid);

 return VAR_4;
}
