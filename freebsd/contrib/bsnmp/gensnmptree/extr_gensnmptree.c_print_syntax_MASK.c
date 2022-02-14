
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {char* str; scalar_t__ tok; size_t val; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2(u_int VAR_2)
{
 u_int VAR_3;

 for (VAR_3 = 0; VAR_1[VAR_3].str != ((void*)0); VAR_3++)
  if (VAR_1[VAR_3].tok == VAR_0 &&
      VAR_1[VAR_3].val == VAR_2) {
   FUNC_1(" %s", VAR_1[VAR_3].str);
   return;
 }
 FUNC_0();
}
