
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct group {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (char const) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char* FUNC_1 (int *,char const*,int ,int ,struct group const*) ;
 int VAR_3 ;
 int FUNC_2 (struct group const*,char const) ;
 int * VAR_4 ;
 int FUNC_3 (int *,int ,struct group const*) ;
 int FUNC_4 (char,int *) ;
 int FUNC_5 (char const*,char**,int) ;

__attribute__((used)) static char const *
FUNC_6 (register FILE *VAR_5, char const *VAR_6, char VAR_7,
       struct group const *VAR_8)
{
  register char VAR_9;
  register char const *VAR_10 = VAR_6;

  while ((VAR_9 = *VAR_10) != VAR_7 && VAR_9 != 0)
    {
      char const *VAR_11 = ++VAR_10;
      if (VAR_9 == '%')
 switch ((VAR_9 = *VAR_10++))
   {
   case '%':
     break;

   case '(':

     {
       int VAR_12;
       uintmax_t VAR_13[2];
       FILE *VAR_14, *VAR_15;

       for (VAR_12 = 0; VAR_12 < 2; VAR_12++)
  {
    if (FUNC_0 (*VAR_10))
      {
        char *VAR_16;
        VAR_3 = 0;
        VAR_13[VAR_12] = FUNC_5 (VAR_10, &VAR_16, 10);
        if (VAR_3)
   goto bad_format;
        VAR_10 = VAR_16;
      }
    else
      {
        VAR_13[VAR_12] = FUNC_2 (VAR_8, *VAR_10);
        if (VAR_13[VAR_12] == -1)
   goto bad_format;
        VAR_10++;
      }
    if (*VAR_10++ != "=?"[VAR_12])
      goto bad_format;
  }
       if (VAR_13[0] == VAR_13[1])
  VAR_14 = VAR_5, VAR_15 = 0;
       else
  VAR_14 = 0, VAR_15 = VAR_5;
       VAR_10 = FUNC_6 (VAR_14, VAR_10, ':', VAR_8);
       if (*VAR_10)
  {
    VAR_10 = FUNC_6 (VAR_15, VAR_10 + 1, ')', VAR_8);
    if (*VAR_10)
      VAR_10++;
  }
     }
     continue;

   case '<':

     FUNC_3 (VAR_5, VAR_4[VAR_1], &VAR_8[0]);
     continue;

   case '=':

     FUNC_3 (VAR_5, VAR_4[VAR_2], &VAR_8[0]);
     continue;

   case '>':

     FUNC_3 (VAR_5, VAR_4[VAR_0], &VAR_8[1]);
     continue;

   default:
     VAR_10 = FUNC_1 (VAR_5, VAR_10 - 2, 0, 0, VAR_8);
     if (VAR_10)
       continue;

   bad_format:
     VAR_9 = '%';
     VAR_10 = VAR_11;
     break;
   }

      if (VAR_5)
 FUNC_4 (VAR_9, VAR_5);
    }

  return VAR_10;
}
