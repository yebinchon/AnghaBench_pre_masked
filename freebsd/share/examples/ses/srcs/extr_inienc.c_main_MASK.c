
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;

int
FUNC_4(int VAR_2, char **VAR_3)
{
 int VAR_4;

 while (*++VAR_3) {
  VAR_4 = FUNC_2(*VAR_3, VAR_0);
  if (VAR_4 < 0) {
   FUNC_3(*VAR_3);
   continue;
  }
  if (FUNC_1(VAR_4, VAR_1, ((void*)0)) < 0) {
   FUNC_3("SESIOC_GETNOBJ");
  }
  (void) FUNC_0(VAR_4);
 }
 return (0);
}
