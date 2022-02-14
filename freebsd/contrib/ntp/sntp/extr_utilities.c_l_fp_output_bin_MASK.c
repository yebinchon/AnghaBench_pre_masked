
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l_fp ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int,int) ;

void
FUNC_2 (
  l_fp *VAR_1,
  FILE *VAR_2
  )
{
 register int VAR_3, VAR_4;

 FUNC_0(VAR_2, VAR_0);

 for(VAR_3=0; VAR_3<8; VAR_3++) {
  short VAR_5 = ((unsigned char *) VAR_1)[VAR_3];
  VAR_5++;

  FUNC_0(VAR_2, "%i: ", VAR_3);

  for(VAR_4=7; VAR_4>=0; VAR_4--) {
   int VAR_6 = (int) FUNC_1(2, VAR_4);

   if(VAR_5 - VAR_6 > 0) {
    FUNC_0(VAR_2, "1");
    VAR_5 -= VAR_6;
   }
   else {
    FUNC_0(VAR_2, "0");
   }
  }

  FUNC_0(VAR_2, " ");
 }

 FUNC_0(VAR_2, "\n");
 FUNC_0(VAR_2, VAR_0);
}
