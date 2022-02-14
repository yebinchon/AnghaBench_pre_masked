
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum pmc_mode { ____Placeholder_pmc_mode } pmc_mode ;
typedef enum pmc_disp { ____Placeholder_pmc_disp } pmc_disp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(int VAR_7, enum pmc_mode VAR_8)
{
 enum pmc_disp VAR_9;

 FUNC_5(&VAR_6, VAR_5);

 FUNC_0(VAR_2,VAR_0,1, "can-allocate-row ri=%d mode=%d", VAR_7, VAR_8);

 if (FUNC_1(VAR_8))
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_4;
 if (!FUNC_2(VAR_7) &&
     !(VAR_9 == VAR_4 && FUNC_4(VAR_7)) &&
     !(VAR_9 == VAR_3 && FUNC_3(VAR_7)))
  return VAR_1;





 FUNC_0(VAR_2,VAR_0,2, "can-allocate-row ri=%d mode=%d ok", VAR_7, VAR_8);

 return 0;

}
