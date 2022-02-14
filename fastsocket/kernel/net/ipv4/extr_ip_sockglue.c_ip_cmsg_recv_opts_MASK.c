
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;
struct TYPE_3__ {scalar_t__ optlen; } ;
struct TYPE_4__ {TYPE_1__ opt; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct msghdr*,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct msghdr *VAR_2, struct sk_buff *VAR_3)
{
 if (FUNC_0(VAR_3)->opt.optlen == 0)
  return;

 FUNC_2(VAR_2, VAR_1, VAR_0, FUNC_0(VAR_3)->opt.optlen,
   FUNC_1(VAR_3) + 1);
}
