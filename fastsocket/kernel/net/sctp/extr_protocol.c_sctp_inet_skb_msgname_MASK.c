
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; } ;
struct sk_buff {int dummy; } ;
struct sctphdr {int source; } ;
struct TYPE_4__ {int saddr; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct sctphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, char *VAR_1, int *VAR_2)
{
 if (VAR_1) {
  struct sctphdr *VAR_3 = FUNC_1(VAR_0);
  struct sockaddr_in *VAR_4 = (struct sockaddr_in *)VAR_1;

  FUNC_2(VAR_1, VAR_2);
  VAR_4->sin_port = VAR_3->source;
  VAR_4->sin_addr.s_addr = FUNC_0(VAR_0)->saddr;
 }
}
