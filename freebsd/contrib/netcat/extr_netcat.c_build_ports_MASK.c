
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,char*,char const*,char*) ;
 char** VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,int ,char*,int) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,int,int ,char const**) ;

void
FUNC_8(char *VAR_4)
{
 const char *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;

 if ((VAR_6 = FUNC_5(VAR_4, '-')) != ((void*)0)) {
  *VAR_6 = '\0';
  VAR_6++;


  VAR_7 = FUNC_7(VAR_6, 1, VAR_0, &VAR_5);
  if (VAR_5)
   FUNC_3(1, "port number %s: %s", VAR_5, VAR_6);
  VAR_8 = FUNC_7(VAR_4, 1, VAR_0, &VAR_5);
  if (VAR_5)
   FUNC_3(1, "port number %s: %s", VAR_5, VAR_4);

  if (VAR_8 > VAR_7) {
   VAR_9 = VAR_7;
   VAR_7 = VAR_8;
   VAR_8 = VAR_9;
  }


  for (VAR_9 = VAR_8; VAR_9 <= VAR_7; VAR_9++) {
   VAR_2[VAR_10] = FUNC_1(1, VAR_1);
   if (VAR_2[VAR_10] == ((void*)0))
    FUNC_2(1, ((void*)0));
   FUNC_4(VAR_2[VAR_10], VAR_1, "%d", VAR_9);
   VAR_10++;
  }


  if (VAR_3) {
   int VAR_11;
   char *VAR_12;

   for (VAR_10 = 0; VAR_10 <= (VAR_7 - VAR_8); VAR_10++) {
    VAR_11 = (FUNC_0() & 0xFFFF) % (VAR_7 - VAR_8);
    VAR_12 = VAR_2[VAR_10];
    VAR_2[VAR_10] = VAR_2[VAR_11];
    VAR_2[VAR_11] = VAR_12;
   }
  }
 } else {
  VAR_7 = FUNC_7(VAR_4, 1, VAR_0, &VAR_5);
  if (VAR_5)
   FUNC_3(1, "port number %s: %s", VAR_5, VAR_4);
  VAR_2[0] = FUNC_6(VAR_4);
  if (VAR_2[0] == ((void*)0))
   FUNC_2(1, ((void*)0));
 }
}
