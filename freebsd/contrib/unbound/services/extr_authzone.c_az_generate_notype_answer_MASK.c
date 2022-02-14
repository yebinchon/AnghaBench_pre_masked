
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regional {int dummy; } ;
struct TYPE_2__ {int qname_len; int qname; } ;
struct dns_msg {TYPE_1__ qinfo; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {int namelen; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct auth_zone*,struct regional*,struct dns_msg*) ;
 int FUNC_1 (struct auth_zone*,struct regional*,struct dns_msg*,int ,int ,int ,int ,int,int,int ,int ) ;
 struct auth_rrset* FUNC_2 (struct auth_data*,int ) ;
 int FUNC_3 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_4(struct auth_zone* VAR_1, struct regional* VAR_2,
 struct dns_msg* VAR_3, struct auth_data* VAR_4)
{
 struct auth_rrset* VAR_5;
 if(!FUNC_0(VAR_1, VAR_2, VAR_3)) return 0;

 if((VAR_5=FUNC_2(VAR_4, VAR_0))!=((void*)0)) {
  if(!FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5)) return 0;
 } else if(VAR_4) {

  if(!FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4->name,
   VAR_4->namelen, VAR_3->qinfo.qname,
   VAR_3->qinfo.qname_len, 1, 1, 0, 0))
   return 0;
 }
 return 1;
}
