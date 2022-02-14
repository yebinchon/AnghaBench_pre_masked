
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regional {int dummy; } ;
struct dns_msg {TYPE_1__* rep; } ;
struct auth_zone {int dclass; } ;
struct auth_rrset {int type; } ;
struct auth_data {int namelen; int name; } ;
struct TYPE_2__ {size_t rrset_count; int ar_numrrsets; int * rrsets; } ;


 int FUNC_0 (struct auth_zone*,struct auth_data*,struct auth_rrset*,struct regional*,int ) ;
 int FUNC_1 (struct regional*,struct dns_msg*) ;
 scalar_t__ FUNC_2 (struct dns_msg*,int ,int ,int ,int ) ;
 int FUNC_3 (struct dns_msg*) ;

__attribute__((used)) static int
FUNC_4(struct auth_zone* VAR_0, struct regional* VAR_1,
 struct dns_msg* VAR_2, struct auth_data* VAR_3, struct auth_rrset* VAR_4)
{
 if(!VAR_4 || !VAR_3)
  return 1;
 if(FUNC_2(VAR_2, VAR_3->name, VAR_3->namelen, VAR_4->type,
  VAR_0->dclass))
  return 1;

 if(!FUNC_1(VAR_1, VAR_2))
  return 0;

 if(!(VAR_2->rep->rrsets[VAR_2->rep->rrset_count] =
  FUNC_0(VAR_0, VAR_3, VAR_4, VAR_1, 0)))
  return 0;
 VAR_2->rep->rrset_count++;
 VAR_2->rep->ar_numrrsets++;
 FUNC_3(VAR_2);
 return 1;
}
