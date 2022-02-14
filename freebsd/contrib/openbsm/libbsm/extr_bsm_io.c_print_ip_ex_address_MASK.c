
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct in_addr {int s_addr; } ;
struct in6_addr {int s_addr; } ;
typedef int ipv6 ;
typedef int in_addr_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int*,struct in_addr*,int) ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (int ,struct in_addr*,char*,int) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_3, u_int32_t VAR_4, u_int32_t *VAR_5)
{
 struct in_addr VAR_6;
 struct in6_addr VAR_7;
 char VAR_8[VAR_2];

 switch (VAR_4) {
 case 129:
  VAR_6 = (in_addr_t)(VAR_5[0]);
  FUNC_1(VAR_3, "%s", FUNC_2(VAR_0, &VAR_6, VAR_8,
      VAR_2));
  break;

 case 128:
  FUNC_0(VAR_5, &VAR_7, sizeof(VAR_7));
  FUNC_1(VAR_3, "%s", FUNC_2(VAR_1, &VAR_7, VAR_8,
      VAR_2));
  break;

 default:
  FUNC_1(VAR_3, "invalid");
 }
}
