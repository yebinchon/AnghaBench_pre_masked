
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,unsigned long*) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static unsigned long
FUNC_4(char *VAR_0)
{
 FILE *VAR_1;
 unsigned long VAR_2 = 0;

 if ((VAR_1 = FUNC_1(VAR_0, "r")) == ((void*)0))
  return 0;
 if (FUNC_2(VAR_1, "%lu\n", &VAR_2) < 1)
  FUNC_3("Failed to load checkpoint from '%s'", VAR_0);
 else
  FUNC_3("Loaded checkpoint from '%s' line %lu", VAR_0, VAR_2);
 FUNC_0(VAR_1);
 return VAR_2;
}
