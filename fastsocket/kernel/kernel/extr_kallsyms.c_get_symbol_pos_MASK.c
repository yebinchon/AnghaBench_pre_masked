
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 unsigned long* VAR_4 ;
 unsigned long VAR_5 ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_6,
        unsigned long *VAR_7,
        unsigned long *VAR_8)
{
 unsigned long VAR_9 = 0, VAR_10 = 0;
 unsigned long VAR_11, VAR_12, VAR_13, VAR_14;


 FUNC_0(!VAR_4);


 VAR_12 = 0;
 VAR_13 = VAR_5;

 while (VAR_13 - VAR_12 > 1) {
  VAR_14 = VAR_12 + (VAR_13 - VAR_12) / 2;
  if (VAR_4[VAR_14] <= VAR_6)
   VAR_12 = VAR_14;
  else
   VAR_13 = VAR_14;
 }





 while (VAR_12 && VAR_4[VAR_12-1] == VAR_4[VAR_12])
  --VAR_12;

 VAR_9 = VAR_4[VAR_12];


 for (VAR_11 = VAR_12 + 1; VAR_11 < VAR_5; VAR_11++) {
  if (VAR_4[VAR_11] > VAR_9) {
   VAR_10 = VAR_4[VAR_11];
   break;
  }
 }


 if (!VAR_10) {
  if (FUNC_1(VAR_6))
   VAR_10 = (unsigned long)VAR_0;
  else if (VAR_3)
   VAR_10 = (unsigned long)VAR_1;
  else
   VAR_10 = (unsigned long)VAR_2;
 }

 if (VAR_7)
  *VAR_7 = VAR_10 - VAR_9;
 if (VAR_8)
  *VAR_8 = VAR_6 - VAR_9;

 return VAR_12;
}
