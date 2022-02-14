
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; } ;
struct sadb_address {int sadb_address_len; int sadb_address_prefixlen; } ;




 int FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(void *VAR_1)
{
 struct sadb_address *VAR_2 = VAR_1;
 struct sockaddr *VAR_3 = (struct sockaddr *)(VAR_2 + 1);
 struct sockaddr_in *VAR_4;



 int VAR_5;

 switch (VAR_3->sa_family) {
 case 129:
  VAR_5 = FUNC_0(sizeof(*VAR_2) + sizeof(*VAR_4), sizeof(uint64_t));
  if (VAR_2->sadb_address_len != VAR_5 ||
      VAR_2->sadb_address_prefixlen > 32)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
  break;
 }

 return 0;
}
