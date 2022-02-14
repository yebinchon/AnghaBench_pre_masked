
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int dev; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct sk_buff*,int *,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int VAR_3 ;

int FUNC_3(struct sk_buff *VAR_4)
{
 return FUNC_1(VAR_2, VAR_1, VAR_4,
       ((void*)0), FUNC_2(VAR_4)->dev, VAR_3,
       !(FUNC_0(VAR_4)->flags & VAR_0));
}
