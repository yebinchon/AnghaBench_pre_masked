
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff*,int ,char*,int) ;
 struct sk_buff* FUNC_3 (int ) ;

struct sk_buff *FUNC_4(u16 VAR_0, char *VAR_1)
{
 struct sk_buff *VAR_2;
 int VAR_3 = FUNC_1(VAR_1) + 1;

 VAR_2 = FUNC_3(FUNC_0(VAR_3));
 if (VAR_2)
  FUNC_2(VAR_2, VAR_0, VAR_1, VAR_3);
 return VAR_2;
}
