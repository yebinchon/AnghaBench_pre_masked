
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dwLowDateTime; scalar_t__ dwHighDateTime; } ;
typedef TYPE_1__ FILETIME ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

long
FUNC_0 (FILETIME * VAR_2)
{




  long VAR_3;
  long long VAR_4 = ((long long) VAR_2->dwHighDateTime << 32) + ((unsigned) VAR_2->dwLowDateTime);
  VAR_4 -= VAR_0;
  VAR_3 = VAR_4 % ((long long) VAR_1);
  VAR_3 += (VAR_1 / 2);
  VAR_4 /= (long long) VAR_1;
  VAR_4 += (long long) (VAR_3 / VAR_1);
  return VAR_4;
}
