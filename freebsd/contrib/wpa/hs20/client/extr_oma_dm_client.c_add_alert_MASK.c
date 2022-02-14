
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hs20_osu_client*,int *,int) ;
 int * FUNC_2 (int ,int *,int *,char*) ;
 int FUNC_3 (int ,int *,int *,char*,int ) ;

__attribute__((used)) static xml_node_t * FUNC_4(struct hs20_osu_client *VAR_0, xml_node_t *VAR_1,
         int VAR_2, int VAR_3)
{
 xml_node_t *VAR_4;

 VAR_4 = FUNC_2(VAR_0->xml, VAR_1, ((void*)0), "Alert");
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_0, VAR_4, VAR_2);
 FUNC_3(VAR_0->xml, VAR_4, ((void*)0), "Data", FUNC_0(VAR_3));

 return VAR_4;
}
