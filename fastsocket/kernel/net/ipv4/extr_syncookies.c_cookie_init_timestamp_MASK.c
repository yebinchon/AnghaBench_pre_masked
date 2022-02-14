
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct request_sock {int dummy; } ;
struct inet_request_sock {int snd_wscale; int rcv_wscale; int sack_ok; scalar_t__ wscale_ok; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct inet_request_sock* FUNC_0 (struct request_sock*) ;
 int VAR_2 ;

__u32 FUNC_1(struct request_sock *VAR_3)
{
 struct inet_request_sock *VAR_4;
 u32 VAR_5, VAR_6 = VAR_2;
 u32 VAR_7 = 0;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4->wscale_ok) {
  VAR_7 = VAR_4->snd_wscale;
  VAR_7 |= VAR_4->rcv_wscale << 4;
 }
 VAR_7 |= VAR_4->sack_ok << 8;

 VAR_5 = VAR_6 & ~VAR_1;
 VAR_5 |= VAR_7;
 if (VAR_5 > VAR_6) {
  VAR_5 >>= VAR_0;
  VAR_5--;
  VAR_5 <<= VAR_0;
  VAR_5 |= VAR_7;
 }
 return VAR_5;
}
