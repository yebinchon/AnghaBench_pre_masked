
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_scr {void* bus_widths; void* sda_vsn; } ;


 int FUNC_0 (struct mmc_scr*,int ,int) ;
 void* FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(uint32_t *VAR_0, struct mmc_scr *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_2 = FUNC_1(VAR_0, 64, 60, 4);
 if (VAR_2 != 0) {
  FUNC_2("Unrecognised SCR structure version %d\n",
      VAR_2);
  return;
 }
 VAR_1->sda_vsn = FUNC_1(VAR_0, 64, 56, 4);
 VAR_1->bus_widths = FUNC_1(VAR_0, 64, 48, 4);
}
