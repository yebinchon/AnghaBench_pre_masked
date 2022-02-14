
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scrmap_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_5(int VAR_2, char **VAR_3)
{
 FILE *VAR_4;

 if (VAR_2 == 2) {
  if ((VAR_4 = FUNC_1(VAR_3[1], "w")) == ((void*)0)) {
   FUNC_4(VAR_3[1]);
   return 1;
  }
  FUNC_3(&VAR_0, sizeof(scrmap_t), 1, VAR_4);
  FUNC_0(VAR_4);
  return 0;
 }
 else {
  FUNC_2(VAR_1, "usage: %s <mapfile>\n", VAR_3[0]);
  return 1;
 }
}
