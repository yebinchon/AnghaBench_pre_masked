
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,char*,unsigned long*,unsigned long*,int*,int*,unsigned long*,char*) ;

__attribute__((used)) static int
FUNC_2 (FILE *VAR_1, unsigned long *VAR_2, unsigned long *VAR_3,
       char *VAR_4)
{

  char VAR_5[256];
  int VAR_6, VAR_7;
  unsigned long VAR_8;
  int VAR_9 = VAR_0;





  if (FUNC_0 (VAR_5, sizeof VAR_5, VAR_1) != ((void*)0))
    VAR_9 = FUNC_1 (VAR_5, "%lx %lx %d %d %lx %s", VAR_2, VAR_3,
    &VAR_6, &VAR_7, &VAR_8, VAR_4);

  return (VAR_9 != 0 && VAR_9 != VAR_0);
}
