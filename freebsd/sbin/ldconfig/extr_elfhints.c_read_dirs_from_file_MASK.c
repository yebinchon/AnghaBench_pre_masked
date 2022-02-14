
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,int ) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,char const*,int) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_1, const char *VAR_2)
{
 FILE *VAR_3;
 char VAR_4[VAR_0];
 int VAR_5;

 if ((VAR_3 = FUNC_5(VAR_2, "r")) == ((void*)0))
  FUNC_1(1, "%s", VAR_2);

 VAR_5 = 0;
 while (FUNC_4(VAR_4, sizeof VAR_4, VAR_3) != ((void*)0)) {
  char *VAR_6, *VAR_7;

  VAR_5++;
  VAR_6 = VAR_4;

  while (FUNC_6(*VAR_6))
   VAR_6++;
  if (*VAR_6 == '#' || *VAR_6 == '\0')
   continue;
  VAR_7 = VAR_6;

  while (!FUNC_6(*VAR_6) && *VAR_6 != '\0')
   VAR_6++;

  if (*VAR_6 != '\0') {
   *VAR_6++ = '\0';
   while (FUNC_6(*VAR_6))
    VAR_6++;
  }

  if (*VAR_6 != '\0')
   FUNC_8("%s:%d: trailing characters ignored",
       VAR_2, VAR_5);

  if ((VAR_7 = FUNC_7(VAR_7)) == ((void*)0))
   FUNC_2(1, "Out of memory");
  FUNC_0(VAR_1, VAR_7, 0);
 }

 FUNC_3(VAR_3);
}
