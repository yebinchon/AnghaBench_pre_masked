
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int dst; } ;
struct rtable {TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 struct rtable* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_2)
{
 struct rtable *VAR_3;

 FUNC_1(VAR_2, VAR_0, VAR_1, 0);

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  FUNC_0(&VAR_3->u.dst, 0);
}
