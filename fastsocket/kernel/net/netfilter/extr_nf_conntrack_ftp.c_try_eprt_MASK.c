
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {int port; } ;
struct TYPE_6__ {TYPE_2__ tcp; } ;
struct TYPE_4__ {scalar_t__ ip6; int ip; } ;
struct nf_conntrack_man {scalar_t__ l3num; TYPE_3__ u; TYPE_1__ u3; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,size_t,struct in6_addr*,char) ;
 int FUNC_1 (char const*,int,size_t,char,int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char const*,size_t,int*,int,char,char) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, size_t VAR_3, struct nf_conntrack_man *VAR_4,
      char VAR_5)
{
 char VAR_6;
 int VAR_7;



 if (VAR_3 <= 3) {
  FUNC_4("EPRT: too short\n");
  return 0;
 }
 VAR_6 = VAR_2[0];
 if (FUNC_3(VAR_6) || VAR_6 < 33 || VAR_6 > 126 || VAR_2[2] != VAR_6) {
  FUNC_4("try_eprt: invalid delimitter.\n");
  return 0;
 }

 if ((VAR_4->l3num == VAR_0 && VAR_2[1] != '1') ||
     (VAR_4->l3num == VAR_1 && VAR_2[1] != '2')) {
  FUNC_4("EPRT: invalid protocol number.\n");
  return 0;
 }

 FUNC_4("EPRT: Got %c%c%c\n", VAR_6, VAR_2[1], VAR_6);

 if (VAR_2[1] == '1') {
  u_int32_t VAR_8[4];


  VAR_7 = FUNC_5(VAR_2 + 3, VAR_3 - 3, VAR_8, 4, '.', VAR_6);
  if (VAR_7 != 0)
   VAR_4->u3.ip = FUNC_2((VAR_8[0] << 24) | (VAR_8[1] << 16)
        | (VAR_8[2] << 8) | VAR_8[3]);
 } else {

  VAR_7 = FUNC_0(VAR_2 + 3, VAR_3 - 3,
           (struct in6_addr *)VAR_4->u3.ip6, VAR_6);
 }

 if (VAR_7 == 0)
  return 0;
 FUNC_4("EPRT: Got IP address!\n");

 return FUNC_1(VAR_2, 3 + VAR_7 + 1, VAR_3, VAR_6, &VAR_4->u.tcp.port);
}
