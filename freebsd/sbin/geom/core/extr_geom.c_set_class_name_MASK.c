
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* VAR_2 ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 char FUNC_3 (char) ;
 int FUNC_4 (char) ;

__attribute__((used)) static void
FUNC_5(void)
{
 char *VAR_3, *VAR_4;

 VAR_3 = VAR_1;
 for (; *VAR_3 != '\0'; VAR_3++)
  *VAR_3 = FUNC_3(*VAR_3);
 VAR_2 = FUNC_1(FUNC_2(VAR_1) + 1);
 if (VAR_2 == ((void*)0))
  FUNC_0(VAR_0, "No memory");
 VAR_3 = VAR_2;
 VAR_4 = VAR_1;
 for (; *VAR_4 != '\0'; VAR_4++)
  *VAR_3++ = FUNC_4(*VAR_4);
 *VAR_3 = '\0';
}
