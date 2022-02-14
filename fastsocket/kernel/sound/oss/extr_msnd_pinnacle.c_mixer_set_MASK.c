
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* left_levels; int* right_levels; scalar_t__ SMA; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;







 int VAR_11 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int const,int ,int ) ;
 int FUNC_4 (int const,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(int VAR_16, int VAR_17)
{
 int VAR_18 = VAR_17 & 0x000000ff;
 int VAR_19 = (VAR_17 & 0x0000ff00) >> 8;
 int VAR_20, VAR_21;
 int VAR_22, VAR_23;
 int VAR_24 = 0;

 if (VAR_16 > 31)
  return -VAR_0;

 VAR_20 = VAR_18 * 0xff / 100;
 VAR_22 = VAR_18 * 0xffff / 100;

 VAR_21 = VAR_19 * 0xff / 100;
 VAR_23 = VAR_19 * 0xffff / 100;

 VAR_12.left_levels[VAR_16] = VAR_22;
 VAR_12.right_levels[VAR_16] = VAR_23;

 switch (VAR_16) {

 case 133:

  FUNC_5(VAR_20, VAR_12.SMA + VAR_5);
  FUNC_5(VAR_21, VAR_12.SMA + VAR_6);
  if (FUNC_2(&VAR_12, 0, 0, VAR_2) == 0)
   FUNC_0(&VAR_12, VAR_4);
  break;

 case 131:

  FUNC_5(VAR_20, VAR_12.SMA + VAR_7);
  FUNC_5(VAR_21, VAR_12.SMA + VAR_8);
  if (FUNC_2(&VAR_12, 0, 0, VAR_3) == 0)
   FUNC_0(&VAR_12, VAR_4);
  break;

 case 128:
  FUNC_6(VAR_22, VAR_12.SMA + VAR_9);
  FUNC_6(VAR_23, VAR_12.SMA + VAR_10);


 case 132:




 case 129:
 case 130:
 case 134:

  VAR_24 = 1;
  break;

 default:
  return 0;
 }

 if (VAR_24) {

  FUNC_4(130, VAR_15);
  FUNC_4(134, VAR_13);

  FUNC_4(129, VAR_14);

  FUNC_3(132, VAR_11, VAR_1);
 }

 return FUNC_1(VAR_16);
}
