
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
struct dieinfo {char* die; int die_length; int at_fund_type; int at_ordering; int at_bit_offset; int at_sibling; int at_stmt_list; int has_at_stmt_list; int at_low_pc; int has_at_low_pc; int at_high_pc; int at_language; int at_user_def_type; int at_byte_size; int has_at_byte_size; int at_bit_size; int at_member; int at_discr; char* at_location; char* at_mod_fund_type; char* at_subscr_data; char* at_mod_u_d_type; char* at_element_list; int short_element_list; char* at_discr_value; char* at_string_length; char* at_name; char* at_comp_dir; char* at_producer; int at_start_scope; int at_stride_size; int at_src_info; char* at_prototyped; } ;
 int VAR_0 ;
 int VAR_1 ;






 unsigned short FUNC_0 (unsigned short) ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct objfile*) ;
 int FUNC_2 (unsigned short) ;
 int VAR_6 ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char) ;
 int VAR_8 ;
 int FUNC_6 (char*,int,int ,struct objfile*) ;
 int FUNC_7 (int ,int ,unsigned short) ;

__attribute__((used)) static void
FUNC_8 (struct dieinfo *VAR_9, struct objfile *VAR_10)
{
  char *VAR_11;
  char *VAR_12;
  unsigned short VAR_13;
  unsigned short VAR_14;
  int VAR_15;

  VAR_7++;
  VAR_11 = VAR_9->die;
  VAR_12 = VAR_11 + VAR_9->die_length;
  VAR_11 += VAR_4 + VAR_5;
  while (VAR_11 < VAR_12)
    {
      VAR_13 = FUNC_6 (VAR_11, VAR_3, VAR_2, VAR_10);
      VAR_11 += VAR_3;
      VAR_15 = FUNC_2 (VAR_13);
      if (VAR_15 == -1)
 {
   FUNC_3 (&VAR_8,
       "DIE @ 0x%x \"%s\", unknown attribute length, skipped remaining attributes",
       VAR_0, VAR_1);
   VAR_11 = VAR_12;
   continue;
 }
      switch (VAR_13)
 {
 case 156:
   VAR_9->at_fund_type = FUNC_6 (VAR_11, VAR_15, VAR_2,
           VAR_10);
   break;
 case 147:
   VAR_9->at_ordering = FUNC_6 (VAR_11, VAR_15, VAR_2,
          VAR_10);
   break;
 case 163:
   VAR_9->at_bit_offset = FUNC_6 (VAR_11, VAR_15, VAR_2,
            VAR_10);
   break;
 case 143:
   VAR_9->at_sibling = FUNC_6 (VAR_11, VAR_15, VAR_2,
         VAR_10);
   break;
 case 140:
   VAR_9->at_stmt_list = FUNC_6 (VAR_11, VAR_15, VAR_2,
           VAR_10);
   VAR_9->has_at_stmt_list = 1;
   break;
 case 152:
   VAR_9->at_low_pc = FUNC_6 (VAR_11, VAR_15, VAR_2,
        VAR_10);
   VAR_9->at_low_pc += VAR_6;
   VAR_9->has_at_low_pc = 1;
   break;
 case 155:
   VAR_9->at_high_pc = FUNC_6 (VAR_11, VAR_15, VAR_2,
         VAR_10);
   VAR_9->at_high_pc += VAR_6;
   break;
 case 154:
   VAR_9->at_language = FUNC_6 (VAR_11, VAR_15, VAR_2,
          VAR_10);
   break;
 case 136:
   VAR_9->at_user_def_type = FUNC_6 (VAR_11, VAR_15,
        VAR_2, VAR_10);
   break;
 case 161:
   VAR_9->at_byte_size = FUNC_6 (VAR_11, VAR_15, VAR_2,
           VAR_10);
   VAR_9->has_at_byte_size = 1;
   break;
 case 162:
   VAR_9->at_bit_size = FUNC_6 (VAR_11, VAR_15, VAR_2,
          VAR_10);
   break;
 case 151:
   VAR_9->at_member = FUNC_6 (VAR_11, VAR_15, VAR_2,
        VAR_10);
   break;
 case 159:
   VAR_9->at_discr = FUNC_6 (VAR_11, VAR_15, VAR_2,
       VAR_10);
   break;
 case 153:
   VAR_9->at_location = VAR_11;
   break;
 case 150:
   VAR_9->at_mod_fund_type = VAR_11;
   break;
 case 137:
   VAR_9->at_subscr_data = VAR_11;
   break;
 case 149:
   VAR_9->at_mod_u_d_type = VAR_11;
   break;
 case 157:
   VAR_9->at_element_list = VAR_11;
   VAR_9->short_element_list = 0;
   break;
 case 144:
   VAR_9->at_element_list = VAR_11;
   VAR_9->short_element_list = 1;
   break;
 case 158:
   VAR_9->at_discr_value = VAR_11;
   break;
 case 138:
   VAR_9->at_string_length = VAR_11;
   break;
 case 148:
   VAR_9->at_name = VAR_11;
   break;
 case 160:


   VAR_9->at_comp_dir = FUNC_5 (VAR_11, ':');
   if (VAR_9->at_comp_dir != ((void*)0))
     {
       VAR_9->at_comp_dir++;
     }
   else
     {
       VAR_9->at_comp_dir = VAR_11;
     }
   break;
 case 146:
   VAR_9->at_producer = VAR_11;
   break;
 case 141:
   VAR_9->at_start_scope = FUNC_6 (VAR_11, VAR_15, VAR_2,
      VAR_10);
   break;
 case 139:
   VAR_9->at_stride_size = FUNC_6 (VAR_11, VAR_15, VAR_2,
      VAR_10);
   break;
 case 142:
   VAR_9->at_src_info = FUNC_6 (VAR_11, VAR_15, VAR_2,
          VAR_10);
   break;
 case 145:
   VAR_9->at_prototyped = VAR_11;
   break;
 default:





   break;
 }
      VAR_14 = FUNC_0 (VAR_13);
      switch (VAR_14)
 {
 case 132:
   VAR_11 += 2;
   break;
 case 131:
 case 129:
   VAR_11 += 4;
   break;
 case 130:
   VAR_11 += 8;
   break;
 case 135:
   VAR_11 += FUNC_1 (VAR_10);
   break;
 case 134:
   VAR_11 += 2 + FUNC_6 (VAR_11, VAR_15, VAR_2, VAR_10);
   break;
 case 133:
   VAR_11 += 4 + FUNC_6 (VAR_11, VAR_15, VAR_2, VAR_10);
   break;
 case 128:
   VAR_11 += FUNC_4 (VAR_11) + 1;
   break;
 default:
   FUNC_7 (VAR_0, VAR_1, VAR_14);
   VAR_11 = VAR_12;
   break;
 }
    }
}
