
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 if ((VAR_2 = FUNC_2(VAR_1, '=')) == ((void*)0))
  VAR_3 = FUNC_0(VAR_1, "");
 else {
  *VAR_2++ = '\0';
  VAR_3 = FUNC_0(VAR_1, VAR_2);
 }
 if (VAR_3 == -1) {
  FUNC_3(VAR_0, "cannot save macro: %m");
  FUNC_1(1);
 }
}
