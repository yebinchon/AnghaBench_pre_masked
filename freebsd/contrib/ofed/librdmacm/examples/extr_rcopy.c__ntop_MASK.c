
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int sin6_addr; } ;
struct TYPE_5__ {int sin_addr; } ;
struct TYPE_4__ {int sa_family; } ;
union rsocket_address {TYPE_3__ sin6; TYPE_2__ sin; TYPE_1__ sa; } ;




 int FUNC_0 (int const,int *,char*,int) ;

__attribute__((used)) static char *FUNC_1(union rsocket_address *VAR_0)
{
 static char VAR_1[32];

 switch (VAR_0->sa.sa_family) {
 case 129:
  FUNC_0(129, &VAR_0->sin.sin_addr, VAR_1, sizeof VAR_1);
  break;
 case 128:
  FUNC_0(128, &VAR_0->sin6.sin6_addr, VAR_1, sizeof VAR_1);
  break;
 default:
  VAR_1[0] = '\0';
  break;
 }

 return VAR_1;
}
