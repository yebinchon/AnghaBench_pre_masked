
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char wchar_t ;
typedef int ssize_t ;
typedef int elpath ;
struct TYPE_4__ {int el_scratch; } ;
typedef int FILE ;
typedef TYPE_1__ EditLine ;


 char* FUNC_0 (char*,int *) ;
 char* FUNC_1 (size_t,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char**,size_t*,int *) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (char const) ;
 int FUNC_10 (TYPE_1__*,char const*) ;
 int FUNC_11 (char*,size_t,char*,char*,char const*) ;
 scalar_t__ FUNC_12 (char*) ;

int
FUNC_13(EditLine *VAR_0, const char *VAR_1)
{
 FILE *VAR_2;
 size_t VAR_3;
 ssize_t VAR_4;
 char *VAR_5;
 char *VAR_6 = ((void*)0);
 const wchar_t *VAR_7;
 int VAR_8 = 0;

 VAR_2 = ((void*)0);
 if (VAR_1 == ((void*)0)) {
  return -1;

 }
 if (VAR_1[0] == '\0')
  return -1;

 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_4(VAR_1, "r");
 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_6);
  return -1;
 }

 VAR_5 = ((void*)0);
 VAR_3 = 0;
 while ((VAR_4 = FUNC_7(&VAR_5, &VAR_3, VAR_2)) != -1) {
  if (*VAR_5 == '\n')
   continue;
  if (VAR_4 > 0 && VAR_5[--VAR_4] == '\n')
   VAR_5[VAR_4] = '\0';

  VAR_7 = FUNC_0(VAR_5, &VAR_0->el_scratch);
  if (!VAR_7)
   continue;

  while (*VAR_7 != '\0' && FUNC_9(*VAR_7))
   VAR_7++;
  if (*VAR_7 == '#')
   continue;
  if ((VAR_8 = FUNC_10(VAR_0, VAR_7)) == -1)
   break;
 }
 FUNC_5(VAR_5);

 FUNC_2(VAR_6);
 (void) FUNC_3(VAR_2);
 return VAR_8;
}
