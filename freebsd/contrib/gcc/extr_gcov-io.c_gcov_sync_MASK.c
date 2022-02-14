
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ gcov_unsigned_t ;
typedef scalar_t__ gcov_position_t ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ start; scalar_t__ length; scalar_t__ offset; int file; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_1 ;

void
FUNC_3 (gcov_position_t VAR_2, gcov_unsigned_t VAR_3)
{
  FUNC_2 (VAR_1.mode > 0);
  VAR_2 += VAR_3;
  if (VAR_2 - VAR_1.start <= VAR_1.length)
    VAR_1.offset = VAR_2 - VAR_1.start;
  else
    {
      VAR_1.offset = VAR_1.length = 0;
      FUNC_0 (VAR_1.file, VAR_2 << 2, VAR_0);
      VAR_1.start = FUNC_1 (VAR_1.file) >> 2;
    }
}
