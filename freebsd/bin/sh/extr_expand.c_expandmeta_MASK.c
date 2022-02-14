
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int count; int * args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arglist*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,struct arglist*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_4, struct arglist *VAR_5)
{
 char *VAR_6;
 int VAR_7;
 char VAR_8;

 VAR_7 = VAR_5->count;
 VAR_6 = VAR_4;
 for (; (VAR_8 = *VAR_6) != '\0'; VAR_6++) {

  if (VAR_8 == '*' || VAR_8 == '?' || VAR_8 == '[') {
   VAR_0;
   FUNC_1(VAR_2, VAR_4, VAR_5);
   VAR_1;
   break;
  }
 }
 if (VAR_5->count == VAR_7) {



  FUNC_3(VAR_4);
  FUNC_0(VAR_5, VAR_4);
 } else {
  FUNC_2(&VAR_5->args[VAR_7],
      VAR_5->count - VAR_7,
      sizeof(VAR_5->args[0]), VAR_3);
 }
}
