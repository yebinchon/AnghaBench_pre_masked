
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_packet_ip {int ipc; int ip; } ;
struct pt_last_ip {int suppressed; int ip; int have_ip; } ;
struct pt_config {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

int FUNC_1(struct pt_last_ip *VAR_2,
    const struct pt_packet_ip *VAR_3,
    const struct pt_config *VAR_4)
{
 (void) VAR_4;

 if (!VAR_2 || !VAR_3)
  return -VAR_1;

 switch (VAR_3->ipc) {
 case 131:
  VAR_2->suppressed = 1;
  return 0;

 case 132:
  VAR_2->ip = FUNC_0(VAR_3->ip, 48);
  VAR_2->have_ip = 1;
  VAR_2->suppressed = 0;
  return 0;

 case 130:
  VAR_2->ip = (VAR_2->ip & ~0xffffull)
   | (VAR_3->ip & 0xffffull);
  VAR_2->have_ip = 1;
  VAR_2->suppressed = 0;
  return 0;

 case 129:
  VAR_2->ip = (VAR_2->ip & ~0xffffffffull)
   | (VAR_3->ip & 0xffffffffull);
  VAR_2->have_ip = 1;
  VAR_2->suppressed = 0;
  return 0;

 case 128:
  VAR_2->ip = (VAR_2->ip & ~0xffffffffffffull)
   | (VAR_3->ip & 0xffffffffffffull);
  VAR_2->have_ip = 1;
  VAR_2->suppressed = 0;
  return 0;

 case 133:
  VAR_2->ip = VAR_3->ip;
  VAR_2->have_ip = 1;
  VAR_2->suppressed = 0;
  return 0;
 }

 return -VAR_0;
}
