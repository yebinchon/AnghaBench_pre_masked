
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** builtins; } ;
struct ieee_info {TYPE_1__ types; void* dhandle; } ;
typedef enum builtin_types { ____Placeholder_builtin_types } builtin_types ;
typedef int * debug_type ;
typedef int bfd_byte ;


 unsigned int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (void*,int *,int *,int ,int,int ) ;
 int * FUNC_3 (void*,int) ;
 int * FUNC_4 (void*,int,int ) ;
 int * FUNC_5 (void*,int *) ;
 int * FUNC_6 (void*) ;
 int * FUNC_7 (void*,char const*,int *) ;
 int FUNC_8 (struct ieee_info*,int const*,int ) ;

__attribute__((used)) static debug_type
FUNC_9 (struct ieee_info *VAR_4, const bfd_byte *VAR_5,
     unsigned int VAR_6)
{
  void *VAR_7;
  debug_type VAR_8;
  const char *VAR_9;

  if (VAR_6 < VAR_0
      && VAR_4->types.builtins[VAR_6] != VAR_1)
    return VAR_4->types.builtins[VAR_6];

  VAR_7 = VAR_4->dhandle;

  if (VAR_6 >= 32 && VAR_6 < 64)
    {
      VAR_8 = FUNC_5 (VAR_7,
          FUNC_9 (VAR_4, VAR_5, VAR_6 - 32));
      FUNC_1 (VAR_6 < VAR_0);
      VAR_4->types.builtins[VAR_6] = VAR_8;
      return VAR_8;
    }

  switch ((enum builtin_types) VAR_6)
    {
    default:
      FUNC_8 (VAR_4, VAR_5, FUNC_0("unknown builtin type"));
      return ((void*)0);

    case 136:
      VAR_8 = FUNC_6 (VAR_7);
      VAR_9 = ((void*)0);
      break;

    case 128:
      VAR_8 = FUNC_6 (VAR_7);
      VAR_9 = "void";
      break;

    case 141:
      VAR_8 = FUNC_4 (VAR_7, 1, VAR_2);
      VAR_9 = "signed char";
      break;

    case 134:
      VAR_8 = FUNC_4 (VAR_7, 1, VAR_3);
      VAR_9 = "unsigned char";
      break;

    case 137:
      VAR_8 = FUNC_4 (VAR_7, 2, VAR_2);
      VAR_9 = "signed short int";
      break;

    case 129:
      VAR_8 = FUNC_4 (VAR_7, 2, VAR_3);
      VAR_9 = "unsigned short int";
      break;

    case 140:
      VAR_8 = FUNC_4 (VAR_7, 4, VAR_2);
      VAR_9 = "signed long";
      break;

    case 132:
      VAR_8 = FUNC_4 (VAR_7, 4, VAR_3);
      VAR_9 = "unsigned long";
      break;

    case 139:
      VAR_8 = FUNC_4 (VAR_7, 8, VAR_2);
      VAR_9 = "signed long long";
      break;

    case 131:
      VAR_8 = FUNC_4 (VAR_7, 8, VAR_3);
      VAR_9 = "unsigned long long";
      break;

    case 150:
      VAR_8 = FUNC_3 (VAR_7, 4);
      VAR_9 = "float";
      break;

    case 151:
      VAR_8 = FUNC_3 (VAR_7, 8);
      VAR_9 = "double";
      break;

    case 146:


      VAR_8 = FUNC_3 (VAR_7, 12);
      VAR_9 = "long double";
      break;

    case 145:
      VAR_8 = FUNC_3 (VAR_7, 16);
      VAR_9 = "long long double";
      break;

    case 144:
      VAR_8 = FUNC_2 (VAR_7,
        FUNC_9 (VAR_4, VAR_5,
             ((unsigned int)
       152)),
        FUNC_9 (VAR_4, VAR_5,
             ((unsigned int)
       148)),
        0, -1, VAR_3);
      VAR_9 = "QUOTED STRING";
      break;

    case 149:

      VAR_8 = FUNC_4 (VAR_7, 4, VAR_3);
      VAR_9 = "instruction address";
      break;

    case 148:


      VAR_8 = FUNC_4 (VAR_7, 4, VAR_2);
      VAR_9 = "int";
      break;

    case 135:


      VAR_8 = FUNC_4 (VAR_7, 4, VAR_3);
      VAR_9 = "unsigned";
      break;

    case 133:


      VAR_8 = FUNC_4 (VAR_7, 4, VAR_3);
      VAR_9 = "unsigned int";
      break;

    case 152:
      VAR_8 = FUNC_4 (VAR_7, 1, VAR_2);
      VAR_9 = "char";
      break;

    case 147:
      VAR_8 = FUNC_4 (VAR_7, 4, VAR_2);
      VAR_9 = "long";
      break;

    case 143:
      VAR_8 = FUNC_4 (VAR_7, 2, VAR_2);
      VAR_9 = "short";
      break;

    case 130:
      VAR_8 = FUNC_4 (VAR_7, 2, VAR_3);
      VAR_9 = "unsigned short";
      break;

    case 142:
      VAR_8 = FUNC_4 (VAR_7, 2, VAR_2);
      VAR_9 = "short int";
      break;

    case 138:
      VAR_8 = FUNC_4 (VAR_7, 2, VAR_2);
      VAR_9 = "signed short";
      break;

    case 153:
      FUNC_8 (VAR_4, VAR_5, FUNC_0("BCD float type not supported"));
      return VAR_1;
    }

  if (VAR_9 != ((void*)0))
    VAR_8 = FUNC_7 (VAR_7, VAR_9, VAR_8);

  FUNC_1 (VAR_6 < VAR_0);

  VAR_4->types.builtins[VAR_6] = VAR_8;

  return VAR_8;
}
