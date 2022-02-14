
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int putenv; char* name; int active; int nameLen; int valueSize; int * value; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (char*,size_t,int*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_5 (char*,char) ;

int
FUNC_6(char *VAR_5)
{
 char *VAR_6;
 int VAR_7;
 int VAR_8;
 size_t VAR_9;


 if (VAR_5 == ((void*)0) || (VAR_6 = FUNC_5(VAR_5, '=')) == ((void*)0) ||
     (VAR_9 = VAR_6 - VAR_5) == 0) {
  VAR_4 = VAR_0;
  return (-1);
 }


 if (FUNC_3() == -1 || (VAR_2 == ((void*)0) && FUNC_0() == -1))
  return (-1);


 VAR_7 = VAR_3 - 1;
 VAR_8 = VAR_1;
 if (FUNC_2(VAR_5, VAR_9, &VAR_7, 1) != ((void*)0)) {

  if (VAR_2[VAR_7].putenv) {
   VAR_2[VAR_7].name = VAR_5;
   return (FUNC_4(VAR_1));
  } else {
   VAR_8--;
   VAR_2[VAR_7].active = 0;
  }
 }


 VAR_7 = VAR_3;
 if (!FUNC_1())
  return (-1);


 VAR_2[VAR_7].name = VAR_5;
 VAR_2[VAR_7].nameLen = -1;
 VAR_2[VAR_7].value = ((void*)0);
 VAR_2[VAR_7].valueSize = -1;
 VAR_2[VAR_7].putenv = 1;
 VAR_2[VAR_7].active = 1;
 VAR_8++;

 return (FUNC_4(VAR_8));
}
