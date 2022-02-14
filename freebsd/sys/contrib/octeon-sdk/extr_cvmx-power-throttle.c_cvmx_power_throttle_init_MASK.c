
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cvmx_power_throttle_rfield_t {int present; int pos; int len; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 struct cvmx_power_throttle_rfield_t* VAR_6 ;

__attribute__((used)) static void FUNC_1(void)
{



    if (FUNC_0(VAR_5))
    {
        int VAR_7;
 struct cvmx_power_throttle_rfield_t *VAR_8;

        for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
     VAR_6[VAR_7].present = 1;

        if (FUNC_0(VAR_4))
 {



     VAR_8 = &VAR_6[VAR_0];
     VAR_8->present = 0;
     VAR_8 = &VAR_6[VAR_2];
     VAR_8->present = 0;
 }
 else
 {



     VAR_8 = &VAR_6[VAR_3];
     VAR_8->pos = 29;
     VAR_8->len = 3;
 }
    }
}
