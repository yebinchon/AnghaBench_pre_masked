
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;

int
FUNC_1 (int VAR_3, int VAR_4, int VAR_5)
 {
 int VAR_6;
 int VAR_7;
 int VAR_8;



 int VAR_9[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


 VAR_7 = VAR_1;
 if ((VAR_3 % 4) == 0)
  {
  if ((VAR_3 % 100) == 0)
   {
   if ((VAR_3 % 400) == 0)
    {
    VAR_7 = VAR_2;
    }
   }
  else
   {
   VAR_7 = VAR_2;
   }
  }

 if (VAR_0)
  FUNC_0 ("\nConvertMonthDayToDayOfYear(): Year %d %s a leap year.\n", VAR_3+2000, VAR_7 ? "is" : "is not");


 VAR_6 = VAR_5;


 for (VAR_8=1; VAR_8<VAR_4; VAR_8++)
  {
  VAR_6 += VAR_9 [ VAR_8 - 1 ];
  }


 if ((VAR_7) && (VAR_4 > 2))
  {
  VAR_6++;
  }

 if (VAR_0)
  FUNC_0 ("\nConvertMonthDayToDayOfYear(): %4.4d-%2.2d-%2.2d represents day %3d of year.\n",
    VAR_3+2000, VAR_4, VAR_5, VAR_6);

 return (VAR_6);
 }
