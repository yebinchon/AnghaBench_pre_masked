
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
struct flag_desc {int flag; char* desc; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct flag_desc *VAR_0, uint64_t VAR_1)
{
 struct flag_desc *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->flag != 0; VAR_2++) {
  if (VAR_1 & VAR_2->flag) {
   VAR_1 &= ~VAR_2->flag;
   FUNC_0(" %s", VAR_2->desc);
  }
 }
 if (VAR_1 != 0)
  FUNC_0(" unknown (0x%jx)", (uintmax_t)VAR_1);
 FUNC_0("\n");
}
