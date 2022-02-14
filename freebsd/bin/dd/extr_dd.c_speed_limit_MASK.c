
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dbsz; } ;


 TYPE_1__ VAR_0 ;
 double FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (double) ;

__attribute__((used)) static void
FUNC_2(void)
{
 static double VAR_2, VAR_3;
 double VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0();
 VAR_5 = VAR_4 - VAR_2 - VAR_3;
 VAR_6 = (double)VAR_0.dbsz / (double)VAR_1;
 VAR_3 = VAR_6 - VAR_5;
 if (VAR_3 > 0)
  FUNC_1(VAR_3 * 1000000);
 else
  VAR_3 = 0;
 VAR_2 = VAR_4;
}
