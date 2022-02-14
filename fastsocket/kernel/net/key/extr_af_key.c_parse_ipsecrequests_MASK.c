
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xfrm_policy {int dummy; } ;
struct sadb_x_policy {int sadb_x_policy_len; } ;
struct sadb_x_ipsecrequest {int sadb_x_ipsecrequest_len; } ;


 int FUNC_0 (struct xfrm_policy*,struct sadb_x_ipsecrequest*) ;

__attribute__((used)) static int
FUNC_1(struct xfrm_policy *VAR_0, struct sadb_x_policy *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->sadb_x_policy_len*8 - sizeof(struct sadb_x_policy);
 struct sadb_x_ipsecrequest *VAR_4 = (void*)(VAR_1+1);

 while (VAR_3 >= sizeof(struct sadb_x_ipsecrequest)) {
  if ((VAR_2 = FUNC_0(VAR_0, VAR_4)) < 0)
   return VAR_2;
  VAR_3 -= VAR_4->sadb_x_ipsecrequest_len;
  VAR_4 = (void*)((u8*)VAR_4 + VAR_4->sadb_x_ipsecrequest_len);
 }
 return 0;
}
