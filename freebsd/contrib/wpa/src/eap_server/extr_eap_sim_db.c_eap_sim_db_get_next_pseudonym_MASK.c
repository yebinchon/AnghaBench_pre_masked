
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_data {int dummy; } ;
typedef enum eap_sim_db_method { ____Placeholder_eap_sim_db_method } eap_sim_db_method ;


 char VAR_0 ;
 char VAR_1 ;



 char VAR_2 ;
 char VAR_3 ;
 char* FUNC_0 (struct eap_sim_db_data*,char) ;

char * FUNC_1(struct eap_sim_db_data *VAR_4,
         enum eap_sim_db_method VAR_5)
{
 char VAR_6 = VAR_3;

 switch (VAR_5) {
 case 128:
  VAR_6 = VAR_2;
  break;
 case 130:
  VAR_6 = VAR_1;
  break;
 case 129:
  VAR_6 = VAR_0;
  break;
 }

 return FUNC_0(VAR_4, VAR_6);
}
