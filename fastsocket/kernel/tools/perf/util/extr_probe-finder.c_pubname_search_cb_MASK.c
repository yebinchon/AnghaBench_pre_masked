
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pubname_callback_param {int found; int sp_die; scalar_t__ file; int cu_die; int function; } ;
struct TYPE_3__ {int cu_offset; int die_offset; } ;
typedef TYPE_1__ Dwarf_Global ;
typedef int Dwarf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(Dwarf *VAR_3, Dwarf_Global *VAR_4, void *VAR_5)
{
 struct pubname_callback_param *VAR_6 = VAR_5;

 if (FUNC_2(VAR_3, VAR_4->die_offset, VAR_6->sp_die)) {
  if (FUNC_3(VAR_6->sp_die) != VAR_2)
   return VAR_1;

  if (FUNC_0(VAR_6->sp_die, VAR_6->function)) {
   if (!FUNC_2(VAR_3, VAR_4->cu_offset, VAR_6->cu_die))
    return VAR_1;

   if (VAR_6->file &&
       FUNC_4(VAR_6->file, FUNC_1(VAR_6->sp_die)))
    return VAR_1;

   VAR_6->found = 1;
   return VAR_0;
  }
 }

 return VAR_1;
}
