
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct hs20_osu_client*,int *,int,int ) ;
 int FUNC_1 (struct hs20_osu_client*,int *,char*,int ) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int * FUNC_3 (int ,int *,int *,char*) ;
 int FUNC_4 (int ,int *,int *,char*,char const*) ;
 int FUNC_5 (int ,int *,char*,char*,char*) ;

__attribute__((used)) static void FUNC_6(struct hs20_osu_client *VAR_2,
       xml_node_t *VAR_3,
       int VAR_4, const char *VAR_5,
       const char *VAR_6)
{
 xml_node_t *VAR_7, *VAR_8;
 char VAR_9[200];

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0);

 VAR_8 = FUNC_3(VAR_2->xml, VAR_7, ((void*)0), "Item");
 FUNC_1(VAR_2, VAR_8, "Source", VAR_1);
 VAR_7 = FUNC_3(VAR_2->xml, VAR_8, ((void*)0), "Meta");
 FUNC_2(VAR_9, sizeof(VAR_9), "Reversed-Domain-Name: %s", VAR_5);
 FUNC_5(VAR_2->xml, VAR_7, "syncml:metinf", "Type", VAR_9);
 FUNC_5(VAR_2->xml, VAR_7, "syncml:metinf", "Format",
    "xml");
 FUNC_4(VAR_2->xml, VAR_8, ((void*)0), "Data", VAR_6);
}
