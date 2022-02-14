
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pc_rel; int type; } ;
struct TYPE_4__ {int cond; int instruction; int size_req; int relax; TYPE_1__ reloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_10;
  int VAR_11;

  if (VAR_7)
    {


      VAR_11 = VAR_5;

      FUNC_3 (VAR_7 != 0x10, VAR_0);
    }
  else
    VAR_11 = VAR_8.cond;

  if (VAR_11 != VAR_5)
    VAR_10 = VAR_6;
  else
    VAR_10 = VAR_8.instruction;

  if (VAR_9 && VAR_8.size_req == 4)
    {
      VAR_8.instruction = FUNC_1(VAR_10);
      if (VAR_11 == VAR_5)
 VAR_8.reloc.type = VAR_3;
      else
 {
   FUNC_2 (VAR_11 != 0xF);
   VAR_8.instruction |= VAR_11 << 22;
   VAR_8.reloc.type = VAR_2;
 }
    }
  else
    {
      VAR_8.instruction = FUNC_0(VAR_10);
      if (VAR_11 == VAR_5)
 VAR_8.reloc.type = VAR_1;
      else
 {
   VAR_8.instruction |= VAR_11 << 8;
   VAR_8.reloc.type = VAR_4;
 }

      if (VAR_9 && VAR_8.size_req != 2)
 VAR_8.relax = VAR_10;
    }

  VAR_8.reloc.pc_rel = 1;
}
