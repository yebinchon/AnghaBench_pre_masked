
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;

void
FUNC_2 (int VAR_4, char *VAR_5)
{
  if (VAR_0 == ((void*)0))
    {
      FUNC_1 ();
    }
  if ((VAR_4 <= 0) || (VAR_4 >= VAR_2))
    {
      FUNC_0 (VAR_1, "%s: unknown signal\n", VAR_5);
    }
  else
    {
      FUNC_0 (VAR_1, "%s: %s\n", VAR_5, VAR_3[VAR_4]);
    }
}
