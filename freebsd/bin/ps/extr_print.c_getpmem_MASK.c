
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ki_p; } ;
struct TYPE_4__ {int ki_flag; scalar_t__ ki_rssize; } ;
typedef TYPE_2__ KINFO ;


 int VAR_0 ;
 int FUNC_0 () ;
 double VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static double
FUNC_1(KINFO *VAR_3)
{
 static int VAR_4;
 double VAR_5;

 if (!VAR_2)
  VAR_4 = FUNC_0();
 if (VAR_4)
  return (0.0);

 if ((VAR_3->ki_p->ki_flag & VAR_0) == 0)
  return (0.0);


 VAR_5 = ((double)VAR_3->ki_p->ki_rssize) / VAR_1;
 return (100.0 * VAR_5);
}
