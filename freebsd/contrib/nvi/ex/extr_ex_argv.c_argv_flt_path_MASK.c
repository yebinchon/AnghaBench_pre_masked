
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dirent {char* d_name; size_t d_namlen; } ;
struct TYPE_9__ {char* bp; size_t len; } ;
struct TYPE_8__ {size_t argc; TYPE_3__** argv; } ;
struct TYPE_7__ {int argsoff; TYPE_3__** args; } ;
typedef int SCR ;
typedef TYPE_1__ EX_PRIVATE ;
typedef TYPE_2__ EXCMD ;
typedef int DIR ;
typedef char CHAR_T ;
typedef int ARGS ;


 int FUNC_0 (int *,char*,size_t,char*,size_t) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,size_t,char*,size_t) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,size_t) ;
 size_t FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (int *,size_t) ;
 int VAR_0 ;
 int FUNC_8 (int *,TYPE_2__*,char*,size_t) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,size_t) ;
 int * FUNC_13 (char*) ;
 int FUNC_14 (TYPE_3__**,int,int,int ) ;
 struct dirent* FUNC_15 (int *) ;
 char* FUNC_16 (int *,char*,size_t) ;
 char* FUNC_17 (int *,char*,size_t) ;

int
FUNC_18(SCR *VAR_1, EXCMD *VAR_2, CHAR_T *VAR_3, size_t VAR_4)
{
 struct dirent *VAR_5;
 DIR *VAR_6;
 EX_PRIVATE *VAR_7;
 int VAR_8;
 size_t VAR_9, VAR_10, VAR_11;
 CHAR_T *VAR_12;
 CHAR_T *VAR_13, *VAR_14, *VAR_15;
 char *VAR_16, *VAR_17, *VAR_18 = ((void*)0);
 CHAR_T *VAR_19;
 size_t VAR_20;

 VAR_7 = FUNC_1(VAR_1);


 if ((VAR_3 = FUNC_17(VAR_1, VAR_3, VAR_4)) == ((void*)0))
  return (1);
 if ((VAR_13 = FUNC_6(VAR_3, '/')) == ((void*)0)) {
  if (*VAR_3 == '~') {
   int VAR_21;


   VAR_21 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4);
   FUNC_11(VAR_3);
   return (VAR_21);
  }
  VAR_12 = FUNC_3(".");
  VAR_9 = 0;
  VAR_14 = VAR_3;
 } else {
  if (VAR_13 == VAR_3) {
   VAR_12 = FUNC_3("/");
   VAR_9 = 1;
  } else {
   *VAR_13 = '\0';
   VAR_12 = VAR_3;
   VAR_9 = VAR_13 - VAR_3;
  }
  VAR_14 = VAR_13 + 1;
 }

 FUNC_2(VAR_1, VAR_12, VAR_9 + 1, VAR_17, VAR_11);
 if ((VAR_18 = FUNC_10(VAR_17)) != ((void*)0))
  VAR_17 = VAR_18;
 if ((VAR_6 = FUNC_13(VAR_17)) == ((void*)0)) {
  FUNC_11(VAR_18);
  FUNC_11(VAR_3);
  return (1);
 }
 FUNC_11(VAR_18);

 FUNC_2(VAR_1, VAR_14, FUNC_5(VAR_14), VAR_17, VAR_11);
 if ((VAR_16 = FUNC_16(VAR_1, VAR_17, VAR_11)) == ((void*)0)) {
  FUNC_11(VAR_3);
  return (1);
 }

 for (VAR_8 = VAR_7->argsoff; (VAR_5 = FUNC_15(VAR_6)) != ((void*)0);) {
  if (VAR_11 == 0) {
   if (VAR_5->d_name[0] == '.')
    continue;
   VAR_10 = VAR_5->d_namlen;
  } else {
   VAR_10 = VAR_5->d_namlen;
   if (VAR_10 < VAR_11 || FUNC_12(VAR_5->d_name, VAR_16, VAR_11))
    continue;
  }


  FUNC_0(VAR_1, VAR_5->d_name, VAR_10 + 1, VAR_19, VAR_20);
  FUNC_7(VAR_1, VAR_9 + VAR_20 + 1);
  VAR_15 = VAR_7->args[VAR_7->argsoff]->bp;
  if (VAR_9 != 0) {
   FUNC_4(VAR_15, VAR_12, VAR_9);
   VAR_15 += VAR_9;
   if (VAR_9 > 1 || VAR_12[0] != '/')
    *VAR_15++ = '/';
   VAR_7->args[VAR_7->argsoff]->len = VAR_9 + 1;
  }
  FUNC_4(VAR_15, VAR_19, VAR_20);
  VAR_7->args[VAR_7->argsoff]->len += VAR_20 - 1;
  ++VAR_7->argsoff;
  VAR_2->argv = VAR_7->args;
  VAR_2->argc = VAR_7->argsoff;
 }
 FUNC_9(VAR_6);
 FUNC_11(VAR_16);
 FUNC_11(VAR_3);

 FUNC_14(VAR_7->args + VAR_8, VAR_7->argsoff - VAR_8, sizeof(ARGS *), VAR_0);
 return (0);
}
