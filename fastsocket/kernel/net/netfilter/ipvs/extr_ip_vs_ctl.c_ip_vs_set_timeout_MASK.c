
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip_vs_timeout_user {int tcp_timeout; int tcp_fin_timeout; int udp_timeout; } ;
struct TYPE_4__ {void** timeout_table; } ;
struct TYPE_3__ {void** timeout_table; } ;


 void* VAR_0 ;
 int FUNC_0 (int,char*,int,int,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int FUNC_1(struct ip_vs_timeout_user *VAR_6)
{
 FUNC_0(2, "Setting timeout tcp:%d tcpfin:%d udp:%d\n",
    VAR_6->tcp_timeout,
    VAR_6->tcp_fin_timeout,
    VAR_6->udp_timeout);
 return 0;
}
