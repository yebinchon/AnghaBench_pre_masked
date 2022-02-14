
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* operand_types; int name; } ;
struct TYPE_4__ {int* types; TYPE_1__ tm; int ** seg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int
FUNC_2 (void)
{
  int VAR_4 = (VAR_3.types[0] & VAR_0) ? 0 : 1;
  if ((VAR_3.tm.operand_types[VAR_4] & VAR_1) != 0)
    {
      if (VAR_3.seg[0] != ((void*)0) && VAR_3.seg[0] != &VAR_2)
 {
   FUNC_1 (FUNC_0("`%s' operand %d must use `%%es' segment"),
    VAR_3.tm.name,
    VAR_4 + 1);
   return 0;
 }




      VAR_3.seg[0] = VAR_3.seg[1];
    }
  else if ((VAR_3.tm.operand_types[VAR_4 + 1] & VAR_1) != 0)
    {
      if (VAR_3.seg[1] != ((void*)0) && VAR_3.seg[1] != &VAR_2)
 {
   FUNC_1 (FUNC_0("`%s' operand %d must use `%%es' segment"),
    VAR_3.tm.name,
    VAR_4 + 2);
   return 0;
 }
    }
  return 1;
}
