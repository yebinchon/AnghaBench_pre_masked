
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int network_header; } ;


 unsigned int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static inline void FUNC_2(struct sk_buff *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1);
 VAR_0->network_header -= VAR_1;
}
