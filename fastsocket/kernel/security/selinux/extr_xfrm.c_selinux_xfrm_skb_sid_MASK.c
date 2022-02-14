
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__*,int ) ;

int FUNC_2(struct sk_buff *VAR_1, u32 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
 if (VAR_3 == 0 && *VAR_2 == VAR_0)
  *VAR_2 = FUNC_0(VAR_1);

 return VAR_3;
}
