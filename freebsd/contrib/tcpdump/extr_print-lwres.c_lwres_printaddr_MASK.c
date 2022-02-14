
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int netdissect_options ;
struct TYPE_3__ {int family; int length; } ;
typedef TYPE_1__ lwres_addr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const,int) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*) ;

__attribute__((used)) static int
FUNC_7(netdissect_options *VAR_0,
                const lwres_addr_t *VAR_1)
{
 uint16_t VAR_2;
 const char *VAR_3;
 int VAR_4;

 FUNC_3(VAR_1->length);
 VAR_2 = FUNC_0(&VAR_1->length);

 VAR_3 = (const char *)&VAR_1->length + sizeof(VAR_1->length);
 FUNC_4(*VAR_3, VAR_2);

 switch (FUNC_1(&VAR_1->family)) {
 case 1:
  if (VAR_2 < 4)
   return -1;
  FUNC_2((VAR_0, " %s", FUNC_6(VAR_0, VAR_3)));
  VAR_3 += sizeof(struct in_addr);
  break;
 case 2:
  if (VAR_2 < 16)
   return -1;
  FUNC_2((VAR_0, " %s", FUNC_5(VAR_0, VAR_3)));
  VAR_3 += sizeof(struct in6_addr);
  break;
 default:
  FUNC_2((VAR_0, " %u/", FUNC_1(&VAR_1->family)));
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   FUNC_2((VAR_0, "%02x", *VAR_3++));
 }

 return VAR_3 - (const char *)VAR_1;

  trunc:
 return -1;
}
