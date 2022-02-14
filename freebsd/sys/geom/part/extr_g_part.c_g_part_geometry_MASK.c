
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct g_part_table {int gpt_fixgeom; int gpt_heads; int gpt_sectors; } ;
struct g_consumer {int dummy; } ;
typedef scalar_t__ off_t ;


 scalar_t__ FUNC_0 (char*,struct g_consumer*,int*) ;
 int FUNC_1 (scalar_t__,int,scalar_t__*,int*) ;

__attribute__((used)) static void
FUNC_2(struct g_part_table *VAR_0, struct g_consumer *VAR_1,
    off_t VAR_2)
{
 static u_int VAR_3[] = { 1, 9, 17, 33, 63, 0 };
 off_t VAR_4, VAR_5;
 u_int VAR_6, VAR_7;
 int VAR_8;

 if (FUNC_0("GEOM::fwsectors", VAR_1, &VAR_7) != 0 || VAR_7 == 0 ||
     FUNC_0("GEOM::fwheads", VAR_1, &VAR_6) != 0 || VAR_6 == 0) {
  VAR_0->gpt_fixgeom = 0;
  VAR_0->gpt_heads = 0;
  VAR_0->gpt_sectors = 0;
  VAR_5 = 0;
  for (VAR_8 = 0; VAR_3[VAR_8] != 0; VAR_8++) {
   VAR_7 = VAR_3[VAR_8];
   FUNC_1(VAR_2, VAR_7, &VAR_4, &VAR_6);
   if (VAR_4 == 0)
    continue;




   if (VAR_4 > VAR_5 || (VAR_4 == VAR_5 && VAR_6 > 1 &&
       VAR_0->gpt_sectors == 1)) {
    VAR_5 = VAR_4;
    VAR_0->gpt_heads = VAR_6;
    VAR_0->gpt_sectors = VAR_7;
   }
  }





  if (VAR_5 == 0) {
   VAR_0->gpt_heads = 255;
   VAR_0->gpt_sectors = 63;
  }
 } else {
  VAR_0->gpt_fixgeom = 1;
  VAR_0->gpt_heads = VAR_6;
  VAR_0->gpt_sectors = VAR_7;
 }
}
