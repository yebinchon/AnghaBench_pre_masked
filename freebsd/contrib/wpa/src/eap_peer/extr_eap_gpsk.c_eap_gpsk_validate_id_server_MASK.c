
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_gpsk_data {size_t id_server_len; int const* id_server; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*,size_t) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static const u8 * FUNC_4(struct eap_gpsk_data *VAR_2,
           const u8 *VAR_3, const u8 *VAR_4)
{
 size_t VAR_5;

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (VAR_4 - VAR_3 < (int) 2) {
  FUNC_3(VAR_0, "EAP-GPSK: Message too short for "
      "length(ID_Server)");
  return ((void*)0);
 }

 VAR_5 = FUNC_0(VAR_3);
 VAR_3 += 2;

 if (VAR_4 - VAR_3 < (int) VAR_5) {
  FUNC_3(VAR_0, "EAP-GPSK: Message too short for "
      "ID_Server");
  return ((void*)0);
 }

 if (VAR_5 != VAR_2->id_server_len ||
     FUNC_1(VAR_3, VAR_2->id_server, VAR_5) != 0) {
  FUNC_3(VAR_1, "EAP-GPSK: ID_Server did not match with "
      "the one used in GPSK-1");
  FUNC_2(VAR_0, "EAP-GPSK: ID_Server in GPSK-1",
      VAR_2->id_server, VAR_2->id_server_len);
  FUNC_2(VAR_0, "EAP-GPSK: ID_Server in GPSK-3",
      VAR_3, VAR_5);
  return ((void*)0);
 }

 VAR_3 += VAR_5;

 return VAR_3;
}
