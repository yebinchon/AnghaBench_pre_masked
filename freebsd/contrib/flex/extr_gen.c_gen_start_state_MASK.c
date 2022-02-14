
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;

void FUNC_2 ()
{
 if (VAR_1) {
  if (VAR_0) {
   FUNC_0
    ("yy_current_state = yy_start_state_list[YY_G(yy_start) + YY_AT_BOL()];");
  }
  else
   FUNC_0
    ("yy_current_state = yy_start_state_list[YY_G(yy_start)];");
 }

 else {
  FUNC_0 ("yy_current_state = YY_G(yy_start);");

  if (VAR_0)
   FUNC_0 ("yy_current_state += YY_AT_BOL();");

  if (VAR_2) {

   FUNC_1 ("m4_ifdef( [[M4_YY_USES_REJECT]],\n[[");
   FUNC_0
    ("YY_G(yy_state_ptr) = YY_G(yy_state_buf);");
   FUNC_0
    ("*YY_G(yy_state_ptr)++ = yy_current_state;");
   FUNC_1 ("]])");
  }
 }
}
