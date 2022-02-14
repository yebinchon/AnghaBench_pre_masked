
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {int wcreg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rme96*,int*) ;
 scalar_t__ FUNC_1 (struct rme96*) ;

__attribute__((used)) static int
FUNC_2(struct rme96 *VAR_5)
{
 int VAR_6, VAR_7;

 if (!(VAR_5->wcreg & VAR_4) &&
            FUNC_1(VAR_5) != VAR_0 &&
     (VAR_6 = FUNC_0(VAR_5, &VAR_7)) > 0)
 {

         return VAR_6;
 }
 VAR_6 = ((VAR_5->wcreg >> VAR_1) & 1) +
  (((VAR_5->wcreg >> VAR_2) & 1) << 1);
 switch (VAR_6) {
 case 1:
  VAR_6 = 32000;
  break;
 case 2:
  VAR_6 = 44100;
  break;
 case 3:
  VAR_6 = 48000;
  break;
 default:
  return -1;
 }
 return (VAR_5->wcreg & VAR_3) ? VAR_6 << 1 : VAR_6;
}
