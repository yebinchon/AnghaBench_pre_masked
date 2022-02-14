
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(int VAR_2, char *VAR_3[])
{
 int VAR_4 = 1;

 if (VAR_2 == 0 && VAR_3 != ((void*)0)) {
  FUNC_0("usage: %s\n", VAR_3[0]);
  VAR_1 = -1;
  return;
 }
 while (VAR_4 > 0) {
  if ((VAR_4 = FUNC_1(VAR_0, ((void*)0), 0)) < 0) {
   FUNC_4("Error resetting connection");
   VAR_1 = -1;
   FUNC_3(0);
  } else if (VAR_4)
   (void)FUNC_2(0);
 }
}
