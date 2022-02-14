
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0, u_int32_t VAR_1)
{
 int VAR_2;

 FUNC_5(VAR_0);

 FUNC_3();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_4();

 if (!VAR_2)
  FUNC_2(FUNC_1(VAR_0));

 return VAR_2;
}
