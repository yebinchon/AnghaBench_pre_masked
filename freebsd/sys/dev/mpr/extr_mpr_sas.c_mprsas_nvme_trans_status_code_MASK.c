
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
struct TYPE_3__ {int sense_len; int sense_resid; int sense_data; } ;
union ccb {TYPE_2__ ccb_h; TYPE_1__ csio; } ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int u8 ;
struct scsi_sense_data {int dummy; } ;
struct mpr_command {union ccb* cm_complete_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (int *,int ,int,int,int,int,int ) ;

__attribute__((used)) static u8
FUNC_3(uint16_t VAR_35,
    struct mpr_command *VAR_36)
{
 u8 VAR_37 = VAR_2;
 int VAR_38, VAR_39, VAR_40;
 union ccb *VAR_41 = VAR_36->cm_complete_data;
 int VAR_42;
 uint8_t VAR_43, VAR_44;

 VAR_43 = FUNC_1(VAR_35);
 VAR_44 = FUNC_0(VAR_35);

 VAR_37 = VAR_1;
 VAR_38 = VAR_29;
 VAR_39 = VAR_22;
 VAR_40 = VAR_4;

 switch (VAR_43) {
 case 152:
  switch (VAR_44) {
  case 130:
   VAR_37 = VAR_2;
   VAR_38 = VAR_33;
   VAR_39 = VAR_22;
   VAR_40 = VAR_4;
   break;
  case 134:
   VAR_37 = VAR_1;
   VAR_38 = VAR_29;
   VAR_39 = VAR_14;
   VAR_40 = VAR_4;
   break;
  case 137:
   VAR_37 = VAR_1;
   VAR_38 = VAR_29;
   VAR_39 = VAR_16;
   VAR_40 = VAR_4;
   break;
  case 140:
   VAR_37 = VAR_1;
   VAR_38 = VAR_30;
   VAR_39 = VAR_22;
   VAR_40 = VAR_4;
   break;
  case 147:
   VAR_37 = VAR_3;
   VAR_38 = VAR_27;
   VAR_39 = VAR_25;
   VAR_40 = VAR_10;
   break;
  case 138:
   VAR_37 = VAR_1;
   VAR_38 = VAR_28;
   VAR_39 = VAR_15;
   VAR_40 = VAR_4;
   break;
  case 150:
  case 146:
  case 149:
  case 148:
   VAR_37 = VAR_3;
   VAR_38 = VAR_27;
   VAR_39 = VAR_22;
   VAR_40 = VAR_4;
   break;
  case 135:
   VAR_37 = VAR_1;
   VAR_38 = VAR_29;
   VAR_39 = VAR_11;
   VAR_40 = VAR_6;
   break;
  case 133:
   VAR_37 = VAR_1;
   VAR_38 = VAR_29;
   VAR_39 = VAR_13;
   VAR_40 = VAR_4;
   break;
  case 143:
   VAR_37 = VAR_1;
   VAR_38 = VAR_30;
   VAR_39 = VAR_22;
   VAR_40 = VAR_4;
   break;
  case 132:
   VAR_37 = VAR_1;
   VAR_38 = VAR_32;
   VAR_39 = VAR_20;
   VAR_40 = VAR_4;
   break;
  }
  break;
 case 153:
  switch (VAR_44) {
  case 136:
   VAR_37 = VAR_1;
   VAR_38 = VAR_29;
   VAR_39 = VAR_12;
   VAR_40 = VAR_5;
   break;
  case 141:
   VAR_37 = VAR_1;
   VAR_38 = VAR_29;
   VAR_39 = VAR_16;
   VAR_40 = VAR_4;
   break;
  }
  break;
 case 151:
  switch (VAR_44) {
  case 128:
   VAR_37 = VAR_1;
   VAR_38 = VAR_30;
   VAR_39 = VAR_23;
   VAR_40 = VAR_4;
   break;
  case 129:
   VAR_37 = VAR_1;
   VAR_38 = VAR_30;
   VAR_39 = VAR_24;
   VAR_40 = VAR_4;
   break;
  case 139:
   VAR_37 = VAR_1;
   VAR_38 = VAR_30;
   VAR_39 = VAR_18;
   VAR_40 = VAR_8;
   break;
  case 144:
   VAR_37 = VAR_1;
   VAR_38 = VAR_30;
   VAR_39 = VAR_17;
   VAR_40 = VAR_7;
   break;
  case 131:
   VAR_37 = VAR_1;
   VAR_38 = VAR_30;
   VAR_39 = VAR_19;
   VAR_40 = VAR_9;
   break;
  case 142:
   VAR_37 = VAR_1;
   VAR_38 = VAR_31;
   VAR_39 = VAR_21;
   VAR_40 = VAR_4;
   break;
  case 145:
   VAR_37 = VAR_1;
   VAR_38 = VAR_29;
   VAR_39 = VAR_11;
   VAR_40 = VAR_6;
   break;
  }
  break;
 }

 VAR_42 = sizeof(struct scsi_sense_data);
 if (VAR_42 < VAR_41->csio.sense_len)
  VAR_41->csio.sense_resid = VAR_41->csio.sense_len -
      VAR_42;
 else
  VAR_41->csio.sense_resid = 0;

 FUNC_2(&VAR_41->csio.sense_data, VAR_34,
     1, VAR_38, VAR_39, VAR_40, VAR_26);
 VAR_41->ccb_h.status |= VAR_0;

 return VAR_37;
}
