
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct a10hdmi_softc {int clk_lcd; } ;
typedef int clk_t ;


 int FUNC_0 (int ,int*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(struct a10hdmi_softc *VAR_0, int *VAR_1, int *VAR_2)
{
 uint64_t VAR_3, VAR_4;
 clk_t VAR_5;
 const char *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_0->clk_lcd, &VAR_5);
 if (VAR_7 != 0)
  return (VAR_7);


 VAR_7 = FUNC_0(VAR_0->clk_lcd, &VAR_4);
 if (VAR_7 != 0)
  return (VAR_7);
 VAR_7 = FUNC_0(VAR_5, &VAR_3);
 if (VAR_7 != 0)
  return (VAR_7);
 *VAR_1 = VAR_3 / VAR_4;



 VAR_6 = FUNC_1(VAR_5);
 if (FUNC_3(VAR_6, "pll3") == 0 || FUNC_3(VAR_6, "pll7") == 0)
  *VAR_2 = 0;
 else
  *VAR_2 = 1;

 return (0);
}
