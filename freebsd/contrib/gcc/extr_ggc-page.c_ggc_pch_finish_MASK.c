
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ggc_pch_data {int d; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ggc_pch_data*) ;
 int FUNC_2 (int *,int,int,int *) ;

void
FUNC_3 (struct ggc_pch_data *VAR_0, FILE *VAR_1)
{
  if (FUNC_2 (&VAR_0->d, sizeof (VAR_0->d), 1, VAR_1) != 1)
    FUNC_0 ("can't write PCH file: %m");
  FUNC_1 (VAR_0);
}
