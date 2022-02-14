
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int FILE ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned int) ;

void
FUNC_3 (FILE *VAR_1)
{
  tree VAR_2;
  unsigned int VAR_3;

  FUNC_1 (VAR_1, "Immediate_uses: \n\n");
  for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
    {
      VAR_2 = FUNC_2(VAR_3);
      if (!VAR_2)
        continue;
      FUNC_0 (VAR_1, VAR_2);
    }
}
