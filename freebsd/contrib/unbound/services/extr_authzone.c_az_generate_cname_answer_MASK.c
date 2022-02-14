
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;
struct query_info {int qtype; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {int data; } ;
struct auth_data {int dummy; } ;


 int FUNC_0 (struct auth_zone*,int ,struct regional*,struct dns_msg*,int ) ;
 int FUNC_1 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_2(struct auth_zone* VAR_0, struct query_info* VAR_1,
 struct regional* VAR_2, struct dns_msg* VAR_3,
 struct auth_data* VAR_4, struct auth_rrset* VAR_5)
{
 if(!FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5)) return 0;
 if(!VAR_5) return 1;
 if(!FUNC_0(VAR_0, VAR_1->qtype, VAR_2, VAR_3, VAR_5->data))
  return 0;
 return 1;
}
