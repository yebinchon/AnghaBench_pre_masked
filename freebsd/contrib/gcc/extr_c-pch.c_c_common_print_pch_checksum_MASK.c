
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int* VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (char,int *) ;

void
FUNC_3 (FILE *VAR_1)
{
  int VAR_2;
  FUNC_1 ("Compiler executable checksum: ", VAR_1);
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
    FUNC_0 (VAR_1, "%02x", VAR_0[VAR_2]);
  FUNC_2 ('\n', VAR_1);
}
