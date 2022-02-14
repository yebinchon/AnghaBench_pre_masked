
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int status; } ;
struct TYPE_9__ {int status; int error; int lba_low; int lba_mid; int lba_high; int device; int lba_low_exp; int lba_mid_exp; int lba_high_exp; int sector_count; int sector_count_exp; } ;
struct TYPE_8__ {int flags; int command; } ;
struct TYPE_12__ {int dxfer_len; int resid; TYPE_3__ res; TYPE_2__ cmd; } ;
struct TYPE_7__ {int cdb_bytes; } ;
struct TYPE_11__ {int dxfer_len; int resid; TYPE_1__ cdb_io; } ;
union ccb {TYPE_4__ ccb_h; TYPE_6__ ataio; TYPE_5__ csio; } ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct get_hook {char** argv; int got; int argc; } ;
struct cam_device {int dummy; } ;
typedef int ssize_t ;
typedef int cdb ;
typedef int atacmd ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (union ccb*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int*,int *,int) ;
 int FUNC_2 (int*,int,char*,int ,int *) ;
 int FUNC_3 (int*,int,char*,int ,struct get_hook*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct cam_device*,union ccb*,int ,int ,int ) ;
 int FUNC_6 (TYPE_6__*,int,int *,int ,int ,int*,int,int) ;
 int FUNC_7 (TYPE_5__*,int,int *,int ,int,int*,int,int ,int,int) ;
 int FUNC_8 (union ccb*) ;
 union ccb* FUNC_9 (struct cam_device*) ;
 int FUNC_10 (struct cam_device*,union ccb*) ;
 char* FUNC_11 (struct get_hook*,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int*) ;
 int FUNC_15 (int,char**,char*) ;
 int VAR_20 ;
 int FUNC_16 (char) ;
 scalar_t__ FUNC_17 (int) ;
 char* VAR_21 ;
 int VAR_22 ;
 int FUNC_18 (int ,int*,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_19 (char*,int *,int ) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (char const*,...) ;
 int FUNC_22 (int,int*,int) ;

__attribute__((used)) static int
FUNC_23(struct cam_device *VAR_25, int VAR_26, char **VAR_27, char *VAR_28,
 int VAR_29, int VAR_30, int VAR_31)
{
 union ccb *VAR_32;
 u_int32_t VAR_33 = VAR_9;
 u_int8_t *VAR_34 = ((void*)0);
 u_int8_t VAR_35[20];
 u_int8_t VAR_36[12];
 struct get_hook VAR_37;
 int VAR_38, VAR_39 = 0, VAR_40;
 int VAR_41 = 0;
 int VAR_42 = 0;
 int VAR_43 = 0;
 int VAR_44 = 0;
 int VAR_45 = 0;
 char *VAR_46 = ((void*)0), *VAR_47, *VAR_48 = ((void*)0);
 int VAR_49 = 0;
 int VAR_50 = 0, VAR_51 = 0;
 int VAR_52;

 VAR_32 = FUNC_9(VAR_25);

 if (VAR_32 == ((void*)0)) {
  FUNC_21("scsicmd: error allocating ccb");
  return (1);
 }

 FUNC_0(VAR_32);

 while ((VAR_38 = FUNC_15(VAR_26, VAR_27, VAR_28)) != -1) {
  switch(VAR_38) {
  case 'a':
   VAR_47 = VAR_21;
   while (FUNC_16(*VAR_47) && (*VAR_47 != '\0'))
    VAR_47++;
   VAR_37.argc = VAR_26 - VAR_22;
   VAR_37.argv = VAR_27 + VAR_22;
   VAR_37.got = 0;
   VAR_42 = FUNC_3(VAR_36, sizeof(VAR_36), VAR_47,
          VAR_20, &VAR_37);
   VAR_22 += VAR_37.got;
   break;
  case 'c':
   VAR_47 = VAR_21;
   while (FUNC_16(*VAR_47) && (*VAR_47 != '\0'))
    VAR_47++;
   VAR_37.argc = VAR_26 - VAR_22;
   VAR_37.argv = VAR_27 + VAR_22;
   VAR_37.got = 0;
   VAR_41 = FUNC_3(VAR_35, sizeof(VAR_35), VAR_47,
          VAR_20, &VAR_37);
   VAR_22 += VAR_37.got;
   break;
  case 'd':
   VAR_43 = 1;
   break;
  case 'f':
   VAR_44 = 1;
   break;
  case 'i':
   if (VAR_19 & VAR_1) {
    FUNC_21("command must either be "
          "read or write, not both");
    VAR_49 = 1;
    goto scsicmd_bailout;
   }
   VAR_19 |= VAR_0;
   VAR_33 = VAR_8;
   VAR_39 = FUNC_19(VAR_21, ((void*)0), 0);
   if (VAR_39 <= 0) {
    FUNC_21("invalid number of input bytes %d",
          VAR_39);
    VAR_49 = 1;
    goto scsicmd_bailout;
   }
   VAR_37.argc = VAR_26 - VAR_22;
   VAR_37.argv = VAR_27 + VAR_22;
   VAR_37.got = 0;
   VAR_22++;
   VAR_46 = FUNC_11(&VAR_37, ((void*)0));




   if ((VAR_46 != ((void*)0))
    && (VAR_46[0] == '-'))
    VAR_50 = 1;

   VAR_34 = (u_int8_t *)FUNC_17(VAR_39);
   if (VAR_34 == ((void*)0)) {
    FUNC_21("can't malloc memory for data_ptr");
    VAR_49 = 1;
    goto scsicmd_bailout;
   }
   break;
  case 'o':
   if (VAR_19 & VAR_0) {
    FUNC_21("command must either be "
          "read or write, not both");
    VAR_49 = 1;
    goto scsicmd_bailout;
   }
   VAR_19 |= VAR_1;
   VAR_33 = VAR_10;
   VAR_39 = FUNC_19(VAR_21, ((void*)0), 0);
   if (VAR_39 <= 0) {
    FUNC_21("invalid number of output bytes %d",
          VAR_39);
    VAR_49 = 1;
    goto scsicmd_bailout;
   }
   VAR_37.argc = VAR_26 - VAR_22;
   VAR_37.argv = VAR_27 + VAR_22;
   VAR_37.got = 0;
   VAR_46 = FUNC_11(&VAR_37, ((void*)0));
   VAR_34 = (u_int8_t *)FUNC_17(VAR_39);
   if (VAR_34 == ((void*)0)) {
    FUNC_21("can't malloc memory for data_ptr");
    VAR_49 = 1;
    goto scsicmd_bailout;
   }
   FUNC_4(VAR_34, VAR_39);




   if ((VAR_46 != ((void*)0))
    && (VAR_46[0] == '-'))
    VAR_50 = 1;
   else
    FUNC_3(VAR_34, VAR_39, VAR_46,
        VAR_20, &VAR_37);
   VAR_22 += VAR_37.got;
   break;
  case 'r':
   VAR_45 = 1;
   VAR_37.argc = VAR_26 - VAR_22;
   VAR_37.argv = VAR_27 + VAR_22;
   VAR_37.got = 0;
   VAR_48 = FUNC_11(&VAR_37, ((void*)0));
   if ((VAR_48 != ((void*)0)) && (VAR_48[0] == '-'))
    VAR_51 = 1;
   VAR_22 += VAR_37.got;
   break;
  default:
   break;
  }
 }





 if ((VAR_50 == 1) && (VAR_19 & VAR_1)) {
  ssize_t VAR_53;
  int VAR_54 = VAR_39;
  u_int8_t *VAR_55 = VAR_34;

  for (VAR_53 = 0; VAR_54 > 0;
       VAR_53 = FUNC_18(VAR_17, VAR_55, VAR_54)) {
   if (VAR_53 == -1) {
    FUNC_20("error reading data from stdin");
    VAR_49 = 1;
    goto scsicmd_bailout;
   }
   VAR_54 -= VAR_53;
   VAR_55 += VAR_53;
  }
 }

 if (VAR_19 & VAR_2)
  VAR_33 |= VAR_13;


 VAR_33 |= VAR_7;

 if (VAR_41) {
  switch((VAR_35[0] >> 5) & 0x7) {
   case 0:
    VAR_41 = 6;
    break;
   case 1:
   case 2:
    VAR_41 = 10;
    break;
   case 3:
   case 6:
   case 7:

    break;
   case 4:
    VAR_41 = 16;
    break;
   case 5:
    VAR_41 = 12;
    break;
  }







  FUNC_1(VAR_35, &VAR_32->csio.cdb_io.cdb_bytes, VAR_41);

  FUNC_7(&VAR_32->csio,
                    VAR_30,
                   ((void*)0),
                  VAR_33,
                       VAR_29,
                     VAR_34,
                      VAR_39,
                      VAR_16,
                    VAR_41,
                    VAR_31 ? VAR_31 : 5000);
 } else {
  VAR_42 = 12;
  FUNC_1(VAR_36, &VAR_32->ataio.cmd.command, VAR_42);
  if (VAR_45)
   VAR_32->ataio.cmd.flags |= VAR_6;
  if (VAR_43)
   VAR_32->ataio.cmd.flags |= VAR_4;
  if (VAR_44)
   VAR_32->ataio.cmd.flags |= VAR_5;

  FUNC_6(&VAR_32->ataio,
                    VAR_30,
                   ((void*)0),
                  VAR_33,
                       0,
                     VAR_34,
                      VAR_39,
                    VAR_31 ? VAR_31 : 5000);
 }

 if (((VAR_52 = FUNC_10(VAR_25, VAR_32)) < 0)
  || ((VAR_32->ccb_h.status & VAR_15) != VAR_14)) {
  const char VAR_56[] = "error sending command";

  if (VAR_52 < 0)
   FUNC_20(VAR_56);
  else
   FUNC_21(VAR_56);

  if (VAR_19 & VAR_3) {
   FUNC_5(VAR_25, VAR_32, VAR_12,
     VAR_11, VAR_23);
  }

  VAR_49 = 1;
  goto scsicmd_bailout;
 }

 if (VAR_42 && VAR_45) {
  if (VAR_51 == 0) {
   FUNC_2(&VAR_32->ataio.res.status, 11, VAR_48,
       VAR_18, ((void*)0));
   FUNC_13(VAR_24, "\n");
  } else {
   FUNC_13(VAR_24,
       "%02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X\n",
       VAR_32->ataio.res.status,
       VAR_32->ataio.res.error,
       VAR_32->ataio.res.lba_low,
       VAR_32->ataio.res.lba_mid,
       VAR_32->ataio.res.lba_high,
       VAR_32->ataio.res.device,
       VAR_32->ataio.res.lba_low_exp,
       VAR_32->ataio.res.lba_mid_exp,
       VAR_32->ataio.res.lba_high_exp,
       VAR_32->ataio.res.sector_count,
       VAR_32->ataio.res.sector_count_exp);
   FUNC_12(VAR_24);
  }
 }

 if (VAR_41)
  VAR_40 = VAR_32->csio.dxfer_len - VAR_32->csio.resid;
 else
  VAR_40 = VAR_32->ataio.dxfer_len - VAR_32->ataio.resid;
 if (((VAR_32->ccb_h.status & VAR_15) == VAR_14)
  && (VAR_19 & VAR_0)
  && (VAR_40 > 0)) {
  if (VAR_50 == 0) {
   FUNC_2(VAR_34, VAR_40, VAR_46,
       VAR_18, ((void*)0));
   FUNC_13(VAR_24, "\n");
  } else {
   ssize_t VAR_57;
   int VAR_58 = VAR_40;
   u_int8_t *VAR_59 = VAR_34;

   for (VAR_57 = 0; (VAR_58 > 0) &&
        (VAR_57 =FUNC_22(1, VAR_59,VAR_58))> 0;){
    VAR_58 -= VAR_57;
    VAR_59 += VAR_57;
   }
   if (VAR_57 == -1) {
    FUNC_20("error writing data to stdout");
    VAR_49 = 1;
    goto scsicmd_bailout;
   } else if ((VAR_57 == 0)
    && (VAR_58 > 0)) {
    FUNC_21("only wrote %u bytes out of %u",
          VAR_40 - VAR_58, VAR_40);
   }
  }
 }

scsicmd_bailout:

 if ((VAR_39 > 0) && (VAR_34 != ((void*)0)))
  FUNC_14(VAR_34);

 FUNC_8(VAR_32);

 return (VAR_49);
}
