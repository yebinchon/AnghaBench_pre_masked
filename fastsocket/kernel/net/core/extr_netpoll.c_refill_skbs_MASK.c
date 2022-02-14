
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {scalar_t__ qlen; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(void)
{
 struct sk_buff *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_3.lock, VAR_5);
 while (VAR_3.qlen < VAR_1) {
  VAR_4 = FUNC_1(VAR_2, VAR_0);
  if (!VAR_4)
   break;

  FUNC_0(&VAR_3, VAR_4);
 }
 FUNC_3(&VAR_3.lock, VAR_5);
}
