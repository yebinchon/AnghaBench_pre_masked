
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpreg {int fpr_fpsr; int * fpr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static void
FUNC_1 (struct fpreg *VAR_3)
{
  int VAR_4;

  for (VAR_4 = VAR_0; VAR_4 <= VAR_1; VAR_4++)
    FUNC_0
      (VAR_4, (char *) &VAR_3->fpr[VAR_4 - VAR_0]);

  FUNC_0 (VAR_2, (char *) &VAR_3->fpr_fpsr);
}
