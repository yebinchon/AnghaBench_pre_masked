
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xml_node_t ;
struct hs20_osu_client {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct hs20_osu_client*,char const*,int,int ) ;
 int FUNC_1 (struct hs20_osu_client*,char*,int *) ;

__attribute__((used)) static xml_node_t * FUNC_2(struct hs20_osu_client *VAR_1,
         const char *VAR_2, int VAR_3)
{
 xml_node_t *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3,
    VAR_0);
 if (VAR_4)
  FUNC_1(VAR_1, "OMA-DM Package 1 (sub prov)", VAR_4);

 return VAR_4;
}
