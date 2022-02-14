
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arglist {int count; char** args; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (char) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char const*,int ) ;
 char const* FUNC_6 () ;
 char* FUNC_7 (char const*,char) ;

__attribute__((used)) static void
FUNC_8(struct arglist *VAR_2, int VAR_3, char **VAR_4)
{
 char VAR_5 = 0;
 const char *VAR_6, *VAR_7, *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(FUNC_6());
 FUNC_4(VAR_8 != ((void*)0) ? VAR_8 : FUNC_6());
 for (VAR_9 = 0; VAR_9 < VAR_2->count; VAR_9++) {
  VAR_6 = VAR_2->args[VAR_9];
  if (VAR_5 != 0)
   FUNC_2(' ');
  VAR_7 = FUNC_7(VAR_6, '=');
  if (VAR_7 != ((void*)0)) {
   VAR_7++;
   FUNC_5(VAR_6, VAR_7 - VAR_6, VAR_1);
   FUNC_3(VAR_7);
  } else
   FUNC_3(VAR_6);
  VAR_5 = ' ';
 }
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_6 = VAR_4[VAR_9];
  if (VAR_5 != 0)
   FUNC_2(' ');
  FUNC_3(VAR_6);
  VAR_5 = ' ';
 }
 FUNC_2('\n');
 FUNC_1(&VAR_0);
}
