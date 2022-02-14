
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hs20_osu_client*,char*,int *) ;
 int * FUNC_1 (int ,int *,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (struct hs20_osu_client*,int *) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct hs20_osu_client*,char*) ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,char*) ;
 char* FUNC_8 (int ,int *) ;
 char* FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static int FUNC_11(struct hs20_osu_client *VAR_4, xml_node_t *VAR_5)
{
 xml_node_t *VAR_6, *VAR_7;
 char *VAR_8;
 const char *VAR_9;
 int VAR_10;

 FUNC_4(VAR_3, "Client certificate enrollment");
 FUNC_5(VAR_4, "Client certificate enrollment");

 VAR_6 = FUNC_1(VAR_4->xml, VAR_5, "Item/Data");
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_3, "No Data node found");
  return VAR_0;
 }

 VAR_8 = FUNC_9(VAR_4->xml, VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_3, "Invalid data");
  return VAR_0;
 }
 FUNC_4(VAR_3, "Data: %s", VAR_8);
 VAR_7 = FUNC_7(VAR_4->xml, VAR_8);
 FUNC_10(VAR_4->xml, VAR_8);

 if (VAR_7 == ((void*)0)) {
  FUNC_4(VAR_3, "Could not parse Item/Data node contents");
  return VAR_0;
 }

 FUNC_0(VAR_4, "OMA-DM getCertificate", VAR_7);

 VAR_9 = FUNC_8(VAR_4->xml, VAR_7);
 if (VAR_9 == ((void*)0) || FUNC_2(VAR_9, "getCertificate") != 0) {
  FUNC_4(VAR_3, "Unexpected getCertificate node name '%s'",
      VAR_9);
  return VAR_0;
 }

 VAR_10 = FUNC_3(VAR_4, VAR_7);

 FUNC_6(VAR_4->xml, VAR_7);

 return VAR_10 == 0 ? VAR_2 : VAR_1;
}
