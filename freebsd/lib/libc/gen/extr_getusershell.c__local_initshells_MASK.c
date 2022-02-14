
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (char) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(void *VAR_5, void *VAR_6, va_list VAR_7)
{
 char *VAR_8, *VAR_9;
 FILE *VAR_10;
 char VAR_11[VAR_0 + 2];

 if (VAR_4)
  FUNC_5(VAR_4, 1);
 VAR_4 = FUNC_6();

 if ((VAR_10 = FUNC_2(VAR_3, "re")) == ((void*)0))
  return VAR_2;

 while (FUNC_1(VAR_11, VAR_0 + 1, VAR_10) != ((void*)0)) {
  VAR_9 = VAR_11;
  while (*VAR_9 != '#' && *VAR_9 != '/' && *VAR_9 != '\0')
   VAR_9++;
  if (*VAR_9 == '#' || *VAR_9 == '\0')
   continue;
  VAR_8 = VAR_9;
  while (!FUNC_3(*VAR_9) && *VAR_9 != '#' && *VAR_9 != '\0')
   VAR_9++;
  *VAR_9 = '\0';
  FUNC_4(VAR_4, FUNC_7(VAR_8));
 }
 (void)FUNC_0(VAR_10);
 return VAR_1;
}
