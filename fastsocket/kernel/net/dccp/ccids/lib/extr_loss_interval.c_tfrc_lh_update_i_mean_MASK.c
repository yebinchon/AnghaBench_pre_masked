
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct tfrc_loss_interval {int li_is_closed; scalar_t__ li_length; int li_ccval; int li_seqno; } ;
struct tfrc_loss_hist {scalar_t__ i_mean; } ;
struct sk_buff {int dummy; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {int dccpd_seq; } ;
struct TYPE_3__ {int dccph_ccval; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct tfrc_loss_hist*) ;
 int FUNC_5 (struct tfrc_loss_hist*) ;
 struct tfrc_loss_interval* FUNC_6 (struct tfrc_loss_hist*) ;

u8 FUNC_7(struct tfrc_loss_hist *VAR_0, struct sk_buff *VAR_1)
{
 struct tfrc_loss_interval *VAR_2 = FUNC_6(VAR_0);
 u32 VAR_3 = VAR_0->i_mean;
 s64 VAR_4;

 if (VAR_2 == ((void*)0))
  return 0;

 VAR_4 = FUNC_2(VAR_2->li_seqno, FUNC_0(VAR_1)->dccpd_seq) + 1;

 if (VAR_4 - (s64)VAR_2->li_length <= 0)
  return 0;

 if (FUNC_1(FUNC_3(VAR_1)->dccph_ccval, VAR_2->li_ccval) > 4)
  VAR_2->li_is_closed = 1;

 if (FUNC_5(VAR_0) == 1)
  return 0;

 VAR_2->li_length = VAR_4;
 FUNC_4(VAR_0);

 return (VAR_0->i_mean < VAR_3);
}
