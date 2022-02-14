
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int int8_t ;
typedef enum fountain_geyser_trackpad_type { ____Placeholder_fountain_geyser_trackpad_type } fountain_geyser_trackpad_type ;
typedef int atp_axis ;






 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(const int8_t *VAR_2, u_int VAR_3, atp_axis VAR_4,
    int *VAR_5, enum fountain_geyser_trackpad_type VAR_6)
{
 u_int VAR_7;
 u_int VAR_8;

 switch (VAR_6) {
 case 131:




  for (VAR_7 = 0, VAR_8 = (VAR_4 == VAR_1) ? 1 : 2; VAR_7 < 8; VAR_8 += 5, VAR_7++) {
   VAR_5[VAR_7] = VAR_2[VAR_8];
   VAR_5[VAR_7+8] = VAR_2[VAR_8+2];
   if ((VAR_4 == VAR_0) && (VAR_3 > 16))
    VAR_5[VAR_7+16] = VAR_2[VAR_8+40];
  }

  break;
 case 130:
  for (VAR_7 = 0, VAR_8 = (VAR_4 == VAR_1) ? 1 : 19; VAR_7 < VAR_3; ) {
   VAR_5[VAR_7++] = VAR_2[VAR_8++];
   VAR_5[VAR_7++] = VAR_2[VAR_8++];
   VAR_8++;
  }
  break;
 case 129:
 case 128:
  for (VAR_7 = 0, VAR_8 = (VAR_4 == VAR_1) ? 2 : 20; VAR_7 < VAR_3; ) {
   VAR_5[VAR_7++] = VAR_2[VAR_8++];
   VAR_5[VAR_7++] = VAR_2[VAR_8++];
   VAR_8++;
  }
  break;
 default:
  break;
 }
}
