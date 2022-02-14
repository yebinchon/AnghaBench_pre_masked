
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filter_parse_state {TYPE_1__* ops; } ;
struct TYPE_2__ {char* string; } ;


 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static inline int FUNC_1(struct filter_parse_state *VAR_0, char VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; FUNC_0(VAR_0->ops[VAR_2].string, "OP_NONE"); VAR_2++) {
  if (VAR_0->ops[VAR_2].string[0] == VAR_1)
   return 1;
 }

 return 0;
}
