
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int dummy; } ;
struct eap_sim_data {size_t num_chal; int * rand; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_sm*,char*) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct eap_sm *VAR_2, struct eap_sim_data *VAR_3)
{
 char VAR_4[200], *VAR_5, *VAR_6;
 size_t VAR_7;

 FUNC_2(VAR_1, "EAP-SIM: Use external SIM processing");
 VAR_5 = VAR_4;
 VAR_6 = VAR_5 + sizeof(VAR_4);
 VAR_5 += FUNC_1(VAR_5, VAR_6 - VAR_5, "GSM-AUTH");
 for (VAR_7 = 0; VAR_7 < VAR_3->num_chal; VAR_7++) {
  VAR_5 += FUNC_1(VAR_5, VAR_6 - VAR_5, ":");
  VAR_5 += FUNC_3(VAR_5, VAR_6 - VAR_5, VAR_3->rand[VAR_7],
     VAR_0);
 }

 FUNC_0(VAR_2, VAR_4);
 return 1;
}
