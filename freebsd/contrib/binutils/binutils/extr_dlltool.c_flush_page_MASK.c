
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *,char*,char*,int,...) ;

__attribute__((used)) static void
FUNC_1 (FILE *VAR_3, long *VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7;


  FUNC_0 (VAR_3, "\t%s\t0x%08x\t%s Starting RVA for chunk\n",
    VAR_1,
    VAR_5,
    VAR_0);
  FUNC_0 (VAR_3, "\t%s\t0x%x\t%s Size of block\n",
    VAR_1,
    (VAR_6 * 2) + (VAR_6 & 1) * 2 + 8,
    VAR_0);

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
    {
      long VAR_8 = VAR_4[VAR_7];

      if (VAR_8)
 VAR_8 = ((VAR_8 - VAR_5) | 0x3000) & 0xffff;

      FUNC_0 (VAR_3, "\t%s\t0x%lx\n", VAR_2, VAR_8);
    }


  if (VAR_6 & 1)
    FUNC_0 (VAR_3, "\t%s\t0x%x\n", VAR_2, 0 | 0x0000);
}
