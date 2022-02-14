
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*,char*) ;
 char* FUNC_2 (int ,int *) ;

void FUNC_3(struct hs20_osu_client *VAR_1, const char *VAR_2,
       xml_node_t *VAR_3)
{
 char *VAR_4 = FUNC_2(VAR_1->xml, VAR_3);
 FUNC_1(VAR_0, "[hs20] %s: '%s'", VAR_2, VAR_4);
 FUNC_0(VAR_4);
}
