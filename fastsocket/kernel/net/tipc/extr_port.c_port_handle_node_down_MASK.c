
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct port {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct port*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct port* FUNC_2 (unsigned long) ;
 int FUNC_3 (struct port*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct port *VAR_2 = FUNC_2(VAR_1);
 struct sk_buff* VAR_3 = ((void*)0);

 if (!VAR_2)
  return;
 VAR_3 = FUNC_0(VAR_2, VAR_0);
 FUNC_3(VAR_2);
 FUNC_1(VAR_3);
}
