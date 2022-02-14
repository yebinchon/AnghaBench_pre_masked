
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eapol_sm {int eap; } ;


 int VAR_0 ;
 int const* FUNC_0 (int ,size_t*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

const u8 * FUNC_3(struct eapol_sm *VAR_1, size_t *VAR_2)
{
 if (VAR_1 == ((void*)0) || !FUNC_1(VAR_1->eap)) {
  FUNC_2(VAR_0, "EAPOL: EAP Session-Id not available");
  return ((void*)0);
 }
 return FUNC_0(VAR_1->eap, VAR_2);
}
