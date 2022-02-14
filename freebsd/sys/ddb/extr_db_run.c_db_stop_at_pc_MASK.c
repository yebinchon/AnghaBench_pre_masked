
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int db_expr_t ;
typedef TYPE_1__* db_breakpoint_t ;
typedef void* db_addr_t ;
struct TYPE_3__ {scalar_t__ count; scalar_t__ init_count; } ;
typedef void* FIXUP_PC_AFTER_BREAK ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* FUNC_7 (void*) ;
 int FUNC_8 (void*,int,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;

bool
FUNC_16(int VAR_12, int VAR_13, bool *VAR_14, bool *VAR_15)
{
 db_addr_t VAR_16;
 db_breakpoint_t VAR_17;

 *VAR_14 = FUNC_0(VAR_12, VAR_13);
 *VAR_15 = FUNC_2(VAR_12, VAR_13);
 VAR_16 = FUNC_3();
 if (FUNC_9(VAR_16))
  *VAR_14 = 0;

 FUNC_5();
 FUNC_4();
 FUNC_6();
 VAR_17 = FUNC_7(VAR_16);
 if (VAR_17) {
     if (--VAR_17->count == 0) {
  VAR_17->count = VAR_17->init_count;
  *VAR_14 = 1;
  return (1);
     }
     return (0);
 } else if (*VAR_14) {



 }

 *VAR_14 = 0;
 if (VAR_10 == VAR_4) {
     VAR_10 = VAR_2;
     return (0);
 }
 if (VAR_10 == VAR_3) {
     return (0);
 }
 if (VAR_10 == VAR_5) {
     if (--VAR_9 > 0) {
  if (VAR_11) {
      FUNC_11("\t\t");
      FUNC_10(VAR_16);
  }
  return (0);
     }
 }
 if (VAR_10 == VAR_6) {

     db_expr_t VAR_18;

     VAR_18 = FUNC_8(VAR_16, sizeof(int), 0);
     if (!FUNC_14(VAR_18) &&
  (!FUNC_13(VAR_18) || --VAR_7 != 0)) {
  if (VAR_11) {
      if (FUNC_12(VAR_18) || FUNC_13(VAR_18)) {
   int VAR_19;

   FUNC_11("[after %6d]     ", VAR_8);
   for (VAR_19 = VAR_7; --VAR_19 > 0; )
       FUNC_11("  ");
   FUNC_10(VAR_16);
      }
  }
  if (FUNC_12(VAR_18))
      VAR_7++;
  return (0);
     }
 }
 if (VAR_10 == VAR_1) {

     db_expr_t VAR_20;

     VAR_20 = FUNC_8(VAR_16, sizeof(int), 0);
     if (!FUNC_12(VAR_20) &&
  !FUNC_13(VAR_20) &&
  !FUNC_14(VAR_20)) {
  return (0);
     }
 }
 return (1);
}
