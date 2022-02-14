
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_fast_data {int peer_version; int force_version; int fast_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,...) ;

__attribute__((used)) static int FUNC_1(struct eap_sm *VAR_2, void *VAR_3,
        int VAR_4)
{
 struct eap_fast_data *VAR_5 = VAR_3;

 VAR_5->peer_version = VAR_4;

 if (VAR_5->force_version >= 0 && VAR_4 != VAR_5->force_version) {
  FUNC_0(VAR_1, "EAP-FAST: peer did not select the forced"
      " version (forced=%d peer=%d) - reject",
      VAR_5->force_version, VAR_4);
  return -1;
 }

 if (VAR_4 < VAR_5->fast_version) {
  FUNC_0(VAR_0, "EAP-FAST: peer ver=%d, own ver=%d; "
      "use version %d",
      VAR_4, VAR_5->fast_version, VAR_4);
  VAR_5->fast_version = VAR_4;
 }

 return 0;
}
