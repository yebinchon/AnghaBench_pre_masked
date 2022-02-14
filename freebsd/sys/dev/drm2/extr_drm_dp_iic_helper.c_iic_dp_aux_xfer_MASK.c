
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u8 ;
typedef int u16 ;
struct iic_msg {int len; int flags; int slave; int * buf; } ;
typedef int device_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, struct iic_msg *VAR_2, uint32_t VAR_3)
{
 u8 *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 u16 VAR_8;
 bool VAR_9;

 VAR_7 = 0;
 VAR_9 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_8 = VAR_2[VAR_6].len;
  VAR_4 = VAR_2[VAR_6].buf;
  VAR_9 = (VAR_2[VAR_6].flags & VAR_0) != 0;
  VAR_7 = FUNC_1(VAR_1, VAR_2[VAR_6].slave >> 1, VAR_9);
  if (VAR_7 < 0)
   break;
  if (VAR_9) {
   for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
    VAR_7 = FUNC_2(VAR_1, &VAR_4[VAR_5]);
    if (VAR_7 != 0)
     break;
   }
  } else {
   for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
    VAR_7 = FUNC_3(VAR_1, VAR_4[VAR_5]);
    if (VAR_7 < 0)
     break;
   }
  }
  if (VAR_7 != 0)
   break;
 }
 FUNC_4(VAR_1, VAR_9);
 FUNC_0("dp_aux_xfer return %d\n", VAR_7);
 return (-VAR_7);
}
