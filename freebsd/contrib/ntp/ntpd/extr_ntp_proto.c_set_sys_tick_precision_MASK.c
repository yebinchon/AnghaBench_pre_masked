
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ s_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 int FUNC_0 (int ,char*,double,...) ;
 scalar_t__ VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;

void
FUNC_1(
 double VAR_7
 )
{
 int VAR_8;

 if (VAR_7 > 1.) {
  FUNC_0(VAR_0,
   "unsupported tick %.3f > 1s ignored", VAR_7);
  return;
 }
 if (VAR_7 < VAR_3) {
  FUNC_0(VAR_0,
   "proto: tick %.3f less than measured tick %.3f, ignored",
   VAR_7, VAR_3);
  return;
 } else if (VAR_7 > VAR_3) {
  VAR_6 = VAR_2;
  FUNC_0(VAR_1,
   "proto: truncating system clock to multiples of %.9f",
   VAR_7);
 }
 VAR_5 = VAR_7;




 for (VAR_8 = 0; VAR_7 <= 1; VAR_8--)
  VAR_7 *= 2;
 if (VAR_7 - 1 > 1 - VAR_7 / 2)
  VAR_8++;

 VAR_4 = (s_char)VAR_8;
}
