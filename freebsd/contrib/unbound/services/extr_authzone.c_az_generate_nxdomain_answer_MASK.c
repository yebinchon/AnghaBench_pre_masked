
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regional {int dummy; } ;
struct TYPE_3__ {int qname_len; int qname; } ;
struct dns_msg {TYPE_1__ qinfo; TYPE_2__* rep; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {int namelen; int name; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct auth_zone*,struct regional*,struct dns_msg*) ;
 int FUNC_1 (struct auth_zone*,struct regional*,struct dns_msg*,int ,int ,int ,int ,int ,int,int,int) ;
 struct auth_rrset* FUNC_2 (struct auth_zone*,struct auth_data**) ;
 int FUNC_3 (struct auth_zone*,struct regional*,struct dns_msg*,int ,int ) ;
 int FUNC_4 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_5(struct auth_zone* VAR_1, struct regional* VAR_2,
 struct dns_msg* VAR_3, struct auth_data* VAR_4, struct auth_data* VAR_5)
{
 struct auth_rrset* VAR_6;
 VAR_3->rep->flags |= VAR_0;
 if(!FUNC_0(VAR_1, VAR_2, VAR_3)) return 0;
 if((VAR_6=FUNC_2(VAR_1, &VAR_5)) != ((void*)0)) {
  if(!FUNC_4(VAR_1, VAR_2, VAR_3, VAR_5, VAR_6)) return 0;
  if(VAR_4 && !FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4->name,
   VAR_4->namelen)) return 0;
 } else if(VAR_4) {
  if(!FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4->name,
   VAR_4->namelen, VAR_3->qinfo.qname,
   VAR_3->qinfo.qname_len, 0, 1, 1, 1))
   return 0;
 }
 return 1;
}
