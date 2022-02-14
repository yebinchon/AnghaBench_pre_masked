
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vt_axis_t ;
struct vt_device {int dummy; } ;





 unsigned char* VAR_0 ;
 unsigned char* VAR_1 ;
 int FUNC_0 (struct vt_device*,scalar_t__,scalar_t__,unsigned char const) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned char* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(struct vt_device *VAR_6, vt_axis_t VAR_7, vt_axis_t VAR_8)
{
 const unsigned char VAR_9 = 0x16, *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;

 switch (VAR_5) {
 case 130:
  VAR_10 = VAR_0;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 case 129:

 default:
  VAR_10 = VAR_1;
  break;
 }


 for (VAR_14 = 0, VAR_11 = 0; VAR_11 < VAR_2 * VAR_3;) {
  if (VAR_10[VAR_14] == VAR_9) {
   VAR_13 = VAR_10[VAR_14 + 1];
   VAR_12 = VAR_10[VAR_14 + 2];

   for (; VAR_12; VAR_12--, VAR_11 += 2)
    FUNC_0(VAR_6,
        VAR_8 + (VAR_11 % VAR_3),
        VAR_7 + (VAR_11 / VAR_3),
        VAR_13);

   VAR_14 += 3;
  } else {
   FUNC_0(VAR_6, VAR_8 + (VAR_11 % VAR_3),
       VAR_7 + (VAR_11 / VAR_3), VAR_10[VAR_14]);

   VAR_14++;
   VAR_11 += 2;
  }
 }
}
