
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char**,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char const*) ;

int
FUNC_6(int VAR_2, char *VAR_3[])
{
 char VAR_4[VAR_0];
 char *VAR_5;
 const char *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_8 = 0;
 while ((VAR_7 = FUNC_1(VAR_2, VAR_3, "q")) != -1) {
  switch (VAR_7) {
  case 'q':
   VAR_8 = 1;
   break;
  case '?':
  default:
   FUNC_4();
  }
 }
 VAR_2 -= VAR_1;
 VAR_3 += VAR_1;
 VAR_6 = *VAR_3 != ((void*)0) ? *VAR_3++ : ".";
 VAR_9 = 0;
 do {
  if ((VAR_5 = FUNC_3(VAR_6, VAR_4)) == ((void*)0)) {
   if (!VAR_8)
    FUNC_5("%s", VAR_6);
   VAR_9 = 1;
  } else
   (void)FUNC_2("%s\n", VAR_5);
 } while ((VAR_6 = *VAR_3++) != ((void*)0));
 FUNC_0(VAR_9);
}
