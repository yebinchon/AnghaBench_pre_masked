
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int FUNC_0 (struct hs20_osu_client*,int *,char const*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hs20_osu_client*,int *,int) ;
 int * FUNC_3 (int ,int *,int *,char*) ;
 int FUNC_4 (int ,int *,int *,char*,int ) ;

__attribute__((used)) static xml_node_t * FUNC_5(struct hs20_osu_client *VAR_0, xml_node_t *VAR_1,
    int VAR_2, int VAR_3, int VAR_4,
    const char *VAR_5, const char *VAR_6)
{
 xml_node_t *VAR_7;

 VAR_7 = FUNC_3(VAR_0->xml, VAR_1, ((void*)0), "Results");
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 FUNC_2(VAR_0, VAR_7, VAR_4);
 FUNC_4(VAR_0->xml, VAR_7, ((void*)0), "MsgRef", FUNC_1(VAR_2));
 FUNC_4(VAR_0->xml, VAR_7, ((void*)0), "CmdRef", FUNC_1(VAR_3));
 FUNC_0(VAR_0, VAR_7, VAR_5, VAR_6);

 return VAR_7;
}
