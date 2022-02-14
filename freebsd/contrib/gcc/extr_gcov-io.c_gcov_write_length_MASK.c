
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int gcov_unsigned_t ;
typedef scalar_t__ gcov_position_t ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ start; unsigned int offset; int * buffer; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (unsigned int) ;

void
FUNC_2 (gcov_position_t VAR_2)
{
  unsigned VAR_3;
  gcov_unsigned_t VAR_4;
  gcov_unsigned_t *VAR_5;

  FUNC_0 (VAR_1.mode < 0);
  FUNC_0 (VAR_2 + 2 <= VAR_1.start + VAR_1.offset);
  FUNC_0 (VAR_2 >= VAR_1.start);
  VAR_3 = VAR_2 - VAR_1.start;
  VAR_4 = VAR_1.offset - VAR_3 - 2;
  VAR_5 = (gcov_unsigned_t *) &VAR_1.buffer[VAR_3];
  VAR_5[1] = VAR_4;
  if (VAR_1.offset >= VAR_0)
    FUNC_1 (VAR_1.offset);
}
