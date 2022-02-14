
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int delay; int rootdelay; int disp; int update; int rootdisp; int jitter; } ;


 int VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;

__attribute__((used)) static double
FUNC_0(
 struct peer *VAR_3
 )
{
 double VAR_4;
 VAR_4 = (VAR_3->delay + VAR_3->rootdelay) / 2
  + VAR_3->disp
    + VAR_0 * (VAR_1 - VAR_3->update)
  + VAR_3->rootdisp
  + VAR_3->jitter;







 if (VAR_4 < VAR_2)
  VAR_4 = VAR_2;
 return (VAR_4);
}
