
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* isctype ) (int) ;} ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(Char *VAR_9, Char *VAR_10, Char *VAR_11, int VAR_12)
{
 int VAR_13, VAR_14;
 Char VAR_15, VAR_16;

 if (VAR_12-- == 0)
  return(VAR_1);

 while (VAR_10 < VAR_11) {
  VAR_15 = *VAR_10++;
  switch (VAR_15 & VAR_4) {
  case 130:
   while (VAR_10 < VAR_11 && (*VAR_10 & VAR_4) == 130)
    VAR_10++;
   if (VAR_10 == VAR_11)
    return(1);
   do {
       if (FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12))
        return(1);
   } while (*VAR_9++ != VAR_0);
   return(0);
  case 129:
   if (*VAR_9++ == VAR_0)
    return(0);
   break;
  case 128:
   VAR_13 = 0;
   if ((VAR_16 = *VAR_9++) == VAR_0)
    return(0);
   if ((VAR_14 = ((*VAR_10 & VAR_4) == VAR_5)) != VAR_0)
    ++VAR_10;
   while (((VAR_15 = *VAR_10++) & VAR_4) != VAR_3) {
    if ((VAR_15 & VAR_4) == VAR_2) {
     Char VAR_17 = *VAR_10 & VAR_4;
     if (VAR_17 < VAR_7 &&
         VAR_8[VAR_17].isctype(VAR_16))
      VAR_13 = 1;
     ++VAR_10;
    }
    if ((*VAR_10 & VAR_4) == VAR_6) {
     if (VAR_15 <= VAR_16 && VAR_16 <= VAR_10[1])
      VAR_13 = 1;
     VAR_10 += 2;
    } else if (VAR_15 == VAR_16)
     VAR_13 = 1;
   }
   if (VAR_13 == VAR_14)
    return(0);
   break;
  default:
   if (*VAR_9++ != VAR_15)
    return(0);
   break;
  }
 }
 return(*VAR_9 == VAR_0);
}
