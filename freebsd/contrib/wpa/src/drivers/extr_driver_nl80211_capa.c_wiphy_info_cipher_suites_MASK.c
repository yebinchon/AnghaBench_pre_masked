
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wiphy_info_data {TYPE_1__* capa; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int enc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (int ,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct wiphy_info_data *VAR_13,
         struct nlattr *VAR_14)
{
 int VAR_15, VAR_16;
 u32 *VAR_17;

 if (VAR_14 == ((void*)0))
  return;

 VAR_16 = FUNC_1(VAR_14) / sizeof(u32);
 VAR_17 = FUNC_0(VAR_14);
 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
  u32 VAR_18 = VAR_17[VAR_15];

  FUNC_2(VAR_0, "nl80211: Supported cipher %02x-%02x-%02x:%d",
      VAR_18 >> 24, (VAR_18 >> 16) & 0xff,
      (VAR_18 >> 8) & 0xff, VAR_18 & 0xff);
  switch (VAR_18) {
  case 134:
   VAR_13->capa->enc |= VAR_6;
   break;
  case 132:
   VAR_13->capa->enc |= VAR_8;
   break;
  case 135:
   VAR_13->capa->enc |= VAR_5;
   break;
  case 133:
   VAR_13->capa->enc |= VAR_7;
   break;
  case 130:
   VAR_13->capa->enc |= VAR_10;
   break;
  case 129:
   VAR_13->capa->enc |= VAR_11;
   break;
  case 128:
   VAR_13->capa->enc |= VAR_12;
   break;
  case 139:
   VAR_13->capa->enc |= VAR_1;
   break;
  case 137:
   VAR_13->capa->enc |= VAR_3;
   break;
  case 136:
   VAR_13->capa->enc |= VAR_4;
   break;
  case 138:
   VAR_13->capa->enc |= VAR_2;
   break;
  case 131:
   VAR_13->capa->enc |= VAR_9;
   break;
  }
 }
}
