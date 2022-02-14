
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct unwind_state {int update_mask; int * registers; int start_pc; } ;
typedef scalar_t__ db_expr_t ;
typedef scalar_t__ c_db_sym_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__,char const**,scalar_t__*) ;
 int FUNC_4 (struct unwind_state*,int) ;

__attribute__((used)) static void
FUNC_5(struct unwind_state *VAR_8)
{
 const char *VAR_9;
 db_expr_t VAR_10;
 db_expr_t VAR_11;
 c_db_sym_t VAR_12;
 u_int VAR_13, VAR_14;
 char *VAR_15;
 uint16_t VAR_16;
 bool VAR_17;

 VAR_17 = 0;
 while (!VAR_17) {
  VAR_17 = FUNC_4(VAR_8, 1);


  VAR_12 = FUNC_2(VAR_8->start_pc, VAR_1, &VAR_11);
  if (VAR_12 == VAR_0) {
   VAR_10 = 0;
   VAR_9 = "(null)";
  } else
   FUNC_3(VAR_12, &VAR_9, &VAR_10);
  FUNC_0("%s() at ", VAR_9);
  FUNC_1(VAR_8->start_pc, VAR_2);
  FUNC_0("\n");
  FUNC_0("\t pc = 0x%08x  lr = 0x%08x (", VAR_8->start_pc,
      VAR_8->registers[VAR_4]);
  FUNC_1(VAR_8->registers[VAR_4], VAR_2);
  FUNC_0(")\n");
  FUNC_0("\t sp = 0x%08x  fp = 0x%08x",
      VAR_8->registers[VAR_6], VAR_8->registers[VAR_3]);


  VAR_16 = VAR_8->update_mask &
      ~((1 << VAR_6) | (1 << VAR_3) | (1 << VAR_4) | (1 << VAR_5));
  VAR_15 = "\n\t";
  for (VAR_14 = 0, VAR_13 = 0; VAR_16 != 0; VAR_16 >>= 1, VAR_13++) {
   if ((VAR_16 & 1) != 0) {
    FUNC_0("%s%sr%d = 0x%08x", VAR_15,
        (VAR_13 < 10) ? " " : "", VAR_13,
        VAR_8->registers[VAR_13]);
    VAR_14++;
    if (VAR_14 == 2) {
     VAR_15 = "\n\t";
     VAR_14 = 0;
    } else
     VAR_15 = " ";

   }
  }
  FUNC_0("\n");

  if (VAR_17)
   break;
  if (VAR_8->registers[VAR_5] < VAR_7) {
   FUNC_0("Unable to unwind into user mode\n");
   VAR_17 = 1;
  } else if (VAR_8->update_mask == 0) {
   FUNC_0("Unwind failure (no registers changed)\n");
   VAR_17 = 1;
  }
 }
}
