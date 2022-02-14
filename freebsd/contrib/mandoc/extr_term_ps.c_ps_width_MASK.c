
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct termp {int dummy; } ;
struct TYPE_4__ {TYPE_1__* gly; } ;
struct TYPE_3__ {int wx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static size_t
FUNC_0(const struct termp *VAR_3, int VAR_4)
{

 if (VAR_4 <= 32 || VAR_4 - 32 >= VAR_0)
  VAR_4 = 0;
 else
  VAR_4 -= 32;

 return (size_t)VAR_2[(int)VAR_1].gly[VAR_4].wx;
}
