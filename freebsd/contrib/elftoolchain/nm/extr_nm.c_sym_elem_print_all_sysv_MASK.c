
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* size_print_fn ) (TYPE_1__ const*) ;int (* value_print_fn ) (TYPE_1__ const*) ;} ;
struct TYPE_6__ {int st_info; scalar_t__ st_size; } ;
typedef TYPE_1__ GElf_Sym ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char const*) ;







 TYPE_5__ VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_5(char VAR_1, const char *VAR_2, const GElf_Sym *VAR_3,
    const char *VAR_4)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) ||
     VAR_0.value_print_fn == ((void*)0))
  return;

 FUNC_1("%-20s|", VAR_4);
 if (FUNC_0(VAR_1))
  FUNC_2("                ");
 else
  VAR_0.value_print_fn(VAR_3);

 FUNC_2("|   %c  |", VAR_1);

 switch (VAR_3->st_info & 0xf) {
 case 129:
  FUNC_2("%18s|", "OBJECT");
  break;

 case 133:
  FUNC_2("%18s|", "FUNC");
  break;

 case 128:
  FUNC_2("%18s|", "SECTION");
  break;

 case 134:
  FUNC_2("%18s|", "FILE");
  break;

 case 131:
  FUNC_2("%18s|", "LOPROC");
  break;

 case 132:
  FUNC_2("%18s|", "HIPROC");
  break;

 case 130:
 default:
  FUNC_2("%18s|", "NOTYPE");
 }

 if (VAR_3->st_size != 0)
  VAR_0.size_print_fn(VAR_3);
 else
  FUNC_2("                ");

 FUNC_2("|     |%s", VAR_2);
}
