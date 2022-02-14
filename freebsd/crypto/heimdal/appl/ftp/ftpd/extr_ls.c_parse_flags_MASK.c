
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
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_16)
{



    int VAR_17 = VAR_12 | VAR_5 | VAR_3;


    const char *VAR_18;
    if(VAR_16 == ((void*)0) || *VAR_16 != '-')
 return VAR_17;
    for(VAR_18 = VAR_16 + 1; *VAR_18; VAR_18++) {
 switch(*VAR_18) {
 case '1':
     VAR_17 = (VAR_17 & ~VAR_4);
     break;
 case 'a':
     VAR_17 |= VAR_8;

 case 'A':
     VAR_17 &= ~VAR_5;
     break;
 case 'C':
     VAR_17 = (VAR_17 & ~VAR_4) | VAR_1;
     break;
 case 'd':
     VAR_17 |= VAR_0;
     break;
 case 'f':
     VAR_17 = (VAR_17 & ~VAR_10);
     break;
 case 'F':
     VAR_17 |= VAR_15;
     break;
 case 'i':
     VAR_17 |= VAR_6;
     break;
 case 'l':
     VAR_17 = (VAR_17 & ~VAR_4) | VAR_3;
     break;
 case 'r':
     VAR_17 |= VAR_13;
     break;
 case 'R':
     VAR_17 |= VAR_7;
     break;
 case 's':
     VAR_17 |= VAR_9;
     break;
 case 'S':
     VAR_17 = (VAR_17 & ~VAR_10) | VAR_14;
     break;
 case 't':
     VAR_17 = (VAR_17 & ~VAR_10) | VAR_11;
     break;
 case 'x':
     VAR_17 = (VAR_17 & ~VAR_4) | VAR_2;
     break;

 case 'k':
 case 'c':
 case 'L':
 case 'm':
 case 'o':
 case 'p':
 case 'q':
 case 'u':
 case 'T':
 case 'W':
     break;
 }
    }
    return VAR_17;
}
