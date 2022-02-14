
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iic_msg {int slave; int flags; int len; int buf; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int **,int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ,int*,int ,int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int*,int ) ;

int
FUNC_7(device_t VAR_8, struct iic_msg *VAR_9, uint32_t VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 device_t *VAR_18, VAR_19;
 bool VAR_20;

 if ((VAR_12 = FUNC_0(VAR_8, &VAR_18, &VAR_15)) != 0)
  return (VAR_1);
 if (VAR_15 != 1) {
  FUNC_1(VAR_18, VAR_7);
  return (VAR_0);
 }
 VAR_19 = VAR_18[0];
 VAR_16 = 0;
 FUNC_1(VAR_18, VAR_7);
 VAR_20 = 0;
 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_10 && VAR_12 == 0; VAR_11++) {
  VAR_17 = VAR_9[VAR_11].slave;
  if (VAR_9[VAR_11].flags & VAR_5)
   VAR_17 |= VAR_6;
  else
   VAR_17 &= ~VAR_6;

  if (!(VAR_9[VAR_11].flags & VAR_3)) {
   if (VAR_16)
    VAR_12 = FUNC_3(VAR_19, VAR_17, 0);
   else
    VAR_12 = FUNC_4(VAR_19, VAR_17, 0);
   if (VAR_12 != 0)
    break;
   VAR_20 = 1;
  }

  if (VAR_9[VAR_11].flags & VAR_5)
   VAR_12 = FUNC_2(VAR_19, VAR_9[VAR_11].buf, VAR_9[VAR_11].len,
       &VAR_13, VAR_2, 0);
  else
   VAR_12 = FUNC_6(VAR_19, VAR_9[VAR_11].buf, VAR_9[VAR_11].len,
       &VAR_14, 0);
  if (VAR_12 != 0)
   break;

  if (!(VAR_9[VAR_11].flags & VAR_4)) {
   VAR_16 = 0;
   FUNC_5(VAR_19);
  } else {
   VAR_16 = 1;
  }
 }
 if (VAR_12 != 0 && VAR_20)
  FUNC_5(VAR_19);
 return (VAR_12);
}
