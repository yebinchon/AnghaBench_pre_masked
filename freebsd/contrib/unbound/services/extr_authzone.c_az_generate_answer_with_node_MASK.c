
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct query_info {scalar_t__ qtype; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct auth_rrset* FUNC_0 (struct auth_data*,scalar_t__) ;
 int FUNC_1 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*) ;
 int FUNC_2 (struct auth_zone*,struct query_info*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;
 int FUNC_3 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*) ;
 int FUNC_4 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_5(struct auth_zone* VAR_2, struct query_info* VAR_3,
 struct regional* VAR_4, struct dns_msg* VAR_5, struct auth_data* VAR_6)
{
 struct auth_rrset* VAR_7;

 if((VAR_7=FUNC_0(VAR_6, VAR_3->qtype)) != ((void*)0)) {
  return FUNC_4(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
 }

 if((VAR_7=FUNC_0(VAR_6, VAR_1)) != ((void*)0)) {
  return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_7);
 }

 if(VAR_3->qtype == VAR_0) {
  return FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6);
 }

 return FUNC_3(VAR_2, VAR_4, VAR_5, VAR_6);
}
