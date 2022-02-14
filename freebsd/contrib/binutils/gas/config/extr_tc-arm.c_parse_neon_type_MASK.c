
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neon_type {scalar_t__ elems; TYPE_1__* el; } ;
typedef enum neon_el_type { ____Placeholder_neon_el_type } neon_el_type ;
struct TYPE_2__ {int type; unsigned int size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_5 (struct neon_type *VAR_9, char **VAR_10)
{
  char *VAR_11 = *VAR_10;

  if (VAR_9)
    VAR_9->elems = 0;

  while (VAR_9->elems < VAR_1)
    {
      enum neon_el_type VAR_12 = VAR_7;
      unsigned VAR_13 = -1u;

      if (*VAR_11 != '.')
 break;

      VAR_11++;


      if (FUNC_0 (*VAR_11))
 goto parsesize;

      switch (FUNC_1 (*VAR_11))
 {
 case 'i': VAR_12 = VAR_3; break;
 case 'f': VAR_12 = VAR_2; break;
 case 'p': VAR_12 = VAR_4; break;
 case 's': VAR_12 = VAR_5; break;
 case 'u': VAR_12 = VAR_6; break;
        case 'd':
          VAR_12 = VAR_2;
          VAR_13 = 64;
          VAR_11++;
          goto done;
 default:
   FUNC_3 (FUNC_2("unexpected character `%c' in type specifier"), *VAR_11);
   return VAR_0;
 }

      VAR_11++;


      if (VAR_12 == VAR_2 && !FUNC_0 (*VAR_11))
 VAR_13 = 32;
      else
 {
 parsesize:
   VAR_13 = FUNC_4 (VAR_11, &VAR_11, 10);

   if (VAR_13 != 8 && VAR_13 != 16 && VAR_13 != 32
              && VAR_13 != 64)
            {
              FUNC_3 (FUNC_2("bad size %d in type specifier"), VAR_13);
       return VAR_0;
     }
 }

      done:
      if (VAR_9)
        {
          VAR_9->el[VAR_9->elems].type = VAR_12;
   VAR_9->el[VAR_9->elems].size = VAR_13;
   VAR_9->elems++;
 }
    }


  if (VAR_9->elems == 0)
    return VAR_0;

  *VAR_10 = VAR_11;

  return VAR_8;
}
