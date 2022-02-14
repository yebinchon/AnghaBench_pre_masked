
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char type ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (char*,int) ;
 char* FUNC_13 (char*,int) ;
 char* FUNC_14 (char*,int) ;
 int FUNC_15 (char*) ;
 TYPE_1__* FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (char*) ;
 int FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char*) ;
 scalar_t__ FUNC_23 (char*) ;
 char* FUNC_24 (char*) ;
 char* FUNC_25 (char*) ;
 scalar_t__ FUNC_26 (char*) ;
 char* FUNC_27 (char*) ;
 scalar_t__ FUNC_28 (char*) ;
 scalar_t__ FUNC_29 (char*) ;
 char* FUNC_30 (char*) ;
 scalar_t__ FUNC_31 (char*) ;
 char* FUNC_32 (char*) ;
 scalar_t__ FUNC_33 (char*) ;
 scalar_t__ FUNC_34 (char*) ;
 scalar_t__ FUNC_35 (char*) ;
 scalar_t__ FUNC_36 (char*) ;
 char* FUNC_37 (char*) ;
 int FUNC_38 (char*) ;
 int VAR_0 ;
 int FUNC_39 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_40 (int *) ;
 int FUNC_41 (int *,int ) ;
 int FUNC_42 (int *,int *) ;
 scalar_t__ FUNC_43 (int *) ;
 int FUNC_44 (int *,char*) ;
 int FUNC_45 (int ) ;
 int FUNC_46 (char*,int) ;
 int FUNC_47 (char*,...) ;
 int FUNC_48 (int,char*,...) ;
 int FUNC_49 (char*) ;

void
FUNC_50 (struct type *VAR_2, int VAR_3)
{
  int VAR_4;

  if (VAR_3 == 0)
    FUNC_41 (&VAR_0, 0);

  if (FUNC_21 (VAR_2) > 0
      || (FUNC_8 (VAR_2) && FUNC_22 (VAR_2) > 0))
    {
      struct type **VAR_5
      = (struct type **) FUNC_40 (&VAR_0);

      int VAR_6 = (struct type **) FUNC_43 (&VAR_0)
      - VAR_5;

      while (--VAR_6 >= 0)
 {
   if (VAR_2 == VAR_5[VAR_6])
     {
       FUNC_48 (VAR_3, "type node ");
       FUNC_39 (VAR_2, VAR_1);
       FUNC_47 (" <same as already seen type>\n");
       return;
     }
 }

      FUNC_44 (&VAR_0, VAR_2);
    }

  FUNC_48 (VAR_3, "type node ");
  FUNC_39 (VAR_2, VAR_1);
  FUNC_47 ("\n");
  FUNC_48 (VAR_3, "name '%s' (",
      FUNC_20 (VAR_2) ? FUNC_20 (VAR_2) : "<NULL>");
  FUNC_39 (FUNC_20 (VAR_2), VAR_1);
  FUNC_47 (")\n");
  FUNC_48 (VAR_3, "tagname '%s' (",
      FUNC_30 (VAR_2) ? FUNC_30 (VAR_2) : "<NULL>");
  FUNC_39 (FUNC_30 (VAR_2), VAR_1);
  FUNC_47 (")\n");
  FUNC_48 (VAR_3, "code 0x%x ", FUNC_5 (VAR_2));
  switch (FUNC_5 (VAR_2))
    {
    case 130:
      FUNC_47 ("(TYPE_CODE_UNDEF)");
      break;
    case 139:
      FUNC_47 ("(TYPE_CODE_PTR)");
      break;
    case 152:
      FUNC_47 ("(TYPE_CODE_ARRAY)");
      break;
    case 134:
      FUNC_47 ("(TYPE_CODE_STRUCT)");
      break;
    case 129:
      FUNC_47 ("(TYPE_CODE_UNION)");
      break;
    case 147:
      FUNC_47 ("(TYPE_CODE_ENUM)");
      break;
    case 144:
      FUNC_47 ("(TYPE_CODE_FUNC)");
      break;
    case 143:
      FUNC_47 ("(TYPE_CODE_INT)");
      break;
    case 145:
      FUNC_47 ("(TYPE_CODE_FLT)");
      break;
    case 128:
      FUNC_47 ("(TYPE_CODE_VOID)");
      break;
    case 136:
      FUNC_47 ("(TYPE_CODE_SET)");
      break;
    case 138:
      FUNC_47 ("(TYPE_CODE_RANGE)");
      break;
    case 135:
      FUNC_47 ("(TYPE_CODE_STRING)");
      break;
    case 151:
      FUNC_47 ("(TYPE_CODE_BITSTRING)");
      break;
    case 146:
      FUNC_47 ("(TYPE_CODE_ERROR)");
      break;
    case 142:
      FUNC_47 ("(TYPE_CODE_MEMBER)");
      break;
    case 141:
      FUNC_47 ("(TYPE_CODE_METHOD)");
      break;
    case 137:
      FUNC_47 ("(TYPE_CODE_REF)");
      break;
    case 149:
      FUNC_47 ("(TYPE_CODE_CHAR)");
      break;
    case 150:
      FUNC_47 ("(TYPE_CODE_BOOL)");
      break;
    case 148:
      FUNC_47 ("(TYPE_CODE_COMPLEX)");
      break;
    case 131:
      FUNC_47 ("(TYPE_CODE_TYPEDEF)");
      break;
    case 133:
      FUNC_47 ("(TYPE_CODE_TEMPLATE)");
      break;
    case 132:
      FUNC_47 ("(TYPE_CODE_TEMPLATE_ARG)");
      break;
    case 140:
      FUNC_47 ("(TYPE_CODE_NAMESPACE)");
      break;
    default:
      FUNC_47 ("(UNKNOWN TYPE CODE)");
      break;
    }
  FUNC_49 ("\n");
  FUNC_48 (VAR_3, "length %d\n", FUNC_19 (VAR_2));
  FUNC_48 (VAR_3, "upper_bound_type 0x%x ",
      FUNC_3 (VAR_2));
  FUNC_45 (FUNC_3 (VAR_2));
  FUNC_49 ("\n");
  FUNC_48 (VAR_3, "lower_bound_type 0x%x ",
      FUNC_2 (VAR_2));
  FUNC_45 (FUNC_2 (VAR_2));
  FUNC_49 ("\n");
  FUNC_48 (VAR_3, "objfile ");
  FUNC_39 (FUNC_24 (VAR_2), VAR_1);
  FUNC_47 ("\n");
  FUNC_48 (VAR_3, "target_type ");
  FUNC_39 (FUNC_32 (VAR_2), VAR_1);
  FUNC_47 ("\n");
  if (FUNC_32 (VAR_2) != ((void*)0))
    {
      FUNC_50 (FUNC_32 (VAR_2), VAR_3 + 2);
    }
  FUNC_48 (VAR_3, "pointer_type ");
  FUNC_39 (FUNC_25 (VAR_2), VAR_1);
  FUNC_47 ("\n");
  FUNC_48 (VAR_3, "reference_type ");
  FUNC_39 (FUNC_27 (VAR_2), VAR_1);
  FUNC_47 ("\n");
  FUNC_48 (VAR_3, "type_chain ");
  FUNC_39 (FUNC_4 (VAR_2), VAR_1);
  FUNC_47 ("\n");
  FUNC_48 (VAR_3, "instance_flags 0x%x", FUNC_18 (VAR_2));
  if (FUNC_7 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_CONST");
    }
  if (FUNC_36 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_VOLATILE");
    }
  if (FUNC_6 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_CODE_SPACE");
    }
  if (FUNC_9 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_DATA_SPACE");
    }
  if (FUNC_0 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_ADDRESS_CLASS_1");
    }
  if (FUNC_1 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_ADDRESS_CLASS_2");
    }
  FUNC_49 ("\n");
  FUNC_48 (VAR_3, "flags 0x%x", FUNC_15 (VAR_2));
  if (FUNC_33 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_UNSIGNED");
    }
  if (FUNC_23 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_NOSIGN");
    }
  if (FUNC_29 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_STUB");
    }
  if (FUNC_31 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_TARGET_STUB");
    }
  if (FUNC_28 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_STATIC");
    }
  if (FUNC_26 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_PROTOTYPED");
    }
  if (FUNC_17 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_INCOMPLETE");
    }
  if (FUNC_34 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_VARARGS");
    }



  if (FUNC_35 (VAR_2))
    {
      FUNC_49 (" TYPE_FLAG_VECTOR");
    }
  FUNC_49 ("\n");
  FUNC_48 (VAR_3, "nfields %d ", FUNC_21 (VAR_2));
  FUNC_39 (FUNC_10 (VAR_2), VAR_1);
  FUNC_49 ("\n");
  for (VAR_4 = 0; VAR_4 < FUNC_21 (VAR_2); VAR_4++)
    {
      FUNC_48 (VAR_3 + 2,
   "[%d] bitpos %d bitsize %d type ",
   VAR_4, FUNC_11 (VAR_2, VAR_4),
   FUNC_12 (VAR_2, VAR_4));
      FUNC_39 (FUNC_14 (VAR_2, VAR_4), VAR_1);
      FUNC_47 (" name '%s' (",
         FUNC_13 (VAR_2, VAR_4) != ((void*)0)
         ? FUNC_13 (VAR_2, VAR_4)
         : "<NULL>");
      FUNC_39 (FUNC_13 (VAR_2, VAR_4), VAR_1);
      FUNC_47 (")\n");
      if (FUNC_14 (VAR_2, VAR_4) != ((void*)0))
 {
   FUNC_50 (FUNC_14 (VAR_2, VAR_4), VAR_3 + 4);
 }
    }
  FUNC_48 (VAR_3, "vptr_basetype ");
  FUNC_39 (FUNC_37 (VAR_2), VAR_1);
  FUNC_49 ("\n");
  if (FUNC_37 (VAR_2) != ((void*)0))
    {
      FUNC_50 (FUNC_37 (VAR_2), VAR_3 + 2);
    }
  FUNC_48 (VAR_3, "vptr_fieldno %d\n", FUNC_38 (VAR_2));
  switch (FUNC_5 (VAR_2))
    {
    case 134:
      FUNC_48 (VAR_3, "cplus_stuff ");
      FUNC_39 (FUNC_8 (VAR_2), VAR_1);
      FUNC_49 ("\n");
      FUNC_46 (VAR_2, VAR_3);
      break;

    case 145:
      FUNC_48 (VAR_3, "floatformat ");
      if (FUNC_16 (VAR_2) == ((void*)0)
   || FUNC_16 (VAR_2)->name == ((void*)0))
 FUNC_49 ("(null)");
      else
 FUNC_49 (FUNC_16 (VAR_2)->name);
      FUNC_49 ("\n");
      break;

    default:



      FUNC_48 (VAR_3, "type_specific ");
      FUNC_39 (FUNC_8 (VAR_2), VAR_1);
      if (FUNC_8 (VAR_2) != ((void*)0))
 {
   FUNC_47 (" (unknown data form)");
 }
      FUNC_47 ("\n");
      break;

    }
  if (VAR_3 == 0)
    FUNC_42 (&VAR_0, ((void*)0));
}
