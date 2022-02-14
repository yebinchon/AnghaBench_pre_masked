
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 char const* FUNC_0 (int) ;
 int FUNC_1 (struct hs20_osu_client*,int *,int) ;
 int * FUNC_2 (int ,int *,int *,char*) ;
 int FUNC_3 (int ,int *,int *,char*,char const*) ;

__attribute__((used)) static xml_node_t * FUNC_4(struct hs20_osu_client *VAR_0, xml_node_t *VAR_1,
          int VAR_2, int VAR_3, int VAR_4,
          const char *VAR_5, int VAR_6, const char *VAR_7)
{
 xml_node_t *VAR_8;

 VAR_8 = FUNC_2(VAR_0->xml, VAR_1, ((void*)0), "Status");
 if (VAR_8 == ((void*)0))
  return ((void*)0);
 FUNC_1(VAR_0, VAR_8, VAR_4);
 FUNC_3(VAR_0->xml, VAR_8, ((void*)0), "MsgRef", FUNC_0(VAR_2));
 if (VAR_3)
  FUNC_3(VAR_0->xml, VAR_8, ((void*)0), "CmdRef",
         FUNC_0(VAR_3));
 FUNC_3(VAR_0->xml, VAR_8, ((void*)0), "Cmd", VAR_5);
 FUNC_3(VAR_0->xml, VAR_8, ((void*)0), "Data", FUNC_0(VAR_6));
 if (VAR_7) {
  FUNC_3(VAR_0->xml, VAR_8, ((void*)0), "TargetRef",
         VAR_7);
 }

 return VAR_8;
}
