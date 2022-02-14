
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_2 (char*) ;
 struct sk_buff* FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static struct sk_buff *FUNC_5(void)
{
 if (!FUNC_0(VAR_2, VAR_3, VAR_1))
  return FUNC_2(VAR_0);

 if (FUNC_4((char *)FUNC_1(VAR_2)))
  return FUNC_2("unable to disable bearer");

 return FUNC_3();
}
