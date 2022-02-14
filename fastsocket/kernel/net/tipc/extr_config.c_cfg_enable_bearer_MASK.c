
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_bearer_config {int priority; int detect_scope; int name; } ;
struct sk_buff {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_3 (char*) ;
 struct sk_buff* FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_6(void)
{
 struct tipc_bearer_config *VAR_4;

 if (!FUNC_0(VAR_2, VAR_3, VAR_1))
  return FUNC_3(VAR_0);

 VAR_4 = (struct tipc_bearer_config *)FUNC_1(VAR_2);
 if (FUNC_5(VAR_4->name,
          FUNC_2(VAR_4->detect_scope),
          FUNC_2(VAR_4->priority)))
  return FUNC_3("unable to enable bearer");

 return FUNC_4();
}
