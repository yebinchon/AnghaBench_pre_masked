
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * drv_priv; } ;
struct TYPE_3__ {int (* global_deinit ) (int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 TYPE_1__** VAR_1 ;

__attribute__((used)) static void FUNC_8(const char *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4] && VAR_0.drv_priv; VAR_4++) {
  if (!VAR_0.drv_priv[VAR_4])
   continue;
  VAR_1[VAR_4]->global_deinit(VAR_0.drv_priv[VAR_4]);
 }
 FUNC_4(VAR_0.drv_priv);
 VAR_0.drv_priv = ((void*)0);





 FUNC_5();

 if (VAR_3)
  FUNC_2();


 FUNC_0();


 FUNC_1();

 FUNC_3(VAR_2);
}
