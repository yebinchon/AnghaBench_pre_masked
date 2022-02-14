
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,char*) ;

__attribute__((used)) static void
FUNC_2 (char *VAR_1)
{
  unsigned VAR_2;
  int VAR_3 = 0;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
      int VAR_4 = FUNC_0 (VAR_2);
      if (VAR_4 == -1)
 FUNC_1 (VAR_2, (char *) &VAR_3);
      else
 FUNC_1 (VAR_2, VAR_1 + VAR_4);
    }
}
