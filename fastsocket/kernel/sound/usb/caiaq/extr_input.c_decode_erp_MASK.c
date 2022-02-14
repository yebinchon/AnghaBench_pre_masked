
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned char VAR_6, unsigned char VAR_7)
{
 int VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int VAR_12;
 int VAR_13 = VAR_4 - VAR_5;
 int VAR_14 = (VAR_4 + VAR_5) / 2;

 VAR_9 = FUNC_0(VAR_14 - VAR_6) - (VAR_13 / 2 - 100) / 2;

 if (VAR_9 < 0)
  VAR_9 = 0;

 if (VAR_9 > 100)
  VAR_9 = 100;

 VAR_8 = 100 - VAR_9;

 if (VAR_6 < VAR_14) {

  VAR_11 = VAR_7 - VAR_5 + VAR_1;
  if (VAR_11 >= VAR_2)
   VAR_11 -= VAR_2;
 } else

  VAR_11 = VAR_4 - VAR_7 + VAR_3;


 if (VAR_7 > VAR_14)

  VAR_10 = VAR_6 - VAR_5;
 else

  VAR_10 = VAR_4 - VAR_6 + VAR_0;



 VAR_12 = VAR_10 * VAR_8 + VAR_11 * VAR_9;


 VAR_12 *= 10;
 VAR_12 /= VAR_2;

 if (VAR_12 < 0)
  VAR_12 += 1000;

 if (VAR_12 >= 1000)
  VAR_12 -= 1000;

 return VAR_12;
}
