
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
 int * FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct hs20_osu_client*,char*,...) ;
 char* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(struct hs20_osu_client *VAR_4, xml_node_t *VAR_5)
{
 xml_node_t *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_4->xml, VAR_5, "Item/Data");
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_3, "No Data node found");
  return VAR_0;
 }

 VAR_7 = FUNC_4(VAR_4->xml, VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_3, "Invalid data");
  return VAR_0;
 }
 FUNC_2(VAR_3, "Data: %s", VAR_7);
 FUNC_2(VAR_3, "Launch browser to URI '%s'", VAR_7);
 FUNC_3(VAR_4, "Launch browser to URI '%s'", VAR_7);
 VAR_8 = FUNC_1(VAR_7);
 FUNC_5(VAR_4->xml, VAR_7);
 if (VAR_8 > 0) {
  FUNC_2(VAR_3, "User response in browser completed successfully");
  FUNC_3(VAR_4, "User response in browser completed successfully");
  return VAR_2;
 } else {
  FUNC_2(VAR_3, "Failed to receive user response");
  FUNC_3(VAR_4, "Failed to receive user response");
  return VAR_1;
 }
}
