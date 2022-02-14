
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_data {int dummy; } ;
typedef enum eap_sim_db_method { ____Placeholder_eap_sim_db_method } eap_sim_db_method ;


 char VAR_0 ;
 char VAR_1 ;



 char VAR_2 ;
 char* FUNC_0 (struct eap_sim_db_data*,char) ;

char * FUNC_1(struct eap_sim_db_data *VAR_3,
         enum eap_sim_db_method VAR_4)
{
 char VAR_5 = VAR_2;

 switch (VAR_4) {
 case 128:
  VAR_5 = VAR_2;
  break;
 case 130:
  VAR_5 = VAR_1;
  break;
 case 129:
  VAR_5 = VAR_0;
  break;
 }

 return FUNC_0(VAR_3, VAR_5);
}
