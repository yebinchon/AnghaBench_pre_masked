
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int FUNC_0 (struct hs20_osu_client*,int *,int,int ) ;
 int FUNC_1 (struct hs20_osu_client*,int *,int) ;
 char* FUNC_2 (struct hs20_osu_client*,int *,char*) ;
 int FUNC_3 (struct hs20_osu_client*,int *,int,char const*,char*) ;
 int * FUNC_4 (struct hs20_osu_client*,char const*,int) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (int ,int *,int *,char*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static xml_node_t * FUNC_8(struct hs20_osu_client *VAR_1,
       const char *VAR_2, int VAR_3, const char *VAR_4)
{
 xml_node_t *VAR_5, *VAR_6;
 char *VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_6 = FUNC_6(VAR_1->xml, VAR_5, ((void*)0), "SyncBody");
 if (VAR_6 == ((void*)0)) {
  FUNC_7(VAR_1->xml, VAR_5);
  return ((void*)0);
 }

 VAR_8++;
 FUNC_0(VAR_1, VAR_6, VAR_8, VAR_0);

 VAR_7 = FUNC_2(VAR_1, ((void*)0), "devdetail.xml");
 if (VAR_7 == ((void*)0)) {
  FUNC_7(VAR_1->xml, VAR_5);
  return ((void*)0);
 }
 VAR_8++;
 FUNC_3(VAR_1, VAR_6, VAR_8, VAR_4, VAR_7);
 FUNC_5(VAR_7);

 VAR_8++;
 FUNC_1(VAR_1, VAR_6, VAR_8);

 FUNC_6(VAR_1->xml, VAR_6, ((void*)0), "Final");

 return VAR_5;
}
