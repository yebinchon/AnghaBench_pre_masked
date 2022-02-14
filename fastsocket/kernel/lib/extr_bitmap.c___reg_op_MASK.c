
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;



 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(unsigned long *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 unsigned long VAR_10;
 int VAR_11;
 int VAR_12 = 0;





 VAR_5 = 1 << VAR_3;
 VAR_6 = VAR_2 / VAR_0;
 VAR_7 = VAR_2 - (VAR_6 * VAR_0);
 VAR_8 = FUNC_0(VAR_5);
 VAR_9 = FUNC_1(VAR_5, VAR_0);





 VAR_10 = (1UL << (VAR_9 - 1));
 VAR_10 += VAR_10 - 1;
 VAR_10 <<= VAR_7;

 switch (VAR_4) {
 case 129:
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   if (VAR_1[VAR_6 + VAR_11] & VAR_10)
    goto done;
  }
  VAR_12 = 1;
  break;

 case 130:
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
   VAR_1[VAR_6 + VAR_11] |= VAR_10;
  break;

 case 128:
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
   VAR_1[VAR_6 + VAR_11] &= ~VAR_10;
  break;
 }
done:
 return VAR_12;
}
