
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_1 (void *VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
 if (VAR_1[VAR_3] != -1)
  FUNC_0 (VAR_3, ((char *) VAR_2) + VAR_1[VAR_3]);

}
