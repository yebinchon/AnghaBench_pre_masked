
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {scalar_t__ frag_max_size; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static inline bool
FUNC_2(const struct sk_buff *VAR_0, u32 VAR_1)
{
 if (FUNC_0(VAR_0)->frag_max_size) {



  if (FUNC_0(VAR_0)->frag_max_size > VAR_1)
   return 1;
 }
 else if (VAR_0->len > VAR_1 && !FUNC_1(VAR_0)) {
  return 1;
 }
 return 0;
}
