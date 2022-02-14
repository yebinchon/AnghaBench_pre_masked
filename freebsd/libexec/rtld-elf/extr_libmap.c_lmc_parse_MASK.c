
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_7(char *VAR_1, size_t VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 char VAR_8[VAR_0];

 char VAR_9[VAR_0 + 13];
 size_t VAR_10, VAR_11;

 VAR_10 = 0;
 VAR_7 = ((void*)0);
 while (VAR_10 < VAR_2) {
  VAR_11 = 0;
  while (VAR_10 < VAR_2 && VAR_1[VAR_10] != '\n' &&
      VAR_11 < sizeof(VAR_9) - 1) {
   VAR_9[VAR_11] = VAR_1[VAR_10];
   VAR_10++;
   VAR_11++;
  }
  VAR_9[VAR_11] = '\0';
  while (VAR_10 < VAR_2 && VAR_1[VAR_10] != '\n')
   VAR_10++;

  VAR_10++;

  VAR_3 = &VAR_9[0];
  VAR_5 = VAR_4 = VAR_6 = ((void*)0);


  while (FUNC_4(*VAR_3))
   VAR_3++;


  if (FUNC_0(*VAR_3))
   continue;


  if (*VAR_3 == '[') {
   VAR_3++;


   while (FUNC_4(*VAR_3))
    VAR_3++;


   if (FUNC_0(*VAR_3) || *VAR_3 == ']')
    continue;

   VAR_6 = VAR_3++;

   while (!FUNC_4(*VAR_3) && !FUNC_0(*VAR_3) && *VAR_3 != ']')
    VAR_3++;


   while (FUNC_4(*VAR_3))
    *VAR_3++ = '\0';


   if (*VAR_3 != ']')
    continue;


   *VAR_3++ = '\0';





   while (FUNC_4(*VAR_3))
    VAR_3++;
   if (!FUNC_0(*VAR_3))
    continue;

   if (FUNC_6(VAR_8, VAR_6, sizeof VAR_8) >= sizeof VAR_8)
    continue;
   VAR_7 = VAR_8;
   continue;
  }


  VAR_4 = VAR_3++;
  while (!FUNC_4(*VAR_3) && !FUNC_0(*VAR_3))
   VAR_3++;


  while (FUNC_4(*VAR_3))
   *VAR_3++ = '\0';


  if (FUNC_0(*VAR_3))
   continue;


  VAR_5 = VAR_3++;
  while (!FUNC_4(*VAR_3) && !FUNC_0(*VAR_3))
   VAR_3++;


  while (FUNC_4(*VAR_3))
   *VAR_3++ = '\0';


  if (!FUNC_0(*VAR_3))
   continue;

  *VAR_3 = '\0';
  if (FUNC_5(VAR_4, "includedir") == 0)
   FUNC_2(VAR_5);
  else if (FUNC_5(VAR_4, "include") == 0)
   FUNC_3(VAR_5);
  else
   FUNC_1(VAR_7, VAR_4, VAR_5);
 }
}
