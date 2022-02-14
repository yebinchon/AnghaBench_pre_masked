
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {TYPE_1__* tr; } ;
struct TYPE_2__ {int buffer; } ;


 unsigned long FUNC_0 (int *,int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct trace_iterator *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(&VAR_0, 0);
 unsigned long VAR_4 = FUNC_1(VAR_2->tr->buffer);

 if (VAR_4 > VAR_1)
  VAR_3 += VAR_4 - VAR_1;
 VAR_1 = VAR_4;
 return VAR_3;
}
