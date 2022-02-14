
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stab_handle {int dummy; } ;
struct TYPE_7__ {struct demangle_component* right; struct demangle_component* left; } ;
struct TYPE_6__ {char* string; int len; } ;
struct TYPE_5__ {int len; char* s; } ;
struct TYPE_8__ {TYPE_3__ s_binary; TYPE_2__ s_string; TYPE_1__ s_name; } ;
struct demangle_component {int type; TYPE_4__ u; } ;
typedef int * debug_type ;
typedef int debug_field ;
typedef int bfd_boolean ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int,struct demangle_component*,int,size_t*) ;
 int * FUNC_3 (void*,int const) ;
 int * FUNC_4 (void*,int *) ;
 char* FUNC_5 (void*,int *) ;
 int * FUNC_6 (void*,int) ;
 int * FUNC_7 (void*,int *) ;
 int * FUNC_8 (void*,int) ;
 int * FUNC_9 (void*,int *,int **,int ) ;
 int * FUNC_10 (void*,int,int ) ;
 int * FUNC_11 (void*,int *) ;
 int * FUNC_12 (void*,int *) ;
 int * FUNC_13 (void*) ;
 int * FUNC_14 (void*,int *) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (char*) ;
 int ** FUNC_17 (void*,struct stab_handle*,struct demangle_component*,int *) ;
 int * FUNC_18 (void*,struct stab_handle*,char*,int,int ) ;
 int VAR_7 ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (char const*,char*,int) ;

__attribute__((used)) static debug_type
FUNC_22 (void *VAR_8, struct stab_handle *VAR_9,
        struct demangle_component *VAR_10, debug_type VAR_11,
        bfd_boolean *VAR_12)
{
  debug_type VAR_13;

  if (VAR_12 != ((void*)0))
    *VAR_12 = VAR_5;

  switch (VAR_10->type)
    {


    case 143:
    case 132:
    case 133:
    case 148:
    case 147:
    case 144:
    case 136:
    case 128:
    case 149:
    case 130:
    case 151:
    case 145:
    case 131:
    case 153:
    case 140:
    case 154:
    default:
      FUNC_15 (VAR_7, FUNC_0("Unrecognized demangle component %d\n"),
        (int) VAR_10->type);
      return ((void*)0);

    case 142:
      if (VAR_11 != ((void*)0))
 {
   const debug_field *VAR_14;

   VAR_14 = FUNC_4 (VAR_8, VAR_11);
   if (VAR_14 != ((void*)0))
     {


       for (; *VAR_14 != VAR_0; VAR_14++)
  {
    debug_type VAR_15;
    const char *VAR_16;

    VAR_15 = FUNC_3 (VAR_8, *VAR_14);
    if (VAR_15 == ((void*)0))
      return ((void*)0);
    VAR_16 = FUNC_5 (VAR_8, VAR_15);
    if (VAR_16 != ((void*)0)
        && (int) FUNC_20 (VAR_16) == VAR_10->u.s_name.len
        && FUNC_21 (VAR_16, VAR_10->u.s_name.s, VAR_10->u.s_name.len) == 0)
      return VAR_15;
  }
     }
 }
      return FUNC_18 (VAR_8, VAR_9, VAR_10->u.s_name.s,
        VAR_10->u.s_name.len, VAR_2);

    case 139:
      VAR_11 = FUNC_22 (VAR_8, VAR_9, VAR_10->u.s_binary.left,
          VAR_11, ((void*)0));
      if (VAR_11 == ((void*)0))
 return ((void*)0);
      return FUNC_22 (VAR_8, VAR_9, VAR_10->u.s_binary.right,
       VAR_11, ((void*)0));

    case 134:
      {
 char *VAR_17;
 size_t VAR_18;




 VAR_17 = FUNC_2 (VAR_4 | VAR_3, VAR_10, 20, &VAR_18);
 if (VAR_17 == ((void*)0))
   {
     FUNC_15 (VAR_7, "%s", FUNC_0("Failed to print demangled template\n"));
     return ((void*)0);
   }
 VAR_13 = FUNC_18 (VAR_8, VAR_9, VAR_17, FUNC_20 (VAR_17),
        VAR_1);
 FUNC_16 (VAR_17);
 return VAR_13;
      }

    case 135:
      return FUNC_18 (VAR_8, VAR_9, VAR_10->u.s_string.string,
        VAR_10->u.s_string.len, VAR_2);

    case 137:
    case 129:
    case 150:
    case 141:
    case 138:
      VAR_13 = FUNC_22 (VAR_8, VAR_9, VAR_10->u.s_binary.left, ((void*)0),
     ((void*)0));
      if (VAR_13 == ((void*)0))
 return ((void*)0);

      switch (VAR_10->type)
 {
 default:
   FUNC_1 ();
 case 137:

   return VAR_13;
 case 129:
   return FUNC_14 (VAR_8, VAR_13);
 case 150:
   return FUNC_7 (VAR_8, VAR_13);
 case 141:
   return FUNC_11 (VAR_8, VAR_13);
 case 138:
   return FUNC_12 (VAR_8, VAR_13);
 }

    case 146:
      {
 debug_type *VAR_19;
 bfd_boolean VAR_20;

 if (VAR_10->u.s_binary.left == ((void*)0))
   {




     VAR_13 = FUNC_13 (VAR_8);
   }
 else
   VAR_13 = FUNC_22 (VAR_8, VAR_9, VAR_10->u.s_binary.left, ((void*)0),
         ((void*)0));
 if (VAR_13 == ((void*)0))
   return ((void*)0);

 VAR_19 = FUNC_17 (VAR_8, VAR_9,
       VAR_10->u.s_binary.right,
       &VAR_20);
 if (VAR_19 == ((void*)0))
   return ((void*)0);

 return FUNC_9 (VAR_8, VAR_13, VAR_19, VAR_20);
      }

    case 152:
      {
 char *VAR_21;
 size_t VAR_22;
 debug_type VAR_23;




 VAR_21 = FUNC_2 (VAR_4 | VAR_3, VAR_10, 20, &VAR_22);
 if (VAR_21 == ((void*)0))
   {
     FUNC_15 (VAR_7, "%s", FUNC_0("Couldn't get demangled builtin type\n"));
     return ((void*)0);
   }



 if (FUNC_19 (VAR_21, "signed char") == 0)
   VAR_23 = FUNC_10 (VAR_8, 1, VAR_5);
 else if (FUNC_19 (VAR_21, "bool") == 0)
   VAR_23 = FUNC_6 (VAR_8, 1);
 else if (FUNC_19 (VAR_21, "char") == 0)
   VAR_23 = FUNC_10 (VAR_8, 1, VAR_5);
 else if (FUNC_19 (VAR_21, "double") == 0)
   VAR_23 = FUNC_8 (VAR_8, 8);
 else if (FUNC_19 (VAR_21, "long double") == 0)
   VAR_23 = FUNC_8 (VAR_8, 8);
 else if (FUNC_19 (VAR_21, "float") == 0)
   VAR_23 = FUNC_8 (VAR_8, 4);
 else if (FUNC_19 (VAR_21, "__float128") == 0)
   VAR_23 = FUNC_8 (VAR_8, 16);
 else if (FUNC_19 (VAR_21, "unsigned char") == 0)
   VAR_23 = FUNC_10 (VAR_8, 1, VAR_6);
 else if (FUNC_19 (VAR_21, "int") == 0)
   VAR_23 = FUNC_10 (VAR_8, 4, VAR_5);
 else if (FUNC_19 (VAR_21, "unsigned int") == 0)
   VAR_23 = FUNC_10 (VAR_8, 4, VAR_6);
 else if (FUNC_19 (VAR_21, "long") == 0)
   VAR_23 = FUNC_10 (VAR_8, 4, VAR_5);
 else if (FUNC_19 (VAR_21, "unsigned long") == 0)
   VAR_23 = FUNC_10 (VAR_8, 4, VAR_6);
 else if (FUNC_19 (VAR_21, "__int128") == 0)
   VAR_23 = FUNC_10 (VAR_8, 16, VAR_5);
 else if (FUNC_19 (VAR_21, "unsigned __int128") == 0)
   VAR_23 = FUNC_10 (VAR_8, 16, VAR_6);
 else if (FUNC_19 (VAR_21, "short") == 0)
   VAR_23 = FUNC_10 (VAR_8, 2, VAR_5);
 else if (FUNC_19 (VAR_21, "unsigned short") == 0)
   VAR_23 = FUNC_10 (VAR_8, 2, VAR_6);
 else if (FUNC_19 (VAR_21, "void") == 0)
   VAR_23 = FUNC_13 (VAR_8);
 else if (FUNC_19 (VAR_21, "wchar_t") == 0)
   VAR_23 = FUNC_10 (VAR_8, 4, VAR_6);
 else if (FUNC_19 (VAR_21, "long long") == 0)
   VAR_23 = FUNC_10 (VAR_8, 8, VAR_5);
 else if (FUNC_19 (VAR_21, "unsigned long long") == 0)
   VAR_23 = FUNC_10 (VAR_8, 8, VAR_6);
 else if (FUNC_19 (VAR_21, "...") == 0)
   {
     if (VAR_12 == ((void*)0))
       FUNC_15 (VAR_7, "%s", FUNC_0("Unexpected demangled varargs\n"));
     else
       *VAR_12 = VAR_6;
     VAR_23 = ((void*)0);
   }
 else
   {
     FUNC_15 (VAR_7, "%s", FUNC_0("Unrecognized demangled builtin type\n"));
     VAR_23 = ((void*)0);
   }

 FUNC_16 (VAR_21);

 return VAR_23;
      }
    }
}
