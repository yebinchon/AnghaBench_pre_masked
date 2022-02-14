
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct match {int* with; int* commutative; int* early_clobber; int * use; } ;
typedef int rtx ;
struct TYPE_2__ {int n_operands; char** constraints; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned char,char const*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_4 ;
 unsigned long FUNC_5 (char const*,char**,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6 (rtx VAR_6, struct match *VAR_7)
{
  int VAR_8[VAR_0];
  int VAR_9;
  int VAR_10 = 0;

  FUNC_4 (VAR_6);
  if (! FUNC_3 (0))
    return 0;




  for (VAR_9 = VAR_4.n_operands; --VAR_9 >= 0; )
    VAR_7->with[VAR_9] = VAR_7->commutative[VAR_9] = -1;

  for (VAR_9 = 0; VAR_9 < VAR_4.n_operands; VAR_9++)
    {
      const char *VAR_11;
      char VAR_12;
      int VAR_13 = 0;

      VAR_11 = VAR_4.constraints[VAR_9];

      VAR_8[VAR_9] = 0;
      VAR_7->use[VAR_9] = VAR_1;
      VAR_7->early_clobber[VAR_9] = 0;
      if (*VAR_11 == '=')
 VAR_7->use[VAR_9] = VAR_3;
      else if (*VAR_11 == '+')
 VAR_7->use[VAR_9] = VAR_2;

      for (;*VAR_11 && VAR_13 < VAR_5; VAR_11++)
 if (*VAR_11 == ',')
   VAR_13++;

      while ((VAR_12 = *VAR_11) != '\0' && VAR_12 != ',')
 {
   switch (VAR_12)
     {
     case '=':
       break;
     case '+':
       break;
     case '&':
       VAR_7->early_clobber[VAR_9] = 1;
       break;
     case '%':
       VAR_7->commutative[VAR_9] = VAR_9 + 1;
       VAR_7->commutative[VAR_9 + 1] = VAR_9;
       break;

     case '0': case '1': case '2': case '3': case '4':
     case '5': case '6': case '7': case '8': case '9':
       {
  char *VAR_14;
  unsigned long VAR_15 = FUNC_5 (VAR_11, &VAR_14, 10);
  int VAR_16 = VAR_15;

  VAR_11 = VAR_14;

  if (VAR_16 < VAR_9 && VAR_8[VAR_16])
    continue;
  VAR_7->with[VAR_9] = VAR_16;
  VAR_10 = 1;
  if (VAR_7->commutative[VAR_9] >= 0)
    VAR_7->with[VAR_7->commutative[VAR_9]] = VAR_16;
       }
     continue;

   case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'h':
   case 'j': case 'k': case 'l': case 'p': case 'q': case 't': case 'u':
   case 'v': case 'w': case 'x': case 'y': case 'z': case 'A': case 'B':
   case 'C': case 'D': case 'W': case 'Y': case 'Z':
     if (FUNC_0 (FUNC_2 ((unsigned char) VAR_12, VAR_11) ))
       VAR_8[VAR_9] = 1;
     break;
   }
   VAR_11 += FUNC_1 (VAR_12, VAR_11);
 }
    }
  return VAR_10;
}
