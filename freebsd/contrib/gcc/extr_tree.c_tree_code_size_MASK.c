
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_vector {int dummy; } ;
struct tree_var_decl {int dummy; } ;
struct tree_value_handle {int dummy; } ;
struct tree_type_decl {int dummy; } ;
struct tree_type {int dummy; } ;
struct tree_struct_field_tag {int dummy; } ;
struct tree_statement_list {int dummy; } ;
struct tree_ssa_name {int dummy; } ;
struct tree_result_decl {int dummy; } ;
struct tree_real_cst {int dummy; } ;
struct tree_parm_decl {int dummy; } ;
struct tree_memory_tag {int dummy; } ;
struct tree_list {int dummy; } ;
struct tree_label_decl {int dummy; } ;
struct tree_int_cst {int dummy; } ;
struct tree_function_decl {int dummy; } ;
struct tree_field_decl {int dummy; } ;
struct tree_exp {int dummy; } ;
struct tree_decl_non_common {int dummy; } ;
struct tree_constructor {int dummy; } ;
struct tree_const_decl {int dummy; } ;
struct tree_complex {int dummy; } ;
struct tree_common {int dummy; } ;
struct tree_block {int dummy; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_2__ {size_t (* tree_size ) (int) ;size_t identifier_size; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;






 int FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 size_t FUNC_3 (int) ;
 size_t FUNC_4 (int) ;
size_t
FUNC_5 (enum tree_code VAR_1)
{
  switch (FUNC_0 (VAR_1))
    {
    case 134:
      {
 switch (VAR_1)
   {
   case 160:
     return sizeof (struct tree_field_decl);
   case 153:
     return sizeof (struct tree_parm_decl);
   case 139:
     return sizeof (struct tree_var_decl);
   case 156:
     return sizeof (struct tree_label_decl);
   case 149:
     return sizeof (struct tree_result_decl);
   case 162:
     return sizeof (struct tree_const_decl);
   case 141:
     return sizeof (struct tree_type_decl);
   case 159:
     return sizeof (struct tree_function_decl);
   case 155:
   case 144:
     return sizeof (struct tree_memory_tag);
   case 145:
     return sizeof (struct tree_struct_field_tag);
   default:
     return sizeof (struct tree_decl_non_common);
   }
      }

    case 129:
      return sizeof (struct tree_type);

    case 131:
    case 132:
    case 130:
    case 136:
    case 128:
    case 137:
      return (sizeof (struct tree_exp)
       + (FUNC_1 (VAR_1) - 1) * sizeof (char *));

    case 135:
      switch (VAR_1)
 {
 case 157: return sizeof (struct tree_int_cst);
 case 150: return sizeof (struct tree_real_cst);
 case 164: return sizeof (struct tree_complex);
 case 138: return sizeof (struct tree_vector);
 case 146: FUNC_2 ();
 default:
   return VAR_0.tree_size (VAR_1);
 }

    case 133:
      switch (VAR_1)
 {
 case 158: return VAR_0.identifier_size;
 case 143: return sizeof (struct tree_list);

 case 161:
 case 151: return sizeof (struct tree_common);

 case 142:
 case 154:
 case 152: FUNC_2 ();

 case 148: return sizeof (struct tree_ssa_name);

 case 147: return sizeof (struct tree_statement_list);
 case 165: return sizeof (struct tree_block);
 case 140: return sizeof (struct tree_value_handle);
 case 163: return sizeof (struct tree_constructor);

 default:
   return VAR_0.tree_size (VAR_1);
 }

    default:
      FUNC_2 ();
    }
}
