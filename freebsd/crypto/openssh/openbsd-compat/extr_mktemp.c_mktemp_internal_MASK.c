
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;



 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_12 ;
 int FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_13, int VAR_14, int VAR_15)
{
 char *VAR_16, *VAR_17, *VAR_18;
 const char *VAR_19 = VAR_11;
 unsigned int VAR_20, VAR_21;
 struct stat VAR_22;
 size_t VAR_23;
 int VAR_24;

 VAR_23 = FUNC_4(VAR_13);
 if (VAR_23 == 0 || VAR_14 < 0 || (size_t)VAR_14 >= VAR_23) {
  VAR_12 = VAR_1;
  return(-1);
 }
 VAR_18 = VAR_13 + VAR_23 - VAR_14;

 VAR_21 = 1;
 for (VAR_16 = VAR_18; VAR_16 > VAR_13 && VAR_16[-1] == 'X'; VAR_16--) {
  if (VAR_21 < VAR_3 / VAR_4)
   VAR_21 *= VAR_4;
 }
 VAR_21 *= 2;

 do {
  for (VAR_17 = VAR_16; VAR_17 != VAR_18; VAR_17++) {
   VAR_20 = FUNC_0(VAR_4);
   *VAR_17 = VAR_19[VAR_20];
  }

  switch (VAR_15) {
  case 128:
   if (FUNC_1(VAR_13, &VAR_22) != 0)
    return(VAR_12 == VAR_2 ? 0 : -1);
   break;
  case 129:
   VAR_24 = FUNC_3(VAR_13, VAR_5|VAR_6|VAR_7, VAR_8|VAR_9);
   if (VAR_24 != -1 || VAR_12 != VAR_0)
    return(VAR_24);
   break;
  case 130:
   if (FUNC_2(VAR_13, VAR_8|VAR_9|VAR_10) == 0)
    return(0);
   if (VAR_12 != VAR_0)
    return(-1);
   break;
  }
 } while (--VAR_21);

 VAR_12 = VAR_0;
 return(-1);
}
