
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int ) ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int*,int ) ;

void
FUNC_4(void)
{
 int VAR_7, VAR_8;

 if (!VAR_4)
  return;
 VAR_4 = 0;
 VAR_7 = VAR_3;
 if (VAR_2 != -1) {
  FUNC_1(VAR_2, VAR_1);
  FUNC_1(VAR_2, VAR_0);
  FUNC_3(VAR_2, &VAR_8, 0);
  VAR_2 = -1;
 }
 if (*VAR_6 != '\0') {
  FUNC_2(VAR_6);
  *VAR_6 = '\0';
 }
 if (VAR_5 != -1)
  FUNC_0(VAR_5);
 VAR_3 = VAR_7;
}
