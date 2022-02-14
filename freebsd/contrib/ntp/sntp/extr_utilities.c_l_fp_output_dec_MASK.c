
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l_fp ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1 (
  l_fp *VAR_1,
  FILE *VAR_2
     )
{
 register int VAR_3;

 FUNC_0(VAR_2, VAR_0);

 for(VAR_3=0; VAR_3<8; VAR_3++)
  FUNC_0(VAR_2, "%i: %i \t", VAR_3, ((unsigned char *) VAR_1)[VAR_3]);

 FUNC_0(VAR_2, "\n");
 FUNC_0(VAR_2, VAR_0);

}
