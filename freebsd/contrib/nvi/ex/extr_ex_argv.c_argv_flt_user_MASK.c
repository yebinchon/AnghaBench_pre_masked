
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct passwd {int pw_name; } ;
struct TYPE_8__ {char* bp; size_t len; } ;
struct TYPE_7__ {size_t argc; TYPE_3__** argv; } ;
struct TYPE_6__ {int argsoff; TYPE_3__** args; } ;
typedef int SCR ;
typedef TYPE_1__ EX_PRIVATE ;
typedef TYPE_2__ EXCMD ;
typedef int CHAR_T ;
typedef int ARGS ;


 int FUNC_0 (int *,int ,size_t,int *,size_t) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,size_t,char*,size_t) ;
 int FUNC_3 (char*,int *,size_t) ;
 int FUNC_4 (int *,size_t) ;
 int VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 struct passwd* FUNC_7 () ;
 scalar_t__ FUNC_8 (char*,int ,size_t) ;
 int FUNC_9 (TYPE_3__**,int,int,int ) ;
 int FUNC_10 () ;
 size_t FUNC_11 (int ) ;
 char* FUNC_12 (int *,char*,size_t) ;

__attribute__((used)) static int
FUNC_13(SCR *VAR_1, EXCMD *VAR_2, CHAR_T *VAR_3, size_t VAR_4)
{
 EX_PRIVATE *VAR_5;
 struct passwd *VAR_6;
 int VAR_7;
 char *VAR_8;
 size_t VAR_9, VAR_10;

 VAR_5 = FUNC_1(VAR_1);
 VAR_7 = VAR_5->argsoff;


 FUNC_2(VAR_1, VAR_3 + 1, VAR_4 - 1, VAR_8, VAR_10);
 if ((VAR_8 = FUNC_12(VAR_1, VAR_8, VAR_10)) == ((void*)0))
  return (1);

 FUNC_10();
 while ((VAR_6 = FUNC_7()) != ((void*)0)) {
  VAR_9 = FUNC_11(VAR_6->pw_name);
  if (VAR_10 > 0 &&
      (VAR_10 > VAR_9 || FUNC_8(VAR_8, VAR_6->pw_name, VAR_10)))
   continue;


  FUNC_0(VAR_1, VAR_6->pw_name, VAR_9 + 1, VAR_3, VAR_4);
  FUNC_4(VAR_1, VAR_4 + 1);
  VAR_5->args[VAR_5->argsoff]->bp[0] = '~';
  FUNC_3(VAR_5->args[VAR_5->argsoff]->bp + 1, VAR_3, VAR_4);
  VAR_5->args[VAR_5->argsoff]->len = VAR_4;
  ++VAR_5->argsoff;
  VAR_2->argv = VAR_5->args;
  VAR_2->argc = VAR_5->argsoff;
 }
 FUNC_5();
 FUNC_6(VAR_8);

 FUNC_9(VAR_5->args + VAR_7, VAR_5->argsoff - VAR_7, sizeof(ARGS *), VAR_0);
 return (0);
}
