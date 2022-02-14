
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,...) ;

__attribute__((used)) static void FUNC_1(void)
{
 if (VAR_6 > VAR_2) {
  FUNC_0("mlx4_en: WARNING: illegal module parameter pfctx 0x%x - should be in range 0-0x%x, will be changed to default (0)\n",
   VAR_6, VAR_2);
  VAR_6 = 0;
 }

 if (VAR_5 > VAR_1) {
  FUNC_0("mlx4_en: WARNING: illegal module parameter pfcrx 0x%x - should be in range 0-0x%x, will be changed to default (0)\n",
   VAR_5, VAR_1);
  VAR_5 = 0;
 }

 if (VAR_4 < VAR_3 || VAR_4 > VAR_0) {
  FUNC_0("mlx4_en: WARNING: illegal module parameter inline_thold %d - should be in range %d-%d, will be changed to default (%d)\n",
   VAR_4, VAR_3, VAR_0, VAR_0);
  VAR_4 = VAR_0;
 }
}
