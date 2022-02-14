
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int midr_mask; int midr_value; int (* quirk_install ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;

void
FUNC_3(void)
{
 u_int VAR_1;
 size_t VAR_2;

 VAR_1 = FUNC_0();

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0); VAR_2++) {
  if ((VAR_1 & VAR_0[VAR_2].midr_mask) ==
      VAR_0[VAR_2].midr_value) {
   VAR_0[VAR_2].quirk_install();
  }
 }
}
