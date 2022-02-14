
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* type; } ;
struct TYPE_6__ {TYPE_2__ s_builtin; } ;
struct demangle_component {int type; TYPE_3__ u; } ;
struct d_info {int expansion; } ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int * VAR_8 ;
 int FUNC_2 (struct d_info*,struct demangle_component*) ;
 int FUNC_3 (struct d_info*,int) ;
 struct demangle_component* FUNC_4 (struct d_info*) ;
 struct demangle_component* FUNC_5 (struct d_info*) ;
 struct demangle_component** FUNC_6 (struct d_info*,struct demangle_component**,int ) ;
 struct demangle_component* FUNC_7 (struct d_info*) ;
 struct demangle_component* FUNC_8 (struct d_info*,int *) ;
 struct demangle_component* FUNC_9 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 char FUNC_10 (struct d_info*) ;
 char FUNC_11 (struct d_info*) ;
 struct demangle_component* FUNC_12 (struct d_info*) ;
 struct demangle_component* FUNC_13 (struct d_info*) ;
 struct demangle_component* FUNC_14 (struct d_info*,int ) ;
 struct demangle_component* FUNC_15 (struct d_info*) ;
 struct demangle_component* FUNC_16 (struct d_info*) ;

struct demangle_component *
FUNC_17 (struct d_info *VAR_9)
{
  char VAR_10;
  struct demangle_component *VAR_11;
  int VAR_12;
  VAR_10 = FUNC_10 (VAR_9);
  if (VAR_10 == 'r' || VAR_10 == 'V' || VAR_10 == 'K')
    {
      struct demangle_component **VAR_13;

      VAR_13 = FUNC_6 (VAR_9, &VAR_11, 0);
      if (VAR_13 == ((void*)0))
 return ((void*)0);
      *VAR_13 = FUNC_17 (VAR_9);
      if (! *VAR_13 || ! FUNC_2 (VAR_9, VAR_11))
 return ((void*)0);
      return VAR_11;
    }

  VAR_12 = 1;

  switch (VAR_10)
    {
    case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g':
    case 'h': case 'i': case 'j': case 'l': case 'm': case 'n':
    case 'o': case 's': case 't':
    case 'v': case 'w': case 'x': case 'y': case 'z':
      VAR_11 = FUNC_8 (VAR_9,
     &VAR_8[VAR_10 - 'a']);
      VAR_9->expansion += VAR_11->u.s_builtin.type->len;
      VAR_12 = 0;
      FUNC_3 (VAR_9, 1);
      break;

    case 'u':
      FUNC_3 (VAR_9, 1);
      VAR_11 = FUNC_9 (VAR_9, VAR_6,
    FUNC_13 (VAR_9), ((void*)0));
      break;

    case 'F':
      VAR_11 = FUNC_7 (VAR_9);
      break;

    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
    case 'N':
    case 'Z':
      VAR_11 = FUNC_5 (VAR_9);
      break;

    case 'A':
      VAR_11 = FUNC_4 (VAR_9);
      break;

    case 'M':
      VAR_11 = FUNC_12 (VAR_9);
      break;

    case 'T':
      VAR_11 = FUNC_16 (VAR_9);
      if (FUNC_10 (VAR_9) == 'I')
 {



   if (! FUNC_2 (VAR_9, VAR_11))
     return ((void*)0);
   VAR_11 = FUNC_9 (VAR_9, VAR_5, VAR_11,
        FUNC_15 (VAR_9));
 }
      break;

    case 'S':


      {
 char VAR_14;

 VAR_14 = FUNC_11 (VAR_9);
 if (FUNC_0 (VAR_14)
     || VAR_14 == '_'
     || FUNC_1 (VAR_14))
   {
     VAR_11 = FUNC_14 (VAR_9, 0);


     if (FUNC_10 (VAR_9) == 'I')
       VAR_11 = FUNC_9 (VAR_9, VAR_5, VAR_11,
     FUNC_15 (VAR_9));
     else
       VAR_12 = 0;
   }
 else
   {
     VAR_11 = FUNC_5 (VAR_9);




     if (VAR_11 != ((void*)0) && VAR_11->type == VAR_4)
       VAR_12 = 0;
   }
      }
      break;

    case 'P':
      FUNC_3 (VAR_9, 1);
      VAR_11 = FUNC_9 (VAR_9, VAR_2,
    FUNC_17 (VAR_9), ((void*)0));
      break;

    case 'R':
      FUNC_3 (VAR_9, 1);
      VAR_11 = FUNC_9 (VAR_9, VAR_3,
    FUNC_17 (VAR_9), ((void*)0));
      break;

    case 'C':
      FUNC_3 (VAR_9, 1);
      VAR_11 = FUNC_9 (VAR_9, VAR_0,
    FUNC_17 (VAR_9), ((void*)0));
      break;

    case 'G':
      FUNC_3 (VAR_9, 1);
      VAR_11 = FUNC_9 (VAR_9, VAR_1,
    FUNC_17 (VAR_9), ((void*)0));
      break;

    case 'U':
      FUNC_3 (VAR_9, 1);
      VAR_11 = FUNC_13 (VAR_9);
      VAR_11 = FUNC_9 (VAR_9, VAR_7,
    FUNC_17 (VAR_9), VAR_11);
      break;

    default:
      return ((void*)0);
    }

  if (VAR_12)
    {
      if (! FUNC_2 (VAR_9, VAR_11))
 return ((void*)0);
    }

  return VAR_11;
}
