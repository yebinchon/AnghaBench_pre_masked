
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(char *VAR_3, struct command *VAR_4, struct command **VAR_5,
    int *VAR_6)
{
 char *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = VAR_3;
 VAR_8 = VAR_4->name;
 while ((VAR_9 = *VAR_7) == *VAR_8) {
  if (VAR_9 == 0) {

   *VAR_5 = VAR_4;
   *VAR_6 = VAR_2;
   return;
  }
  VAR_7++;
  VAR_8++;
 }
 if (VAR_9 == 0) {


  if (*VAR_6 == VAR_1) {
   *VAR_6 = VAR_0;


  } else {
   *VAR_5 = VAR_4;
   *VAR_6 = VAR_1;
  }
 }
}
