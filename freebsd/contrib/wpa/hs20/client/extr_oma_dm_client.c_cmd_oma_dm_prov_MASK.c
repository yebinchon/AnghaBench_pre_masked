
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {scalar_t__ pps_cred_set; int xml; } ;


 int VAR_0 ;
 int * FUNC_0 (struct hs20_osu_client*,char const*,int) ;
 int * FUNC_1 (struct hs20_osu_client*,char const*,int *,int,char**,int *,int *) ;
 int * FUNC_2 (struct hs20_osu_client*,char*,int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct hs20_osu_client*,char*) ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct hs20_osu_client *VAR_1, const char *VAR_2)
{
 xml_node_t *VAR_3, *VAR_4;
 char *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 if (VAR_2 == ((void*)0)) {
  FUNC_4(VAR_0, "Invalid prov command (missing URL)");
  return -1;
 }

 FUNC_4(VAR_0, "OMA-DM credential provisioning requested");
 FUNC_5(VAR_1, "OMA-DM credential provisioning");

 VAR_6++;
 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_6);
 if (VAR_3 == ((void*)0))
  return -1;

 while (VAR_3) {
  VAR_4 = FUNC_2(VAR_1, VAR_5 ? VAR_5 : VAR_2,
     VAR_3, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
  if (VAR_4 == ((void*)0))
   return -1;

  VAR_6++;
  VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_6, &VAR_5,
     ((void*)0), ((void*)0));
  FUNC_6(VAR_1->xml, VAR_4);
 }

 FUNC_3(VAR_5);

 return VAR_1->pps_cred_set ? 0 : -1;
}
