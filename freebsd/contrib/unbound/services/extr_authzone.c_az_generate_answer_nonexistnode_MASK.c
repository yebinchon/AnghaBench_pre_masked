
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct query_info {int dummy; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {scalar_t__ type; } ;
struct auth_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct auth_zone*,struct query_info*,struct auth_data*) ;
 struct auth_data* FUNC_1 (struct auth_zone*,struct query_info*,struct auth_data*) ;
 int FUNC_2 (struct auth_zone*,struct query_info*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;
 int FUNC_3 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*) ;
 int FUNC_4 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_data*) ;
 int FUNC_5 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;
 int FUNC_6 (struct auth_zone*,struct query_info*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_data*,struct auth_data*) ;

__attribute__((used)) static int
FUNC_7(struct auth_zone* VAR_2, struct query_info* VAR_3,
 struct regional* VAR_4, struct dns_msg* VAR_5, struct auth_data* VAR_6,
 struct auth_rrset* VAR_7, struct auth_data* VAR_8)
{
 struct auth_data* VAR_9;



 if(VAR_6 && VAR_7 && VAR_7->type == VAR_1) {
  return FUNC_5(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
 }
 if(VAR_6 && VAR_7 && VAR_7->type == VAR_0) {
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
   VAR_7);
 }


 if(FUNC_0(VAR_2, VAR_3, VAR_8)) {
  return FUNC_3(VAR_2, VAR_4, VAR_5, VAR_8);
 }

 if((VAR_9=FUNC_1(VAR_2, VAR_3, VAR_6)) != ((void*)0)) {
  return FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_9, VAR_8);
 }

 return FUNC_4(VAR_2, VAR_4, VAR_5, VAR_6, VAR_8);
}
