
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct group_reloc_table_entry {scalar_t__ alu_code; } ;
typedef int parse_operand_result ;
struct TYPE_3__ {scalar_t__ type; int exp; } ;
struct TYPE_4__ {TYPE_1__ reloc; int error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char**,struct group_reloc_table_entry**) ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_3 (int *,char**,int ) ;
 scalar_t__ FUNC_4 (char**,int) ;

__attribute__((used)) static parse_operand_result
FUNC_5 (char **VAR_7, int VAR_8)
{




  if (((*VAR_7)[0] == '#' && (*VAR_7)[1] == ':')
      || (*VAR_7)[0] == ':')
    {
      struct group_reloc_table_entry *VAR_9;

      if ((*VAR_7)[0] == '#')
        (*VAR_7) += 2;
      else
        (*VAR_7)++;


      if (FUNC_2 (VAR_7, &VAR_9) == VAR_0)
        {
          VAR_6.error = FUNC_0("unknown group relocation");
          return VAR_3;
        }



      if (FUNC_3 (&VAR_6.reloc.exp, VAR_7, VAR_1))
        return VAR_3;


      VAR_6.reloc.type = VAR_9->alu_code;
      FUNC_1 (VAR_6.reloc.type != 0);

      return VAR_4;
    }
  else
    return FUNC_4 (VAR_7, VAR_8) == VAR_5
           ? VAR_4 : VAR_2;


}
