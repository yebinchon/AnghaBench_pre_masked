
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int X_add_number; scalar_t__ X_op; } ;
struct TYPE_5__ {int type; TYPE_1__ exp; } ;
struct TYPE_6__ {unsigned int instruction; TYPE_2__ reloc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_2 (void)
{
  unsigned int VAR_3 = VAR_2.reloc.exp.X_add_number;
  FUNC_1 (VAR_2.reloc.exp.X_op != VAR_1,
       FUNC_0("expression too complex"));
  VAR_2.reloc.type = VAR_0;
  VAR_2.instruction |= (VAR_3 & 0xf000) >> 12;
  VAR_2.instruction |= (VAR_3 & 0x0ff0);
  VAR_2.instruction |= (VAR_3 & 0x000f) << 16;
}
