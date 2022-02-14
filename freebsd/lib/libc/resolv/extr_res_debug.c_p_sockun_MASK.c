
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin_family; int sin_addr; } ;
struct TYPE_4__ {int sin6_addr; } ;
union res_sockaddr_union {TYPE_1__ sin; TYPE_2__ sin6; } ;




 int FUNC_0 (int const,int *,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,size_t) ;

const char *
FUNC_3(union res_sockaddr_union VAR_0, char *VAR_1, size_t VAR_2) {
 char VAR_3[sizeof "ffff:ffff:ffff:ffff:ffff:ffff:123.123.123.123"];

 switch (VAR_0.sin.sin_family) {
 case 129:
  FUNC_0(129, &VAR_0.sin.sin_addr, VAR_3, sizeof VAR_3);
  break;





 default:
  FUNC_1(VAR_3, "[af%d]", VAR_0.sin.sin_family);
  break;
 }
 if (VAR_2 > 0U) {
  FUNC_2(VAR_1, VAR_3, VAR_2 - 1);
  VAR_1[VAR_2 - 1] = '0';
 }
 return (VAR_1);
}
