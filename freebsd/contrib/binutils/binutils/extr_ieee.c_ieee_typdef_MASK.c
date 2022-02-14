
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee_write_type {unsigned int indx; char const* name; int unsignedp; int size; scalar_t__ localp; } ;
struct ieee_name_type_hash_entry {struct ieee_name_type* types; } ;
struct ieee_name_type {unsigned int id; struct ieee_name_type* next; int kind; struct ieee_write_type type; } ;
struct ieee_handle {int typedefs; TYPE_1__* type_stack; } ;
struct ieee_buflist {int dummy; } ;
typedef enum builtin_types { ____Placeholder_builtin_types } builtin_types ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {struct ieee_write_type type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ieee_handle*,char const*,unsigned int,int ,int ,scalar_t__,struct ieee_buflist*) ;
 struct ieee_name_type_hash_entry* FUNC_1 (int *,char const*,scalar_t__,scalar_t__) ;
 unsigned int FUNC_2 (struct ieee_handle*) ;
 int FUNC_3 (struct ieee_handle*) ;
 int FUNC_4 (struct ieee_handle*,unsigned int) ;
 int FUNC_5 (struct ieee_name_type*,int ,int) ;
 int FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_8 (void *VAR_4, const char *VAR_5)
{
  struct ieee_handle *VAR_6 = (struct ieee_handle *) VAR_4;
  struct ieee_write_type VAR_7;
  unsigned int VAR_8;
  bfd_boolean VAR_9;
  bfd_boolean VAR_10;
  struct ieee_name_type_hash_entry *VAR_11;
  struct ieee_name_type *VAR_12;

  VAR_7 = VAR_6->type_stack->type;
  VAR_8 = VAR_7.indx;






  VAR_9 = VAR_1;
  if (VAR_8 <= (unsigned int) VAR_3)
    {
      switch ((enum builtin_types) VAR_8)
 {
 default:
   break;

 case 128:
   if (FUNC_6 (VAR_5, "void") == 0)
     VAR_9 = VAR_2;
   break;

 case 140:
 case 149:
   if (FUNC_6 (VAR_5, "signed char") == 0)
     {
       VAR_8 = (unsigned int) 140;
       VAR_9 = VAR_2;
     }
   else if (FUNC_6 (VAR_5, "char") == 0)
     {
       VAR_8 = (unsigned int) 149;
       VAR_9 = VAR_2;
     }
   break;

 case 134:
   if (FUNC_6 (VAR_5, "unsigned char") == 0)
     VAR_9 = VAR_2;
   break;

 case 136:
 case 142:
 case 141:
 case 137:
   if (FUNC_6 (VAR_5, "signed short int") == 0)
     {
       VAR_8 = (unsigned int) 136;
       VAR_9 = VAR_2;
     }
   else if (FUNC_6 (VAR_5, "short") == 0)
     {
       VAR_8 = (unsigned int) 142;
       VAR_9 = VAR_2;
     }
   else if (FUNC_6 (VAR_5, "short int") == 0)
     {
       VAR_8 = (unsigned int) 141;
       VAR_9 = VAR_2;
     }
   else if (FUNC_6 (VAR_5, "signed short") == 0)
     {
       VAR_8 = (unsigned int) 137;
       VAR_9 = VAR_2;
     }
   break;

 case 129:
 case 130:
   if (FUNC_6 (VAR_5, "unsigned short int") == 0
       || FUNC_6 (VAR_5, "short unsigned int") == 0)
     {
       VAR_8 = 129;
       VAR_9 = VAR_2;
     }
   else if (FUNC_6 (VAR_5, "unsigned short") == 0)
     {
       VAR_8 = 130;
       VAR_9 = VAR_2;
     }
   break;

 case 139:
 case 146:
 case 145:
   if (FUNC_6 (VAR_5, "signed long") == 0)
     {
       VAR_8 = 139;
       VAR_9 = VAR_2;
     }
   else if (FUNC_6 (VAR_5, "int") == 0)
     {
       VAR_8 = 146;
       VAR_9 = VAR_2;
     }
   else if (FUNC_6 (VAR_5, "long") == 0
     || FUNC_6 (VAR_5, "long int") == 0)
     {
       VAR_8 = 145;
       VAR_9 = VAR_2;
     }
   break;

 case 132:
 case 135:
 case 133:
   if (FUNC_6 (VAR_5, "unsigned long") == 0
       || FUNC_6 (VAR_5, "long unsigned int") == 0)
     {
       VAR_8 = 132;
       VAR_9 = VAR_2;
     }
   else if (FUNC_6 (VAR_5, "unsigned") == 0)
     {
       VAR_8 = 135;
       VAR_9 = VAR_2;
     }
   else if (FUNC_6 (VAR_5, "unsigned int") == 0)
     {
       VAR_8 = 133;
       VAR_9 = VAR_2;
     }
   break;

 case 138:
   if (FUNC_6 (VAR_5, "signed long long") == 0
       || FUNC_6 (VAR_5, "long long int") == 0)
     VAR_9 = VAR_2;
   break;

 case 131:
   if (FUNC_6 (VAR_5, "unsigned long long") == 0
       || FUNC_6 (VAR_5, "long long unsigned int") == 0)
     VAR_9 = VAR_2;
   break;

 case 147:
   if (FUNC_6 (VAR_5, "float") == 0)
     VAR_9 = VAR_2;
   break;

 case 148:
   if (FUNC_6 (VAR_5, "double") == 0)
     VAR_9 = VAR_2;
   break;

 case 144:
   if (FUNC_6 (VAR_5, "long double") == 0)
     VAR_9 = VAR_2;
   break;

 case 143:
   if (FUNC_6 (VAR_5, "long long double") == 0)
     VAR_9 = VAR_2;
   break;
 }

      if (VAR_9)
 VAR_7.indx = VAR_8;
    }

  VAR_11 = FUNC_1 (&VAR_6->typedefs, VAR_5, VAR_2, VAR_1);
  if (VAR_11 == ((void*)0))
    return VAR_1;


  VAR_10 = VAR_7.localp;
  for (VAR_12 = VAR_11->types; VAR_12 != ((void*)0); VAR_12 = VAR_12->next)
    {
      if (VAR_12->id == VAR_8)
 {


   if (! VAR_12->type.localp)
     {
       FUNC_3 (VAR_6);
       return VAR_2;
     }
 }
      else
 {

   VAR_10 = VAR_2;
 }
    }



  VAR_12 = (struct ieee_name_type *) FUNC_7 (sizeof *VAR_12);
  FUNC_5 (VAR_12, 0, sizeof *VAR_12);
  VAR_12->id = VAR_8;
  VAR_12->type = VAR_7;
  VAR_12->type.name = VAR_5;
  VAR_12->type.localp = VAR_10;
  VAR_12->kind = VAR_0;

  VAR_12->next = VAR_11->types;
  VAR_11->types = VAR_12;

  if (VAR_9)
    {


      FUNC_3 (VAR_6);
      return VAR_2;
    }

  VAR_8 = FUNC_2 (VAR_6);

  if (! FUNC_0 (VAR_6, VAR_5, (unsigned int) -1, VAR_7.size,
    VAR_7.unsignedp, VAR_10,
    (struct ieee_buflist *) ((void*)0))
      || ! FUNC_4 (VAR_6, 'T')
      || ! FUNC_4 (VAR_6, VAR_8))
    return VAR_1;




  (void) FUNC_2 (VAR_6);

  return VAR_2;
}
