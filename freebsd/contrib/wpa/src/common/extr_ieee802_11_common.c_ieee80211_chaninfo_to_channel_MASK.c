
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum chan_width { ____Placeholder_chan_width } chan_width ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (unsigned int,int,int,int *,int *) ;
 int FUNC_1 (int ,char*,unsigned int,int,int) ;

int FUNC_2(unsigned int VAR_6, enum chan_width VAR_7,
      int VAR_8, u8 *VAR_9, u8 *VAR_10)
{
 int VAR_11 = 128;

 switch (VAR_7) {
 case 128:
 case 132:
 case 133:
 case 131:
  VAR_11 = VAR_3;
  break;
 case 130:
  VAR_11 = VAR_1;
  break;
 case 129:
  VAR_11 = VAR_2;
  break;
 case 134:
  VAR_11 = VAR_0;
  break;
 }

 if (FUNC_0(VAR_6, VAR_8, VAR_11, VAR_9,
       VAR_10) == VAR_5) {
  FUNC_1(VAR_4,
      "Cannot determine operating class and channel (freq=%u chanwidth=%d sec_channel=%d)",
      VAR_6, VAR_7, VAR_8);
  return -1;
 }

 return 0;
}
