
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;

int
FUNC_1(char **VAR_8, FILE *VAR_9)
{
 int VAR_10;

 if (VAR_5) {
  if (VAR_2 != VAR_3)
   VAR_6 = VAR_0;
  VAR_1 = VAR_4;
  VAR_2 = VAR_3;
  VAR_10 = VAR_5;
  VAR_5 = 0;
 } else {
  VAR_10 = FUNC_0(VAR_9);
  VAR_6 = VAR_0;
 }
 if (VAR_8)
  *VAR_8 = VAR_7;

 return (VAR_10);
}
