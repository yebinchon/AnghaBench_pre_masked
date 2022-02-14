
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

void FUNC_2(struct sk_buff *VAR_5, int VAR_6, u32 VAR_7)
{
 if (FUNC_1(VAR_5)->protocol == VAR_4 || VAR_6 != -VAR_0)
  return;

 if (VAR_7)
  FUNC_0(VAR_5, VAR_1, VAR_3, 0);
 else
  FUNC_0(VAR_5, VAR_1, VAR_2, 0);
}
