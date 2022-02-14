
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,unsigned int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

int
FUNC_5(int VAR_3, char **VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 while (*++VAR_4 != ((void*)0)) {
  char *VAR_7 = *VAR_4;
  VAR_6 = FUNC_3(VAR_7, VAR_0);
  if (VAR_6 < 0) {
   FUNC_4(VAR_7);
   continue;
  }
  if (FUNC_2(VAR_6, VAR_1, (caddr_t) &VAR_5) < 0) {
   FUNC_4("SESIOC_GETNOBJ");
  } else {
   FUNC_1(VAR_2, "%s: %d objects\n", VAR_7, VAR_5);
  }
  FUNC_0 (VAR_6);
 }
 return (0);
}
