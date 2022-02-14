
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int * FUNC_0 (int ,int *,int *,char const*) ;
 int FUNC_1 (int ,int *,int *,char*,char const*) ;

__attribute__((used)) static void FUNC_2(struct hs20_osu_client *VAR_0, xml_node_t *VAR_1,
         const char *VAR_2, const char *VAR_3)
{
 xml_node_t *VAR_4;

 VAR_4 = FUNC_0(VAR_0->xml, VAR_1, ((void*)0), VAR_2);
 if (VAR_4 == ((void*)0))
  return;
 FUNC_1(VAR_0->xml, VAR_4, ((void*)0), "LocURI", VAR_3);
}
