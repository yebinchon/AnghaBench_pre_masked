
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_0 (char const*,char) ;

int
FUNC_1(int VAR_14, char *VAR_15)
{
 char *VAR_16;
 int VAR_17 = (VAR_14 == 'c') ? VAR_12 : VAR_13;
 const char *VAR_18 = (VAR_14 == 'c') ? "bisnmp" : "^$#tl";

 for (VAR_16 = VAR_15; *VAR_16 != '\0'; VAR_16++)
  if (FUNC_0(VAR_18, *VAR_16) != ((void*)0))
   switch (*VAR_16) {
   case 'b':
    VAR_17 &= ~VAR_1;
    break;
   case 'i':
    VAR_17 |= VAR_2;
    break;
   case 's':
    VAR_17 |= VAR_6;
    break;
   case 'n':
    VAR_17 |= VAR_4;
    break;
   case 'm':
    VAR_17 &= ~VAR_1;
    VAR_17 |= VAR_5;
    break;
   case 'p':
    VAR_17 |= VAR_9;
    break;
   case '^':
    VAR_17 |= VAR_7;
    break;
   case '$':
    VAR_17 |= VAR_8;
    break;
   case '#':
    VAR_17 |= VAR_10;
    break;
   case 't':
    VAR_17 |= VAR_11;
    break;
   case 'l':
    VAR_17 |= VAR_3;
    break;
   case 'r':
    VAR_17 |= VAR_0;
    break;
   }
 return(VAR_17);
}
