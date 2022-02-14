
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,char*) ;
 size_t VAR_0 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (size_t) ;
 scalar_t__* VAR_1 ;

void
FUNC_4 (FILE *VAR_2)
{
  size_t VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      if (VAR_1[VAR_3])
 {
   FUNC_2 (VAR_2, FUNC_3 (VAR_3), 0);
   FUNC_1 (VAR_2, ": ");
   FUNC_0 (VAR_2, VAR_1[VAR_3]);
   FUNC_1 (VAR_2, "\n");
 }
    }

  FUNC_1 (VAR_2, "\n");
}
