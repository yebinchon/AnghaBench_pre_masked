
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff3_block {int dummy; } ;
typedef scalar_t__ lin ;
typedef int FILE ;


 scalar_t__ FUNC_0 (struct diff3_block*,int) ;
 int FUNC_1 (struct diff3_block*,int,scalar_t__) ;
 char* FUNC_2 (struct diff3_block*,int,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,int,int ,int *) ;

__attribute__((used)) static bool
FUNC_5 (FILE *VAR_0, struct diff3_block *VAR_1, int VAR_2)
{
  lin VAR_3;
  bool VAR_4 = 0;

  for (VAR_3 = 0;
       VAR_3 < FUNC_0 (VAR_1, VAR_2);
       VAR_3++)
    {
      char *VAR_5 = FUNC_2 (VAR_1, VAR_2, VAR_3);
      if (VAR_5[0] == '.')
 {
   VAR_4 = 1;
   FUNC_3 (VAR_0, ".");
 }
      FUNC_4 (VAR_5, sizeof (char),
       FUNC_1 (VAR_1, VAR_2, VAR_3), VAR_0);
    }

  return VAR_4;
}
