
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct edid_info {int edid_ext_block_count; } ;
struct a10hdmi_softc {int edid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct a10hdmi_softc*,int,int*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int ,struct edid_info*) ;

__attribute__((used)) static void
FUNC_3(struct a10hdmi_softc *VAR_3, int *VAR_4, int *VAR_5)
{
 struct edid_info VAR_6;
 uint8_t VAR_7[VAR_2];
 int VAR_8;

 *VAR_4 = *VAR_5 = 0;

 if (FUNC_2(VAR_3->edid, &VAR_6) != 0)
  return;


 for (VAR_8 = 1; VAR_8 <= VAR_6.edid_ext_block_count; VAR_8++) {
  if (FUNC_0(VAR_3, VAR_8, VAR_7) != 0)
   return;

  if (FUNC_1(VAR_7) != 0) {
   *VAR_4 = 1;
   *VAR_5 = ((VAR_7[VAR_0] & VAR_1) != 0);
   return;
  }
 }
}
