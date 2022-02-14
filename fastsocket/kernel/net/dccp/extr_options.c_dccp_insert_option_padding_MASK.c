
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int dccpd_opt_len; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0)->dccpd_opt_len % 4;

 if (VAR_1 != 0) {
  VAR_1 = 4 - VAR_1;
  FUNC_1(FUNC_2(VAR_0, VAR_1), 0, VAR_1);
  FUNC_0(VAR_0)->dccpd_opt_len += VAR_1;
 }
}
