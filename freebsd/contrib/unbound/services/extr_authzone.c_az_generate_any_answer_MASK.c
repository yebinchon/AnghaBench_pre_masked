
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {struct auth_rrset* rrsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct auth_rrset* FUNC_0 (struct auth_data*,int ) ;
 int FUNC_1 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_2(struct auth_zone* VAR_4, struct regional* VAR_5,
 struct dns_msg* VAR_6, struct auth_data* VAR_7)
{
 struct auth_rrset* VAR_8;
 int VAR_9 = 0;

 if((VAR_8=FUNC_0(VAR_7, VAR_3)) != ((void*)0)) {
  if(!FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8)) return 0;
  VAR_9++;
 }
 if((VAR_8=FUNC_0(VAR_7, VAR_2)) != ((void*)0)) {
  if(!FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8)) return 0;
  VAR_9++;
 }
 if((VAR_8=FUNC_0(VAR_7, VAR_0)) != ((void*)0)) {
  if(!FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8)) return 0;
  VAR_9++;
 }
 if((VAR_8=FUNC_0(VAR_7, VAR_1)) != ((void*)0)) {
  if(!FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8)) return 0;
  VAR_9++;
 }
 if(VAR_9 == 0 && VAR_7 && VAR_7->rrsets) {
  if(!FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7,
   VAR_7->rrsets)) return 0;
 }
 return 1;
}
