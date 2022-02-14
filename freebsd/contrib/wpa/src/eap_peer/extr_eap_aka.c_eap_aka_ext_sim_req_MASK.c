
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_aka_data {int autn; int rand; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eap_sm*,char*) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct eap_sm *VAR_3, struct eap_aka_data *VAR_4)
{
 char VAR_5[200], *VAR_6, *VAR_7;

 FUNC_2(VAR_2, "EAP-AKA: Use external USIM processing");
 VAR_6 = VAR_5;
 VAR_7 = VAR_6 + sizeof(VAR_5);
 VAR_6 += FUNC_1(VAR_6, VAR_7 - VAR_6, "UMTS-AUTH");
 VAR_6 += FUNC_1(VAR_6, VAR_7 - VAR_6, ":");
 VAR_6 += FUNC_3(VAR_6, VAR_7 - VAR_6, VAR_4->rand, VAR_1);
 VAR_6 += FUNC_1(VAR_6, VAR_7 - VAR_6, ":");
 FUNC_3(VAR_6, VAR_7 - VAR_6, VAR_4->autn, VAR_0);

 FUNC_0(VAR_3, VAR_5);
 return 1;
}
