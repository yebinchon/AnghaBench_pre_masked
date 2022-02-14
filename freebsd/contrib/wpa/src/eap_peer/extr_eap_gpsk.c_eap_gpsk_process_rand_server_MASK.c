
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_gpsk_data {int rand_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static const u8 * FUNC_3(struct eap_gpsk_data *VAR_2,
            const u8 *VAR_3, const u8 *VAR_4)
{
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (VAR_4 - VAR_3 < VAR_0) {
  FUNC_2(VAR_1, "EAP-GPSK: RAND_Server overflow");
  return ((void*)0);
 }
 FUNC_0(VAR_2->rand_server, VAR_3, VAR_0);
 FUNC_1(VAR_1, "EAP-GPSK: RAND_Server",
      VAR_2->rand_server, VAR_0);
 VAR_3 += VAR_0;

 return VAR_3;
}
