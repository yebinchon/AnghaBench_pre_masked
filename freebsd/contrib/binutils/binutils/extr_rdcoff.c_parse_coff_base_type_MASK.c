
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union internal_auxent {int dummy; } internal_auxent ;
struct coff_types {int * basic; } ;
struct coff_symbols {int dummy; } ;
typedef int debug_type ;
typedef int debug_field ;
typedef int bfd_signed_vma ;
typedef scalar_t__ bfd_boolean ;
typedef int bfd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;







 int VAR_3 ;
 int * FUNC_0 (struct coff_types*,long) ;
 int FUNC_1 (void*,char const**,int *) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int,scalar_t__) ;
 int FUNC_4 (void*,scalar_t__,int ,int *) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,char const*,int ) ;
 int FUNC_7 (int *,struct coff_symbols*,struct coff_types*,union internal_auxent*,void*) ;
 int FUNC_8 (int *,struct coff_symbols*,struct coff_types*,int,union internal_auxent*,void*) ;

__attribute__((used)) static debug_type
FUNC_9 (bfd *VAR_4, struct coff_symbols *VAR_5,
        struct coff_types *VAR_6, long VAR_7, int VAR_8,
        union internal_auxent *VAR_9, void *VAR_10)
{
  debug_type VAR_11;
  bfd_boolean VAR_12;
  const char *VAR_13;
  debug_type *VAR_14;

  if (VAR_8 >= 0
      && VAR_8 <= VAR_3
      && VAR_6->basic[VAR_8] != VAR_0)
    return VAR_6->basic[VAR_8];

  VAR_12 = VAR_2;
  VAR_13 = ((void*)0);

  switch (VAR_8)
    {
    default:
      VAR_11 = FUNC_5 (VAR_10);
      break;

    case 136:
    case 128:
      VAR_11 = FUNC_5 (VAR_10);
      VAR_13 = "void";
      break;

    case 143:
      VAR_11 = FUNC_3 (VAR_10, 1, VAR_1);
      VAR_13 = "char";
      break;

    case 135:
      VAR_11 = FUNC_3 (VAR_10, 2, VAR_1);
      VAR_13 = "short";
      break;

    case 139:

      VAR_11 = FUNC_3 (VAR_10, 4, VAR_1);
      VAR_13 = "int";
      break;

    case 137:
      VAR_11 = FUNC_3 (VAR_10, 4, VAR_1);
      VAR_13 = "long";
      break;

    case 140:
      VAR_11 = FUNC_2 (VAR_10, 4);
      VAR_13 = "float";
      break;

    case 142:
      VAR_11 = FUNC_2 (VAR_10, 8);
      VAR_13 = "double";
      break;

    case 138:
      VAR_11 = FUNC_2 (VAR_10, 12);
      VAR_13 = "long double";
      break;

    case 133:
      VAR_11 = FUNC_3 (VAR_10, 1, VAR_2);
      VAR_13 = "unsigned char";
      break;

    case 129:
      VAR_11 = FUNC_3 (VAR_10, 2, VAR_2);
      VAR_13 = "unsigned short";
      break;

    case 132:
      VAR_11 = FUNC_3 (VAR_10, 4, VAR_2);
      VAR_13 = "unsigned int";
      break;

    case 131:
      VAR_11 = FUNC_3 (VAR_10, 4, VAR_2);
      VAR_13 = "unsigned long";
      break;

    case 134:
      if (VAR_9 == ((void*)0))
 VAR_11 = FUNC_4 (VAR_10, VAR_2, 0,
          (debug_field *) ((void*)0));
      else
 VAR_11 = FUNC_8 (VAR_4, VAR_5, VAR_6, VAR_8, VAR_9,
          VAR_10);

      VAR_14 = FUNC_0 (VAR_6, VAR_7);
      *VAR_14 = VAR_11;

      VAR_12 = VAR_1;
      break;

    case 130:
      if (VAR_9 == ((void*)0))
 VAR_11 = FUNC_4 (VAR_10, VAR_1, 0, (debug_field *) ((void*)0));
      else
 VAR_11 = FUNC_8 (VAR_4, VAR_5, VAR_6, VAR_8, VAR_9,
          VAR_10);

      VAR_14 = FUNC_0 (VAR_6, VAR_7);
      *VAR_14 = VAR_11;

      VAR_12 = VAR_1;
      break;

    case 141:
      if (VAR_9 == ((void*)0))
 VAR_11 = FUNC_1 (VAR_10, (const char **) ((void*)0),
        (bfd_signed_vma *) ((void*)0));
      else
 VAR_11 = FUNC_7 (VAR_4, VAR_5, VAR_6, VAR_9, VAR_10);

      VAR_14 = FUNC_0 (VAR_6, VAR_7);
      *VAR_14 = VAR_11;

      VAR_12 = VAR_1;
      break;
    }

  if (VAR_13 != ((void*)0))
    VAR_11 = FUNC_6 (VAR_10, VAR_13, VAR_11);

  if (VAR_12
      && VAR_8 >= 0
      && VAR_8 <= VAR_3)
    VAR_6->basic[VAR_8] = VAR_11;

  return VAR_11;
}
