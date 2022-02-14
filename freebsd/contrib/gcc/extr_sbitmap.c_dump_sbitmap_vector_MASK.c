
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sbitmap ;
typedef int FILE ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,...) ;

void
FUNC_2 (FILE *VAR_0, const char *VAR_1, const char *VAR_2,
       sbitmap *VAR_3, int VAR_4)
{
  int VAR_5;

  FUNC_1 (VAR_0, "%s\n", VAR_1);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
      FUNC_1 (VAR_0, "%s %d\n", VAR_2, VAR_5);
      FUNC_0 (VAR_0, VAR_3[VAR_5]);
    }

  FUNC_1 (VAR_0, "\n");
}
