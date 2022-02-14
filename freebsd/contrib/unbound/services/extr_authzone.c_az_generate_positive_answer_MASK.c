
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {scalar_t__ type; } ;
struct auth_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_rrset*,int) ;
 int FUNC_1 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_2(struct auth_zone* VAR_3, struct regional* VAR_4,
 struct dns_msg* VAR_5, struct auth_data* VAR_6, struct auth_rrset* VAR_7)
{
 if(!FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)) return 0;

 if(VAR_7->type == VAR_0) {
  if(!FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7, 2))
   return 0;
 } else if(VAR_7->type == VAR_2) {
  if(!FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7, 6))
   return 0;
 } else if(VAR_7->type == VAR_1) {
  if(!FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7, 0))
   return 0;
 }
 return 1;
}
