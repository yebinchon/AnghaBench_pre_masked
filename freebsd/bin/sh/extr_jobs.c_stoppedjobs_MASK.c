
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {scalar_t__ used; scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct job* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

int
FUNC_1(void)
{
 int VAR_4;
 struct job *VAR_5;

 if (VAR_1)
  return (0);
 for (VAR_4 = 1, VAR_5 = VAR_2; VAR_4 <= VAR_3; VAR_4++, VAR_5++) {
  if (VAR_5->used == 0)
   continue;
  if (VAR_5->state == VAR_0) {
   FUNC_0("You have stopped jobs.\n");
   VAR_1 = 2;
   return (1);
  }
 }

 return (0);
}
