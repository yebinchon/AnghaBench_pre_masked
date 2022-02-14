
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int dummy; } ;
typedef int fname ;


 int VAR_0 ;
 int FUNC_0 (struct hs20_osu_client*,char*,int *) ;
 scalar_t__ FUNC_1 (struct hs20_osu_client*,int *,char*,int) ;
 int FUNC_2 (struct hs20_osu_client*,char const*,char*,char*) ;
 int FUNC_3 (struct hs20_osu_client*,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct hs20_osu_client *VAR_1,
        const char *VAR_2,
        xml_node_t *VAR_3)
{
 int VAR_4;
 char VAR_5[300];

 FUNC_0(VAR_1, "addMO", VAR_3);

 FUNC_4(VAR_0, "Subscription registration completed");

 if (FUNC_1(VAR_1, VAR_3, VAR_5, sizeof(VAR_5)) < 0) {
  FUNC_4(VAR_0, "Could not add MO");
  VAR_4 = FUNC_2(
   VAR_1, VAR_2,
   "Error occurred",
   "MO addition or update failed");
  return 0;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2, "OK", ((void*)0));
 if (VAR_4 == 0)
  FUNC_3(VAR_1, VAR_5);

 return 0;
}
