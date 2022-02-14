
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {int areg; int rcreg; scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct rme96 *VAR_11,
     int *VAR_12)
{
 int VAR_13, VAR_14;

 *VAR_12 = 0;
 if (VAR_11->areg & VAR_0) {

  VAR_13 = ((VAR_11->areg >> VAR_1) & 1) +
   (((VAR_11->areg >> VAR_2) & 1) << 1);
  switch (VAR_13) {
  case 1:
   VAR_14 = 32000;
   break;
  case 2:
   VAR_14 = 44100;
   break;
  case 3:
   VAR_14 = 48000;
   break;
  default:
   return -1;
  }
  return (VAR_11->areg & VAR_3) ? VAR_14 << 1 : VAR_14;
 }

 VAR_11->rcreg = FUNC_0(VAR_11->iobase + VAR_4);
 if (VAR_11->rcreg & VAR_8) {

  *VAR_12 = 1;
  if (VAR_11->rcreg & VAR_9) {
   return 48000;
  }
  return 44100;
 }

 if (VAR_11->rcreg & VAR_10) {
  return -1;
 }


 VAR_13 = ((VAR_11->rcreg >> VAR_5) & 1) +
  (((VAR_11->rcreg >> VAR_6) & 1) << 1) +
  (((VAR_11->rcreg >> VAR_7) & 1) << 2);

 switch (VAR_13) {
 case 0:
  if (VAR_11->rcreg & VAR_9) {
   return 64000;
  }
  return -1;
 case 3: return 96000;
 case 4: return 88200;
 case 5: return 48000;
 case 6: return 44100;
 case 7: return 32000;
 default:
  break;
 }
 return -1;
}
