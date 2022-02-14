
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int *,int ,char const*,char*) ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ,int *) ;
 char* FUNC_4 (int ,int *) ;

__attribute__((used)) static char * FUNC_5(struct hs20_osu_client *VAR_1, const char *VAR_2,
       const char *VAR_3)
{
 xml_node_t *VAR_4, *VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_1(VAR_1->xml, VAR_3);
 if (!VAR_4)
  return ((void*)0);
 VAR_5 = FUNC_0(VAR_1->xml, VAR_4, 0, VAR_2, "syncml:dmddf1.2");
 FUNC_3(VAR_1->xml, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_1->xml, VAR_5);
 FUNC_3(VAR_1->xml, VAR_5);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 FUNC_2(VAR_0, "MgmtTree: %s", VAR_6);

 return VAR_6;
}
