
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; struct cam_path* path; int func_code; int retry_count; } ;
struct TYPE_3__ {scalar_t__ flags; } ;
union ccb {TYPE_2__ ccb_h; TYPE_1__ crcn; } ;
typedef scalar_t__ u_int32_t ;
struct cam_periph {int flags; } ;
struct cam_path {int dummy; } ;
typedef int lun_id_t ;
typedef int cam_status ;
typedef int cam_flags ;


 int VAR_0 ;
 int VAR_1 ;






 scalar_t__ FUNC_0 (struct cam_path*,int ) ;
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
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (union ccb*,int ,int ) ;
 int FUNC_2 (union ccb*) ;
 int FUNC_3 (struct cam_path*,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_4 (union ccb*,union ccb**,int,scalar_t__,int*,scalar_t__*,scalar_t__*,scalar_t__*,char const**) ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_5 (union ccb*) ;
 union ccb* FUNC_6 () ;
 int FUNC_7 (int ,struct cam_path*,union ccb*) ;
 int const FUNC_8 (struct cam_path**,struct cam_periph*,int ,int ,int ) ;
 int FUNC_9 (struct cam_path*) ;
 int FUNC_10 (struct cam_path*) ;
 int FUNC_11 (struct cam_path*) ;
 struct cam_periph* FUNC_12 (struct cam_path*) ;
 int FUNC_13 (struct cam_path*) ;
 int FUNC_14 (struct cam_path*,char*,...) ;
 int FUNC_15 (union ccb*) ;

int
FUNC_16(union ccb *VAR_26, cam_flags VAR_27,
   u_int32_t VAR_28)
{
 struct cam_path *VAR_29;
 union ccb *VAR_30, *VAR_31;
 struct cam_periph *VAR_32;
 const char *VAR_33;
 cam_status VAR_34;
 int VAR_35, VAR_36, VAR_37, VAR_38;
 u_int32_t VAR_39, VAR_40, VAR_41;

 VAR_39 = VAR_19;
 VAR_32 = FUNC_12(VAR_26->ccb_h.path);
 VAR_33 = ((void*)0);
 VAR_34 = VAR_26->ccb_h.status;
 VAR_35 = (VAR_34 & VAR_3) != 0;
 VAR_34 &= VAR_9;
 VAR_38 = VAR_37 = VAR_40 = VAR_41 = 0;
 VAR_30 = VAR_26;


 switch (VAR_26->ccb_h.status & VAR_9) {
 case 154:
 case 144:
 case 142:
 case 140:
 case 128:
 case 153:
 case 136:
 case 158:
 case 134:
  VAR_38++;
  break;
 default:
  break;
 }

 switch (VAR_34) {
 case 143:
  VAR_36 = 0;
  VAR_39 &= ~VAR_19;
  break;
 case 136:
  VAR_36 = FUNC_4(VAR_26, &VAR_30,
      VAR_27, VAR_28, &VAR_37, &VAR_40,
      &VAR_41, &VAR_39, &VAR_33);
  break;
 case 157:
  VAR_36 = VAR_11;
  break;
 case 132:
 case 131:
 case 149:

  VAR_36 = VAR_11;
  break;
 case 135:
  if ((VAR_27 & VAR_8) != 0) {
   if (VAR_26->ccb_h.retry_count > 0 &&
       (VAR_32->flags & VAR_7) == 0) {
    VAR_26->ccb_h.retry_count--;
    VAR_36 = VAR_13;





    VAR_40 = VAR_14;
    VAR_41 = VAR_25;
    break;
   }
   VAR_33 = "Retries exhausted";
  }

 case 152:
  VAR_36 = VAR_12;
  VAR_39 = VAR_18;
  break;
 case 141:
 case 147:
 case 148:
 case 146:
 case 139:
 case 150:
 case 133:
 case 151:
  VAR_36 = VAR_10;
  break;
 case 137:
 case 156:
 case 145:

  if (VAR_32->flags & VAR_7) {
   VAR_33 = "Periph was invalidated";
   VAR_36 = VAR_11;
  } else if (VAR_28 & VAR_16) {
   VAR_36 = VAR_11;
   VAR_33 = "Retry was blocked";
  } else {
   VAR_36 = VAR_13;
   VAR_39 &= ~VAR_19;
  }
  break;
 case 138:

  VAR_41 = VAR_24;

 case 155:
  if (VAR_41 == 0) {

   VAR_41 = VAR_23;
  }
  VAR_40 = VAR_14;

 case 158:
 case 142:
 case 154:
 case 129:
 case 130:
 case 153:
 default:
  if (VAR_32->flags & VAR_7) {
   VAR_36 = VAR_11;
   VAR_33 = "Periph was invalidated";
  } else if (VAR_26->ccb_h.retry_count == 0) {
   VAR_36 = VAR_11;
   VAR_33 = "Retries exhausted";
  } else if (VAR_28 & VAR_16) {
   VAR_36 = VAR_11;
   VAR_33 = "Retry was blocked";
  } else {
   VAR_26->ccb_h.retry_count--;
   VAR_36 = VAR_13;
  }
  break;
 }

 if ((VAR_28 & VAR_17) ||
     FUNC_0(VAR_26->ccb_h.path, VAR_2))
  VAR_39 |= VAR_19;
 else if (VAR_28 & VAR_15)
  VAR_39 &= ~VAR_19;
 if ((VAR_39 & VAR_19) != 0)
  FUNC_1(VAR_30, VAR_5, VAR_4);
 if (VAR_36 != 0 && (VAR_39 & VAR_19) != 0) {
  if (VAR_36 != VAR_13) {
   if (VAR_33 == ((void*)0))
    VAR_33 = "Unretryable error";
   FUNC_14(VAR_26->ccb_h.path, "Error %d, %s\n",
       VAR_36, VAR_33);
  } else if (VAR_33 != ((void*)0))
   FUNC_14(VAR_26->ccb_h.path, "%s\n", VAR_33);
  else {
   FUNC_14(VAR_26->ccb_h.path,
       "Retrying command, %d more tries remain\n",
       VAR_26->ccb_h.retry_count);
  }
 }

 if (VAR_38 && (VAR_36 != 0 || (VAR_39 & VAR_19) != 0))
  FUNC_2(VAR_30);

 if ((VAR_39 & VAR_18) != 0) {
  lun_id_t VAR_42;







  if (VAR_34 == 135)
   VAR_42 = VAR_6;
  else
   VAR_42 = FUNC_10(VAR_26->ccb_h.path);


  if (FUNC_8(&VAR_29, VAR_32,
        FUNC_11(VAR_26->ccb_h.path),
        FUNC_13(VAR_26->ccb_h.path),
        VAR_42) == 143) {





   FUNC_7(VAR_0, VAR_29, ((void*)0));
   FUNC_9(VAR_29);
  }
 }


 if ((VAR_39 & VAR_21) != 0)
  FUNC_7(VAR_1, VAR_30->ccb_h.path, VAR_30);


 if ((VAR_39 & VAR_20) != 0) {
  if (FUNC_8(&VAR_29, ((void*)0),
        FUNC_11(VAR_26->ccb_h.path),
        FUNC_13(VAR_26->ccb_h.path),
        VAR_6) == 143) {

   VAR_31 = FUNC_6();
   if (VAR_31 != ((void*)0)) {
    VAR_31->ccb_h.path = VAR_29;
    VAR_31->ccb_h.func_code = VAR_22;
    VAR_31->crcn.flags = 0;
    FUNC_15(VAR_31);
   } else {
    FUNC_14(VAR_29,
        "Can't allocate CCB to rescan target\n");
    FUNC_9(VAR_29);
   }
  }
 }


 if (VAR_36 == VAR_13 || VAR_36 == 0) {
  if (VAR_35 != 0)
   VAR_26->ccb_h.status &= ~VAR_3;
  if (VAR_36 == VAR_13)
   FUNC_5(VAR_26);
  if (VAR_35 != 0)
   FUNC_3(VAR_26->ccb_h.path,
      VAR_40,
      VAR_37,
      VAR_41,
                       0);
 }

 return (VAR_36);
}
