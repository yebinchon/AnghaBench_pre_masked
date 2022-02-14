
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uni_msg {int* b_rptr; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct uni_msg*) ;

__attribute__((used)) static void
FUNC_2(struct uni_msg *VAR_0)
{
 u_int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++) {
  if (VAR_1 % 16 == 0)
   FUNC_0("%06o ", VAR_1);
  if (VAR_1 % 16 == 8)
   FUNC_0("  ");
  FUNC_0(" %02x", VAR_0->b_rptr[VAR_1]);
  if (VAR_1 % 16 == 15)
   FUNC_0("\n");
 }
 if (VAR_1 % 16 != 0)
  FUNC_0("\n");
}
