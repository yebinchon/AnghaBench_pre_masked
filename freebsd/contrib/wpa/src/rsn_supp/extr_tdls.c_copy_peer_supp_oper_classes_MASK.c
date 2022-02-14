
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_tdls_peer {scalar_t__ supp_oper_classes_len; int * supp_oper_classes; } ;
struct wpa_eapol_ie_parse {scalar_t__ supp_oper_classes_len; int supp_oper_classes; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*,int *,scalar_t__) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(const struct wpa_eapol_ie_parse *VAR_1,
           struct wpa_tdls_peer *VAR_2)
{
 if (!VAR_1->supp_oper_classes) {
  FUNC_4(VAR_0, "TDLS: No supported operating classes received");
  return 0;
 }

 if (!VAR_2->supp_oper_classes ||
     VAR_2->supp_oper_classes_len < VAR_1->supp_oper_classes_len) {
  FUNC_0(VAR_2->supp_oper_classes);
  VAR_2->supp_oper_classes = FUNC_2(VAR_1->supp_oper_classes_len);
  if (VAR_2->supp_oper_classes == ((void*)0))
   return -1;
 }

 VAR_2->supp_oper_classes_len = VAR_1->supp_oper_classes_len;
 FUNC_1(VAR_2->supp_oper_classes, VAR_1->supp_oper_classes,
    VAR_2->supp_oper_classes_len);
 FUNC_3(VAR_0, "TDLS: Peer Supported Operating Classes",
      (u8 *) VAR_2->supp_oper_classes,
      VAR_2->supp_oper_classes_len);
 return 0;
}
