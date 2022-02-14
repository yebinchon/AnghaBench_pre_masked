
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int * FUNC_0 (struct eap_sm*,size_t*) ;
 int * FUNC_1 (struct eap_sm*,size_t*) ;
 int FUNC_2 (struct eap_sm*) ;
 int FUNC_3 (struct eap_sm*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct eap_sm *VAR_1)
{
 size_t VAR_2;

 if (FUNC_0(VAR_1, &VAR_2) == ((void*)0)) {
  FUNC_4(VAR_0, "EAP-MSCHAPV2: Identity not configured");
  FUNC_2(VAR_1);
  return -1;
 }

 if (FUNC_1(VAR_1, &VAR_2) == ((void*)0)) {
  FUNC_4(VAR_0, "EAP-MSCHAPV2: Password not configured");
  FUNC_3(VAR_1);
  return -1;
 }

 return 0;
}
