
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t tail; char* string; } ;
struct filter_parse_state {TYPE_1__ infix; } ;


 size_t FUNC_0 (char*) ;

__attribute__((used)) static char FUNC_1(struct filter_parse_state *VAR_0)
{
 if (VAR_0->infix.tail == FUNC_0(VAR_0->infix.string))
  return 0;

 return VAR_0->infix.string[VAR_0->infix.tail];
}
