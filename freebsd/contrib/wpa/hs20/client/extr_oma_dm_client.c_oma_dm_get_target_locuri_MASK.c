
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int * FUNC_0 (int ,int *,char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static char * FUNC_4(struct hs20_osu_client *VAR_0,
           xml_node_t *VAR_1)
{
 xml_node_t *VAR_2;
 char *VAR_3, *VAR_4 = ((void*)0);

 VAR_2 = FUNC_0(VAR_0->xml, VAR_1, "Item/Target/LocURI");
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 VAR_3 = FUNC_2(VAR_0->xml, VAR_2);
 if (VAR_3)
  VAR_4 = FUNC_1(VAR_3);
 FUNC_3(VAR_0->xml, VAR_3);
 return VAR_4;
}
