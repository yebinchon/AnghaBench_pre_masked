
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regional {int dummy; } ;
struct TYPE_4__ {int qname_len; int qname; } ;
struct dns_msg {TYPE_2__ qinfo; TYPE_1__* rep; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {int namelen; int name; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_rrset*,int ) ;
 int FUNC_1 (struct auth_zone*,struct regional*,struct dns_msg*,int ,int ,int ,int ,int,int,int ,int ) ;
 struct auth_rrset* FUNC_2 (struct auth_data*,int ) ;
 int FUNC_3 (struct auth_data*) ;
 int FUNC_4 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_5(struct auth_zone* VAR_3, struct regional* VAR_4,
 struct dns_msg* VAR_5, struct auth_data* VAR_6, struct auth_rrset* VAR_7)
{
 struct auth_rrset* VAR_8, *VAR_9;

 FUNC_3(VAR_6);
 VAR_5->rep->flags &= ~VAR_0;
 if(!FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7)) return 0;

 if((VAR_8=FUNC_2(VAR_6, VAR_1))!=((void*)0)) {
  if(!FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8)) return 0;
 } else {

  if((VAR_9=FUNC_2(VAR_6, VAR_2))!=((void*)0)) {
   if(!FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_9))
    return 0;
  } else {
   if(!FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6->name,
    VAR_6->namelen, VAR_5->qinfo.qname,
    VAR_5->qinfo.qname_len, 1, 1, 0, 0))
    return 0;
  }
 }

 if(!FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7, 0)) return 0;
 return 1;
}
