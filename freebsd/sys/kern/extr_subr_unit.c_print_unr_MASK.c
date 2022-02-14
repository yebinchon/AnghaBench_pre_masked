
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct unrhdr {int map; } ;
struct unrb {int map; } ;
struct unr {int len; struct unrhdr* ptr; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct unrhdr *VAR_0, struct unr *VAR_1)
{
 u_int VAR_2;
 struct unrb *VAR_3;

 FUNC_1("  %p len = %5u ", VAR_1, VAR_1->len);
 if (VAR_1->ptr == ((void*)0))
  FUNC_1("free\n");
 else if (VAR_1->ptr == VAR_0)
  FUNC_1("alloc\n");
 else {
  VAR_3 = VAR_1->ptr;
  FUNC_1("bitmap [");
  for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++) {
   if (FUNC_0(VAR_3->map, VAR_2))
    FUNC_1("#");
   else
    FUNC_1(" ");
  }
  FUNC_1("]\n");
 }
}
