
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dn_scp {scalar_t__ flowrem_sw; int snd_window; int data_xmit_queue; int other_xmit_queue; } ;


 scalar_t__ VAR_0 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_2 (int *) ;

void FUNC_3(struct sock *VAR_3)
{
 struct dn_scp *VAR_4 = FUNC_0(VAR_3);
 struct sk_buff *VAR_5;
 unsigned VAR_6 = 0;




 if ((VAR_5 = FUNC_2(&VAR_4->other_xmit_queue)) != ((void*)0))
  VAR_6 = FUNC_1(VAR_5, VAR_1);






 if (VAR_6 || (VAR_4->flowrem_sw != VAR_0))
  goto recalc_window;

 if ((VAR_5 = FUNC_2(&VAR_4->data_xmit_queue)) != ((void*)0))
  VAR_6 = FUNC_1(VAR_5, VAR_1);






recalc_window:
 if (VAR_6) {
  VAR_4->snd_window >>= 1;
  if (VAR_4->snd_window < VAR_2)
   VAR_4->snd_window = VAR_2;
 }
}
