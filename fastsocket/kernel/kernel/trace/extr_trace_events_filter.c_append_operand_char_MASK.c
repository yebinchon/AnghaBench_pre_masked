
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tail; char* string; } ;
struct filter_parse_state {TYPE_1__ operand; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct filter_parse_state *VAR_2, char VAR_3)
{
 if (VAR_2->operand.tail == VAR_1 - 1)
  return -VAR_0;

 VAR_2->operand.string[VAR_2->operand.tail++] = VAR_3;

 return 0;
}
