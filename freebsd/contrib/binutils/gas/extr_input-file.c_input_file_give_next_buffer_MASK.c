
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (char*,int,int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ) ;

char *
FUNC_7 (char *VAR_6 )
{
  char *VAR_7;
  register int VAR_8;

  if (VAR_2 == (FILE *) 0)
    return 0;




  if (VAR_5)
    VAR_8 = FUNC_3 (VAR_4, VAR_6, VAR_0);
  else
    VAR_8 = FUNC_5 (VAR_6, sizeof (char), VAR_0, VAR_2);
  if (VAR_8 < 0)
    {
      FUNC_1 (FUNC_0("can't read from %s: %s"), VAR_3, FUNC_6 (VAR_1));
      VAR_8 = 0;
    }
  if (VAR_8)
    VAR_7 = VAR_6 + VAR_8;
  else
    {
      if (FUNC_4 (VAR_2))
 FUNC_2 (FUNC_0("can't close %s: %s"), VAR_3, FUNC_6 (VAR_1));

      VAR_2 = (FILE *) 0;
      VAR_7 = 0;
    }

  return VAR_7;
}
