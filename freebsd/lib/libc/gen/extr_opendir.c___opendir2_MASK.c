
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int) ;
 int VAR_6 ;

DIR *
FUNC_3(const char *VAR_7, int VAR_8)
{
 int VAR_9;
 DIR *VAR_10;
 int VAR_11;

 if ((VAR_8 & (VAR_4 | VAR_5)) != 0)
  return (((void*)0));
 if ((VAR_9 = FUNC_2(VAR_7,
     VAR_3 | VAR_2 | VAR_1 | VAR_0)) == -1)
  return (((void*)0));

 VAR_10 = FUNC_0(VAR_9, VAR_8, 0);
 if (VAR_10 == ((void*)0)) {
  VAR_11 = VAR_6;
  FUNC_1(VAR_9);
  VAR_6 = VAR_11;
 }
 return (VAR_10);
}
