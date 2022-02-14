
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; char* ptr; } ;
typedef TYPE_1__ sb ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*,char const*,int) ;

int
FUNC_8 (const char *VAR_4, const char *VAR_5, sb *VAR_6,
   int (*VAR_7) (sb *))
{
  int VAR_8;
  int VAR_9 = FUNC_6 (VAR_5);
  int VAR_10 = 1;
  int VAR_11 = VAR_6->len;

  int VAR_12 = VAR_7 (VAR_6);

  if (VAR_9 == 4 && FUNC_5(VAR_5, "ENDR") == 0)
    {
      VAR_4 = ((void*)0);
      VAR_8 = 0;
    }
  else
    VAR_8 = FUNC_6 (VAR_4);

  while (VAR_12)
    {

      int VAR_13 = VAR_11;






      if (! VAR_0)
 {

   while (VAR_13 < VAR_6->len && FUNC_0 (VAR_6->ptr[VAR_13]))
     VAR_13++;
 }

      for (;;)
 {

   if (VAR_13 >= VAR_6->len || ! FUNC_1 (VAR_6->ptr[VAR_13]))
     break;
   VAR_13++;
   while (VAR_13 < VAR_6->len && FUNC_3 (VAR_6->ptr[VAR_13]))
     VAR_13++;
   if (VAR_13 < VAR_6->len && FUNC_2 (VAR_6->ptr[VAR_13]))
     VAR_13++;
   if (VAR_0)
     break;

   while (VAR_13 < VAR_6->len && FUNC_0 (VAR_6->ptr[VAR_13]))
     VAR_13++;

   if (VAR_13 >= VAR_6->len || VAR_6->ptr[VAR_13] != ':')
     {
       VAR_13 = VAR_11;
       break;
     }
   VAR_13++;
   VAR_11 = VAR_13;
 }


      while (VAR_13 < VAR_6->len && FUNC_0 (VAR_6->ptr[VAR_13]))
 VAR_13++;

      if (VAR_13 < VAR_6->len && (VAR_6->ptr[VAR_13] == '.'
      || VAR_1
      || VAR_3))
 {
   if (! VAR_2 && VAR_6->ptr[VAR_13] == '.')
     VAR_13++;
   if (VAR_4 == ((void*)0)
      && FUNC_7 (VAR_6->ptr + VAR_13, "IRPC", VAR_8 = 4) != 0
      && FUNC_7 (VAR_6->ptr + VAR_13, "IRP", VAR_8 = 3) != 0
      && FUNC_7 (VAR_6->ptr + VAR_13, "IREPC", VAR_8 = 5) != 0
      && FUNC_7 (VAR_6->ptr + VAR_13, "IREP", VAR_8 = 4) != 0
      && FUNC_7 (VAR_6->ptr + VAR_13, "REPT", VAR_8 = 4) != 0
      && FUNC_7 (VAR_6->ptr + VAR_13, "REP", VAR_8 = 3) != 0)
     VAR_8 = 0;
   if ((VAR_4 != ((void*)0)
        ? FUNC_7 (VAR_6->ptr + VAR_13, VAR_4, VAR_8) == 0
        : VAR_8 > 0)
       && (VAR_6->len == (VAR_13 + VAR_8)
    || ! (FUNC_3 (VAR_6->ptr[VAR_13 + VAR_8])
   || FUNC_2 (VAR_6->ptr[VAR_13 + VAR_8]))))
     VAR_10++;
   if (FUNC_7 (VAR_6->ptr + VAR_13, VAR_5, VAR_9) == 0
       && (VAR_6->len == (VAR_13 + VAR_9)
    || ! (FUNC_3 (VAR_6->ptr[VAR_13 + VAR_9])
   || FUNC_2 (VAR_6->ptr[VAR_13 + VAR_9]))))
     {
       VAR_10--;
       if (VAR_10 == 0)
  {

    VAR_6->len = VAR_11;
    break;
  }
     }
 }


      FUNC_4 (VAR_6, VAR_12);
      VAR_11 = VAR_6->len;
      VAR_12 = VAR_7 (VAR_6);
    }


  return VAR_10 == 0;
}
