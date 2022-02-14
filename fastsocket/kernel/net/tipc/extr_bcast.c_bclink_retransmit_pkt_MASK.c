
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {struct sk_buff* next; } ;
struct TYPE_3__ {struct sk_buff* first_out; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_4(u32 VAR_1, u32 VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = VAR_0->first_out;
 while (VAR_3 && FUNC_1(FUNC_0(VAR_3), VAR_1)) {
  VAR_3 = VAR_3->next;
 }
 FUNC_3(VAR_0, VAR_3, FUNC_2(VAR_2 - VAR_1));
}
