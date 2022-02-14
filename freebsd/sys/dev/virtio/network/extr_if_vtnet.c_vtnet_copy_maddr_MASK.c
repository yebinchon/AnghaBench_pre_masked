
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {int * macs; } ;
struct vtnet_mac_filter {TYPE_1__ vmf_multicast; } ;
struct sockaddr_dl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 size_t VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_2, struct sockaddr_dl *VAR_3, u_int VAR_4)
{
 struct vtnet_mac_filter *VAR_5 = VAR_2;

 if (VAR_4 < VAR_1)
  FUNC_1(FUNC_0(VAR_3), &VAR_5->vmf_multicast.macs[VAR_4],
      VAR_0);

 return (1);
}
