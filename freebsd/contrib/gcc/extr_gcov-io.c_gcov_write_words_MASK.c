
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gcov_unsigned_t ;
struct TYPE_2__ {scalar_t__ mode; int offset; unsigned int alloc; int * buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static gcov_unsigned_t *
FUNC_4 (unsigned VAR_2)
{
  gcov_unsigned_t *VAR_3;

  FUNC_0 (VAR_1.mode < 0);
  if (VAR_1.offset + VAR_2 > VAR_1.alloc)
    FUNC_1 (VAR_1.offset + VAR_2);

  VAR_3 = &VAR_1.buffer[VAR_1.offset];
  VAR_1.offset += VAR_2;

  return VAR_3;
}
