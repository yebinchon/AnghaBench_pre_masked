
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static __inline void
FUNC_1(int *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = -1;

 VAR_5 = *VAR_3;
 VAR_6 = *VAR_4;
 if (VAR_6 < 0)
  VAR_7 = 0;
 else if (VAR_6 > VAR_2)
  VAR_7 = VAR_2;

 if (VAR_7 >= 0) {
  VAR_5 += (VAR_1 * (VAR_6 - VAR_7));
  VAR_6 = VAR_7;
 }





 while (VAR_6 < VAR_2 && VAR_5 > VAR_0) {
  VAR_5 -= VAR_1;
  ++VAR_6;
 }
 while (VAR_6 > 0 && VAR_5 < 0) {
  VAR_5 += VAR_1;
  --VAR_6;
 }


 FUNC_0(VAR_6 >= 0 && VAR_6 <= VAR_2,
     ("rf_atten %d", VAR_6));




 if (VAR_5 < 0)
  VAR_5 = 0;
 else if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 *VAR_4 = VAR_6;
 *VAR_3 = VAR_5;
}
