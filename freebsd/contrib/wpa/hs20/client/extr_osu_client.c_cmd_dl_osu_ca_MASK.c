
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int xml; } ;


 int VAR_0 ;
 int FUNC_0 (struct hs20_osu_client*,int *,char const*) ;
 int * FUNC_1 (int ,int *,char*) ;
 int * FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct hs20_osu_client *VAR_1, const char *VAR_2,
    const char *VAR_3)
{
 xml_node_t *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_1->xml, VAR_2);
 if (VAR_4 == ((void*)0)) {
  FUNC_3(VAR_0, "Could not read or parse '%s'", VAR_2);
  return -1;
 }

 VAR_5 = FUNC_1(VAR_1->xml, VAR_4,
         "SubscriptionUpdate/TrustRoot");
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_0, "No SubscriptionUpdate/TrustRoot/CertURL found from PPS");
  FUNC_4(VAR_1->xml, VAR_4);
  return -1;
 }

 VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_3);
 FUNC_4(VAR_1->xml, VAR_4);

 return VAR_6;
}
