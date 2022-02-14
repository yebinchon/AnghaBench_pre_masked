
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*,int *) ;
 int * FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hs20_osu_client *VAR_1, const char *VAR_2,
     const char *VAR_3)
{
 xml_node_t *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_1->xml, VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_0, "Could not read or parse '%s'", VAR_2);
  return;
 }

 VAR_5 = FUNC_2(VAR_1->xml, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_1->xml, VAR_3, VAR_5);
  FUNC_4(VAR_1->xml, VAR_5);
 }

 FUNC_4(VAR_1->xml, VAR_4);
}
