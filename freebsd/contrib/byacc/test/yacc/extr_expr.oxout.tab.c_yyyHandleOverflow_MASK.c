
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char,...) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;
 long VAR_1 ;


 long VAR_2 ;

 long VAR_3 ;

void FUNC_3(char VAR_4)
  {char *VAR_5,*VAR_6;
   long VAR_7,VAR_8;
   switch(VAR_4)
     {
      case 129 :
           VAR_5 = "SSAL overflow: ";
           VAR_7 = VAR_2;
           break;
      case 130 :
           VAR_5 = "ready set overflow: ";
           VAR_7 = VAR_1;
           break;
      case 128 :
           VAR_5 = "traversal stack overflow: ";
           VAR_7 = VAR_3;
           break;
      default :;
     }
   VAR_8 = (3*VAR_7)/2;
   if (VAR_8 < 100) VAR_8 = 100;
   FUNC_2(VAR_5,VAR_0);
   FUNC_1(VAR_0,"size was %hhd.\n",VAR_7);
   VAR_6 = "     Have to modify evaluator:  -Y%c%ld.\n";
   FUNC_1(VAR_0,VAR_6,VAR_4,VAR_8);
   FUNC_0(-1);
  }
