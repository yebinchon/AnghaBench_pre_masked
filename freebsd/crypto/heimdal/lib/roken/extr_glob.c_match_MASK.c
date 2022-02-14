
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


__attribute__((used)) static int
FUNC_0(Char *VAR_5, Char *VAR_6, Char *VAR_7)
{
 int VAR_8, VAR_9;
 Char VAR_10, VAR_11;

 while (VAR_6 < VAR_7) {
  VAR_10 = *VAR_6++;
  switch (VAR_10 & VAR_2) {
  case 130:
   if (VAR_6 == VAR_7)
    return(1);
   do
       if (FUNC_0(VAR_5, VAR_6, VAR_7))
        return(1);
   while (*VAR_5++ != VAR_0);
   return(0);
  case 129:
   if (*VAR_5++ == VAR_0)
    return(0);
   break;
  case 128:
   VAR_8 = 0;
   if ((VAR_11 = *VAR_5++) == VAR_0)
    return(0);
   if ((VAR_9 = ((*VAR_6 & VAR_2) == VAR_3)) != VAR_0)
    ++VAR_6;
   while (((VAR_10 = *VAR_6++) & VAR_2) != VAR_1)
    if ((*VAR_6 & VAR_2) == VAR_4) {
     if (VAR_10 <= VAR_11 && VAR_11 <= VAR_6[1])
      VAR_8 = 1;
     VAR_6 += 2;
    } else if (VAR_10 == VAR_11)
     VAR_8 = 1;
   if (VAR_8 == VAR_9)
    return(0);
   break;
  default:
   if (*VAR_5++ != VAR_10)
    return(0);
   break;
  }
 }
 return(*VAR_5 == VAR_0);
}
