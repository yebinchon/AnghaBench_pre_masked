
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,char***) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;
 int VAR_9 ;
 int FUNC_10 (int ) ;

int
FUNC_11 (int VAR_10, char **VAR_11)
{
  int VAR_12;







  FUNC_1 (VAR_3, VAR_2);
  FUNC_10 (VAR_3);

  FUNC_3 (&VAR_10, &VAR_11);

  FUNC_7 (VAR_10, VAR_11);

  if (VAR_7 > 0)
    {

      VAR_4 = FUNC_5 (VAR_7);
      if (VAR_4 == ((void*)0))
 FUNC_2 (FUNC_0("Out of memory allocating dump request table.\n"));
      else
 {
   FUNC_6 (VAR_4, VAR_5, VAR_7);
   VAR_6 = VAR_7;
 }
    }

  if (VAR_8 < (VAR_10 - 1))
    VAR_9 = 1;

  VAR_12 = 0;
  while (VAR_8 < VAR_10)
    VAR_12 |= FUNC_8 (VAR_11[VAR_8++]);

  if (VAR_5 != ((void*)0))
    FUNC_4 (VAR_5);
  if (VAR_4 != ((void*)0))
    FUNC_4 (VAR_4);

  return VAR_12;
}
