
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int offset; } ;
struct dwarf2_cu {TYPE_1__ header; } ;
struct attribute {int form; } ;


 unsigned int FUNC_0 (struct attribute*) ;






 unsigned int FUNC_1 (struct attribute*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static unsigned int
FUNC_4 (struct attribute *VAR_1, struct dwarf2_cu *VAR_2)
{
  unsigned int VAR_3 = 0;

  switch (VAR_1->form)
    {
    case 129:
      VAR_3 = FUNC_0 (VAR_1);
      break;
    case 133:
    case 132:
    case 131:
    case 130:
    case 128:
      VAR_3 = VAR_2->header.offset + FUNC_1 (VAR_1);
      break;
    default:
      FUNC_2 (&VAR_0,
   "unsupported die ref attribute form: '%s'",
   FUNC_3 (VAR_1->form));
    }
  return VAR_3;
}
