
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 size_t VAR_6 ;
 size_t FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (char const*,char const*,size_t,int,int) ;
 int VAR_9 ;

int
FUNC_5(int VAR_10, char *VAR_11[])
{
 const char *VAR_12, *VAR_13;
 int VAR_14;
 size_t VAR_15;
 bool VAR_16, VAR_17;

 VAR_12 = VAR_0;
 VAR_13 = VAR_3;
 VAR_15 = VAR_6;
 VAR_17 = VAR_16 = 0;

 while ((VAR_14 = FUNC_2(VAR_10, VAR_11, "46bcdmn:")) != -1)
  switch (VAR_14) {
  case '4':
   VAR_12 = VAR_0;
   VAR_13 = VAR_3;
   break;
  case '6':
   VAR_12 = VAR_2;
   VAR_13 = VAR_5;
   break;
  case 'b':
   VAR_17 = 1;
   break;
  case 'c':
   VAR_16 = 1;
   break;
  case 'd':
   VAR_7++;
   break;
  case 'm':
   VAR_12 = VAR_1;
   VAR_13 = VAR_4;
   break;
  case 'n':
   VAR_15 = FUNC_0(VAR_8);
   break;
  default:
   FUNC_1(VAR_9, "Usage: %s [-cdm46] [-n <tot>]",
       FUNC_3());
   return 1;
  }

 FUNC_4(VAR_12, VAR_13, VAR_15, VAR_16, VAR_17);
 return 0;
}
