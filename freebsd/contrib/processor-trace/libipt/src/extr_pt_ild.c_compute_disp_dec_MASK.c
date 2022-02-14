
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pt_ild {scalar_t__ disp_bytes; int map; size_t nominal_opcode; } ;
typedef int map_map ;






 int VAR_0 ;





 int FUNC_0 (struct pt_ild*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pt_ild*) ;
 int FUNC_2 (struct pt_ild*) ;
 int FUNC_3 (struct pt_ild*) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int*,int ) ;

__attribute__((used)) static int FUNC_6(struct pt_ild *VAR_3)
{

 static uint8_t const *const VAR_4[] = {
              129,
              128
 };
 uint8_t VAR_5, VAR_6;

 if (!VAR_3)
  return -VAR_2;

 if (0 < VAR_3->disp_bytes)
  return 0;

 VAR_5 = VAR_3->map;

 if ((sizeof(VAR_4) / sizeof(*VAR_4)) <= VAR_5)
  return 0;

 VAR_6 = VAR_4[VAR_5][VAR_3->nominal_opcode];
 switch (VAR_6) {
 case 133:
  VAR_3->disp_bytes = 0;
  return 0;

 case 131:

  return 0;

 case 136:
  VAR_3->disp_bytes = 1;
  return 0;

 case 134:

  if (FUNC_0(VAR_3)) {
   VAR_3->disp_bytes = 4;
   return 0;
  }

  return FUNC_5(&VAR_3->disp_bytes,
     FUNC_3(VAR_3));

 case 132:

  return FUNC_4(&VAR_3->disp_bytes, FUNC_2(VAR_3));

 case 135:

  return FUNC_5(&VAR_3->disp_bytes, FUNC_3(VAR_3));

 case 130:

  if (VAR_3->map == VAR_0 && FUNC_1(VAR_3) == 7) {
   return FUNC_5(&VAR_3->disp_bytes,
      FUNC_3(VAR_3));
  }
  return 0;

 default:
  return -VAR_1;
 }
}
