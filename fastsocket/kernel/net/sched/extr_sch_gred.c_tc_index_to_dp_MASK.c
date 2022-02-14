
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int tc_index; } ;


 int VAR_0 ;

__attribute__((used)) static inline u16 FUNC_0(struct sk_buff *VAR_1)
{
 return VAR_1->tc_index & VAR_0;
}
