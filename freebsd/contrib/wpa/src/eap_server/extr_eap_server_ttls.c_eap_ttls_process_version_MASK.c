
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ttls_data {int ttls_version; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct eap_sm *VAR_1, void *VAR_2,
        int VAR_3)
{
 struct eap_ttls_data *VAR_4 = VAR_2;
 if (VAR_3 < VAR_4->ttls_version) {
  FUNC_0(VAR_0, "EAP-TTLS: peer ver=%d, own ver=%d; "
      "use version %d",
      VAR_3, VAR_4->ttls_version, VAR_3);
  VAR_4->ttls_version = VAR_3;
 }

 return 0;
}
