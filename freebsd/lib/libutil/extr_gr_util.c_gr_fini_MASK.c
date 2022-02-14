
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (char*) ;

void
FUNC_2(void)
{
 int VAR_4;

 if (!VAR_1)
  return;
 VAR_1 = 0;
 VAR_4 = VAR_0;
 if (*VAR_3 != '\0') {
  FUNC_1(VAR_3);
  *VAR_3 = '\0';
 }
 if (VAR_2 != -1)
  FUNC_0(VAR_2);
 VAR_0 = VAR_4;
}
