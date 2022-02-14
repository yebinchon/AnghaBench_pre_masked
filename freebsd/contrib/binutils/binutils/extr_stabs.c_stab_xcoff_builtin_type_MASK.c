
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_handle {int ** xcoff_types; } ;
typedef int * debug_type ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int * FUNC_2 (void*,int) ;
 int * FUNC_3 (void*,int) ;
 int * FUNC_4 (void*,int) ;
 int * FUNC_5 (void*,int,int ) ;
 int * FUNC_6 (void*) ;
 int * FUNC_7 (void*,char const*,int *) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static debug_type
FUNC_9 (void *VAR_5, struct stab_handle *VAR_6,
    int VAR_7)
{
  debug_type VAR_8;
  const char *VAR_9;

  if (VAR_7 >= 0 || VAR_7 < -VAR_3)
    {
      FUNC_8 (VAR_4, FUNC_0("Unrecognized XCOFF type %d\n"), VAR_7);
      return VAR_0;
    }
  if (VAR_6->xcoff_types[-VAR_7] != ((void*)0))
    return VAR_6->xcoff_types[-VAR_7];

  switch (-VAR_7)
    {
    case 1:


      VAR_9 = "int";
      VAR_8 = FUNC_5 (VAR_5, 4, VAR_1);
      break;
    case 2:
      VAR_9 = "char";
      VAR_8 = FUNC_5 (VAR_5, 1, VAR_1);
      break;
    case 3:
      VAR_9 = "short";
      VAR_8 = FUNC_5 (VAR_5, 2, VAR_1);
      break;
    case 4:
      VAR_9 = "long";
      VAR_8 = FUNC_5 (VAR_5, 4, VAR_1);
      break;
    case 5:
      VAR_9 = "unsigned char";
      VAR_8 = FUNC_5 (VAR_5, 1, VAR_2);
      break;
    case 6:
      VAR_9 = "signed char";
      VAR_8 = FUNC_5 (VAR_5, 1, VAR_1);
      break;
    case 7:
      VAR_9 = "unsigned short";
      VAR_8 = FUNC_5 (VAR_5, 2, VAR_2);
      break;
    case 8:
      VAR_9 = "unsigned int";
      VAR_8 = FUNC_5 (VAR_5, 4, VAR_2);
      break;
    case 9:
      VAR_9 = "unsigned";
      VAR_8 = FUNC_5 (VAR_5, 4, VAR_2);
    case 10:
      VAR_9 = "unsigned long";
      VAR_8 = FUNC_5 (VAR_5, 4, VAR_2);
      break;
    case 11:
      VAR_9 = "void";
      VAR_8 = FUNC_6 (VAR_5);
      break;
    case 12:

      VAR_9 = "float";
      VAR_8 = FUNC_4 (VAR_5, 4);
      break;
    case 13:

      VAR_9 = "double";
      VAR_8 = FUNC_4 (VAR_5, 8);
      break;
    case 14:



      VAR_9 = "long double";
      VAR_8 = FUNC_4 (VAR_5, 8);
      break;
    case 15:
      VAR_9 = "integer";
      VAR_8 = FUNC_5 (VAR_5, 4, VAR_1);
      break;
    case 16:
      VAR_9 = "boolean";
      VAR_8 = FUNC_2 (VAR_5, 4);
      break;
    case 17:
      VAR_9 = "short real";
      VAR_8 = FUNC_4 (VAR_5, 4);
      break;
    case 18:
      VAR_9 = "real";
      VAR_8 = FUNC_4 (VAR_5, 8);
      break;
    case 19:

      VAR_9 = "stringptr";
      VAR_8 = ((void*)0);
      break;
    case 20:

      VAR_9 = "character";
      VAR_8 = FUNC_5 (VAR_5, 1, VAR_2);
      break;
    case 21:
      VAR_9 = "logical*1";
      VAR_8 = FUNC_2 (VAR_5, 1);
      break;
    case 22:
      VAR_9 = "logical*2";
      VAR_8 = FUNC_2 (VAR_5, 2);
      break;
    case 23:
      VAR_9 = "logical*4";
      VAR_8 = FUNC_2 (VAR_5, 4);
      break;
    case 24:
      VAR_9 = "logical";
      VAR_8 = FUNC_2 (VAR_5, 4);
      break;
    case 25:

      VAR_9 = "complex";
      VAR_8 = FUNC_3 (VAR_5, 8);
      break;
    case 26:

      VAR_9 = "double complex";
      VAR_8 = FUNC_3 (VAR_5, 16);
      break;
    case 27:
      VAR_9 = "integer*1";
      VAR_8 = FUNC_5 (VAR_5, 1, VAR_1);
      break;
    case 28:
      VAR_9 = "integer*2";
      VAR_8 = FUNC_5 (VAR_5, 2, VAR_1);
      break;
    case 29:
      VAR_9 = "integer*4";
      VAR_8 = FUNC_5 (VAR_5, 4, VAR_1);
      break;
    case 30:

      VAR_9 = "wchar";
      VAR_8 = FUNC_5 (VAR_5, 2, VAR_1);
      break;
    case 31:
      VAR_9 = "long long";
      VAR_8 = FUNC_5 (VAR_5, 8, VAR_1);
      break;
    case 32:
      VAR_9 = "unsigned long long";
      VAR_8 = FUNC_5 (VAR_5, 8, VAR_2);
      break;
    case 33:
      VAR_9 = "logical*8";
      VAR_8 = FUNC_2 (VAR_5, 8);
      break;
    case 34:
      VAR_9 = "integer*8";
      VAR_8 = FUNC_5 (VAR_5, 8, VAR_1);
      break;
    default:
      FUNC_1 ();
    }

  VAR_8 = FUNC_7 (VAR_5, VAR_9, VAR_8);

  VAR_6->xcoff_types[-VAR_7] = VAR_8;

  return VAR_8;
}
