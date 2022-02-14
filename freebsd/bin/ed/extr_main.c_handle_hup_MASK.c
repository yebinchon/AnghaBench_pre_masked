
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int,scalar_t__) ;

void
FUNC_7(int VAR_4)
{
 char *VAR_5 = ((void*)0);
 char *VAR_6;
 char VAR_7[] = "ed.hup";
 size_t VAR_8;

 if (!VAR_2)
  FUNC_2(1);
 VAR_3 &= ~(1 << (VAR_4 - 1));
 if (VAR_1 && FUNC_6(VAR_7, "w", 1, VAR_1) < 0 &&
     (VAR_6 = FUNC_0("HOME")) != ((void*)0) &&
     (VAR_8 = FUNC_5(VAR_6)) + 8 <= VAR_0 &&
     (VAR_5 = (char *) FUNC_1(VAR_8 + 10)) != ((void*)0)) {
  FUNC_4(VAR_5, VAR_6);
  if (VAR_5[VAR_8 - 1] != '/')
   VAR_5[VAR_8] = '/', VAR_5[VAR_8+1] = '\0';
  FUNC_3(VAR_5, "ed.hup");
  FUNC_6(VAR_5, "w", 1, VAR_1);
 }
 FUNC_2(2);
}
