
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int swstate; int swb_u_idx; int hw_fragsize; int hw_fragshift; scalar_t__ zero_word; scalar_t__ swbuf; } ;
typedef TYPE_1__ vwsnd_port_t ;
struct TYPE_6__ {TYPE_1__ wport; } ;
typedef TYPE_2__ vwsnd_dev_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,char,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_4(vwsnd_dev_t *VAR_2)
{
 vwsnd_port_t *VAR_3 = &VAR_2->wport;

 FUNC_0("swstate = %d\n", VAR_3->swstate);
 if (VAR_3->swstate == VAR_1) {
  int VAR_4 = VAR_3->swb_u_idx;
  int VAR_5 = (VAR_4 + VAR_3->hw_fragsize - 1)
   >> VAR_3->hw_fragshift
   << VAR_3->hw_fragshift;
  int VAR_6 = VAR_5 - VAR_4;
  FUNC_0("clearing %d bytes\n", VAR_6);
  if (VAR_6)
   FUNC_2(VAR_3->swbuf + VAR_4,
          (char) VAR_3->zero_word,
          VAR_6);
  VAR_3->swstate = VAR_0;
  FUNC_3(VAR_2, 0, VAR_6);
 }
 FUNC_1();
}
