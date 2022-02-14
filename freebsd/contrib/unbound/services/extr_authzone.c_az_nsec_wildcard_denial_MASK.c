
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wc ;
typedef int uint8_t ;
struct regional {int dummy; } ;
struct query_info {int* qname; size_t qname_len; scalar_t__ qclass; scalar_t__ qtype; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int dummy; } ;
struct auth_rrset {int dummy; } ;
struct auth_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct auth_zone*,struct query_info*,int*,struct auth_data**) ;
 struct auth_rrset* FUNC_1 (struct auth_zone*,struct auth_data**) ;
 int FUNC_2 (int*,int*,size_t) ;
 int FUNC_3 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_4(struct auth_zone* VAR_1, struct regional* VAR_2,
 struct dns_msg* VAR_3, uint8_t* VAR_4, size_t VAR_5)
{
 struct query_info VAR_6;
 int VAR_7;
 struct auth_data* VAR_8;
 struct auth_rrset* VAR_9;
 uint8_t VAR_10[VAR_0];
 if(VAR_5+2 > sizeof(VAR_10))
  return 0;
 VAR_10[0] = 1;
 VAR_10[1] = (uint8_t)'*';
 FUNC_2(VAR_10+2, VAR_4, VAR_5);



 VAR_6.qname = VAR_10;
 VAR_6.qname_len = VAR_5+2;
 VAR_6.qtype = 0;
 VAR_6.qclass = 0;
 FUNC_0(VAR_1, &VAR_6, &VAR_7, &VAR_8);
 if((VAR_9=FUNC_1(VAR_1, &VAR_8)) != ((void*)0)) {
  if(!FUNC_3(VAR_1, VAR_2, VAR_3, VAR_8, VAR_9)) return 0;
 }
 return 1;
}
