
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct sk_buff *VAR_1, char VAR_2)
{
 ((char*)VAR_1->data)[VAR_0-1] = VAR_2;
}
