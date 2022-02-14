
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_teap_data {int teap_version; int peer_version; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct eap_sm *VAR_2, void *VAR_3,
        int VAR_4)
{
 struct eap_teap_data *VAR_5 = VAR_3;

 if (VAR_4 < 1) {

  FUNC_0(VAR_1,
      "EAP-TEAP: Peer used unknown TEAP version %u",
      VAR_4);
  return -1;
 }

 if (VAR_4 < VAR_5->teap_version) {
  FUNC_0(VAR_0, "EAP-TEAP: peer ver=%u, own ver=%u; "
      "use version %u",
      VAR_4, VAR_5->teap_version, VAR_4);
  VAR_5->teap_version = VAR_4;
 }

 VAR_5->peer_version = VAR_4;

 return 0;
}
