
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filter_parse_state {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ precedence; } ;



__attribute__((used)) static inline int FUNC_0(struct filter_parse_state *VAR_0,
          int VAR_1, int VAR_2)
{
 return VAR_0->ops[VAR_1].precedence < VAR_0->ops[VAR_2].precedence;
}
