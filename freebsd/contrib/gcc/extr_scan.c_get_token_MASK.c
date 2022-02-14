
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* ptr; scalar_t__* base; } ;
typedef TYPE_1__ sstring ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (int *,TYPE_1__*,int) ;
 int FUNC_7 (int *,TYPE_1__*,int) ;
 int FUNC_8 (int *,int) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int,int *) ;

int
FUNC_10 (FILE *VAR_8, sstring *VAR_9)
{
  int VAR_10;

  VAR_9->ptr = VAR_9->base;
 retry:
  VAR_10 = ' ';
  VAR_10 = FUNC_8 (VAR_8, VAR_10);
  if (VAR_10 == '\n')
    {
      VAR_7++;
      VAR_5++;
      goto retry;
    }
  if (VAR_10 == '#')
    {
      VAR_10 = FUNC_10 (VAR_8, VAR_9);
      if (VAR_10 == VAR_3)
 {
   VAR_7 = FUNC_4 (VAR_9->base) - 1;
   FUNC_10 (VAR_8, &VAR_6);
 }
      for (;;)
 {
   VAR_10 = FUNC_5 (VAR_8);
   if (VAR_10 == VAR_1)
     return VAR_1;
   if (VAR_10 == '\n')
     {
     VAR_7++;
     VAR_5++;
     goto retry;
     }
 }
    }
  if (VAR_10 == VAR_1)
    return VAR_1;
  if (FUNC_0 (VAR_10))
    {
      do
 {
   FUNC_3 (VAR_9, VAR_10);
   VAR_10 = FUNC_5 (VAR_8);
 } while (VAR_10 != VAR_1 && FUNC_0 (VAR_10));
      FUNC_9 (VAR_10, VAR_8);
      VAR_10 = VAR_3;
      goto done;
    }
  if (FUNC_1 (VAR_10))
    {
      VAR_10 = FUNC_6 (VAR_8, VAR_9, VAR_10);
      FUNC_9 (VAR_10, VAR_8);
      return VAR_2;
    }
  if (VAR_10 == '\'' || VAR_10 == '"')
    {
      VAR_10 = FUNC_7 (VAR_8, VAR_9, VAR_10);
      FUNC_9 (VAR_10, VAR_8);
      return VAR_10 == '\'' ? VAR_0 : VAR_4;
    }
  FUNC_3 (VAR_9, VAR_10);
 done:
  FUNC_2 (VAR_9, 1);
  *VAR_9->ptr = 0;
  return VAR_10;
}
