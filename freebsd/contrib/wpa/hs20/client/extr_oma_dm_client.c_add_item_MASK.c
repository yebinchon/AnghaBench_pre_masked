
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int FUNC_0 (struct hs20_osu_client*,int *,char*,char const*) ;
 int * FUNC_1 (int ,int *,int *,char*) ;
 int FUNC_2 (int ,int *,int *,char*,char const*) ;
 int FUNC_3 (int ,int *,char*,char*,char*) ;

__attribute__((used)) static void FUNC_4(struct hs20_osu_client *VAR_0, xml_node_t *VAR_1,
       const char *VAR_2, const char *VAR_3)
{
 xml_node_t *VAR_4, *VAR_5;

 VAR_4 = FUNC_1(VAR_0->xml, VAR_1, ((void*)0), "Item");
 FUNC_0(VAR_0, VAR_4, "Source", VAR_2);
 VAR_5 = FUNC_1(VAR_0->xml, VAR_4, ((void*)0), "Meta");
 FUNC_3(VAR_0->xml, VAR_5, "syncml:metinf", "Format",
    "Chr");
 FUNC_3(VAR_0->xml, VAR_5, "syncml:metinf", "Type",
    "text/plain");
 FUNC_2(VAR_0->xml, VAR_4, ((void*)0), "Data", VAR_3);
}
