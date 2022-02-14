
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t alloc; int buffer; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,size_t) ;

__attribute__((used)) static void
FUNC_1 (unsigned VAR_2)
{
  size_t VAR_3 = VAR_1.alloc;

  if (!VAR_3)
    VAR_3 = VAR_0;
  VAR_3 += VAR_2;
  VAR_3 *= 2;

  VAR_1.alloc = VAR_3;
  VAR_1.buffer = FUNC_0 (VAR_1.buffer, VAR_3 << 2);
}
