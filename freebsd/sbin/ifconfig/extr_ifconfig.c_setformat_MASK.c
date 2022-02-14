
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 void* FUNC_3 (char*) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void FUNC_6(char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;

 VAR_5 = FUNC_3(VAR_4);
 while ((VAR_6 = FUNC_4(&VAR_5, ",")) != ((void*)0)) {
  VAR_7 = FUNC_1(VAR_6, ':');
  if (VAR_7 == ((void*)0) || VAR_7[1] == '\0') {
   FUNC_5("Skipping invalid format specification: %s\n",
       VAR_6);
   continue;
  }


  VAR_7[0] = '\0';
  VAR_7++;

  if (FUNC_2(VAR_6, "addr") == 0)
   VAR_0 = FUNC_3(VAR_7);
  else if (FUNC_2(VAR_6, "ether") == 0)
   VAR_1 = FUNC_3(VAR_7);
  else if (FUNC_2(VAR_6, "inet") == 0)
   VAR_2 = FUNC_3(VAR_7);
  else if (FUNC_2(VAR_6, "inet6") == 0)
   VAR_3 = FUNC_3(VAR_7);
 }
 FUNC_0(VAR_5);
}
