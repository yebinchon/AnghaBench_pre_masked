
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct a10fb_softc {int dev; } ;
typedef int clk_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct a10fb_softc *VAR_0, uint64_t VAR_1)
{
 clk_t VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->dev, 0, "lcd_ch1_sclk1", &VAR_2);
 if (VAR_4 != 0) {
  FUNC_3(VAR_0->dev, "cannot find clk 'lcd_ch1_sclk1'\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_1(VAR_0->dev, 0, "lcd_ch1_sclk2", &VAR_3);
 if (VAR_4 != 0) {
  FUNC_3(VAR_0->dev, "cannot find clk 'lcd_ch1_sclk2'\n");
  return (VAR_4);
 }

 VAR_4 = FUNC_2(VAR_3, VAR_1, 0);
 if (VAR_4 != 0) {
  FUNC_3(VAR_0->dev, "cannot set lcd ch1 frequency\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 != 0) {
  FUNC_3(VAR_0->dev, "cannot enable lcd ch1 sclk2\n");
  return (VAR_4);
 }
 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 != 0) {
  FUNC_3(VAR_0->dev, "cannot enable lcd ch1 sclk1\n");
  return (VAR_4);
 }

 return (0);
}
