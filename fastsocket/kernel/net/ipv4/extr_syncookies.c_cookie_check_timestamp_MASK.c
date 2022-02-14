
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_options_received {int rcv_tsecr; int snd_wscale; int rcv_wscale; int sack_ok; int wscale_ok; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcp_options_received*) ;

void FUNC_1(struct tcp_options_received *VAR_1)
{

 u32 VAR_2 = VAR_1->rcv_tsecr & VAR_0;

 VAR_1->snd_wscale = VAR_2 & 0xf;
 VAR_2 >>= 4;
 VAR_1->rcv_wscale = VAR_2 & 0xf;

 VAR_1->sack_ok = (VAR_2 >> 4) & 0x1;

 if (VAR_1->sack_ok)
  FUNC_0(VAR_1);

 if (VAR_1->snd_wscale || VAR_1->rcv_wscale)
  VAR_1->wscale_ok = 1;
}
