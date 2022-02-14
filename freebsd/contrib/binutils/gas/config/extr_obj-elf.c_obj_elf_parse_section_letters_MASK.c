
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char,char**) ;

__attribute__((used)) static int
FUNC_3 (char *VAR_7, size_t VAR_8)
{
  int VAR_9 = 0;

  while (VAR_8 > 0)
    {
      switch (*VAR_7)
 {
 case 'a':
   VAR_9 |= VAR_0;
   break;
 case 'w':
   VAR_9 |= VAR_6;
   break;
 case 'x':
   VAR_9 |= VAR_1;
   break;
 case 'M':
   VAR_9 |= VAR_3;
   break;
 case 'S':
   VAR_9 |= VAR_4;
   break;
 case 'G':
   VAR_9 |= VAR_2;
   break;
 case 'T':
   VAR_9 |= VAR_5;
   break;

 case 'm':
   if (*(VAR_7 - 1) == 'a')
     {
       VAR_9 |= VAR_3;
       if (VAR_8 > 1 && VAR_7[1] == 's')
  {
    VAR_9 |= VAR_4;
    VAR_7++, VAR_8--;
  }
       break;
     }
 default:
   {
     char *VAR_10 = FUNC_0("unrecognized .section attribute: want a,w,x,M,S,G,T");






       FUNC_1 ("%s", VAR_10);
   }
   break;
 }
      VAR_7++, VAR_8--;
    }

  return VAR_9;
}
