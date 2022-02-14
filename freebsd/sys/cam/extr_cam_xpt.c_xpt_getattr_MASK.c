
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct scsi_vpd_id_descriptor {int proto_codeset; size_t length; char* identifier; int id_type; } ;
struct scsi_vpd_device_id {int dummy; } ;
struct TYPE_2__ {int status; int path; int func_code; } ;
struct ccb_dev_advinfo {size_t bufsiz; char* buf; int buftype; scalar_t__ provsiz; TYPE_1__ ccb_h; int flags; } ;
struct cam_path {int dummy; } ;
typedef int cdai ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (struct ccb_dev_advinfo*,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct scsi_vpd_id_descriptor* FUNC_5 (struct scsi_vpd_device_id*,scalar_t__,int ) ;
 int FUNC_6 (char*,char*,...) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (union ccb*) ;
 int FUNC_10 (struct cam_path*,int ) ;
 int FUNC_11 (TYPE_1__*,struct cam_path*,int ) ;

int
FUNC_12(char *VAR_24, size_t VAR_25, const char *VAR_26, struct cam_path *VAR_27)
{
 int VAR_28 = -1, VAR_29, VAR_30;
 struct ccb_dev_advinfo VAR_31;
 struct scsi_vpd_device_id *VAR_32;
 struct scsi_vpd_id_descriptor *VAR_33;

 FUNC_10(VAR_27, VAR_9);

 FUNC_4(&VAR_31, 0, sizeof(VAR_31));
 FUNC_11(&VAR_31.ccb_h, VAR_27, VAR_1);
 VAR_31.ccb_h.func_code = VAR_17;
 VAR_31.flags = VAR_3;
 VAR_31.bufsiz = VAR_25;
 VAR_31.buf = VAR_24;

 if (!FUNC_7(VAR_26, "GEOM::ident"))
  VAR_31.buftype = VAR_5;
 else if (!FUNC_7(VAR_26, "GEOM::physpath"))
  VAR_31.buftype = VAR_4;
 else if (FUNC_7(VAR_26, "GEOM::lunid") == 0 ||
   FUNC_7(VAR_26, "GEOM::lunname") == 0) {
  VAR_31.buftype = 128;
  VAR_31.bufsiz = VAR_2;
  VAR_31.buf = FUNC_3(VAR_31.bufsiz, VAR_10, VAR_11);
  if (VAR_31.buf == ((void*)0)) {
   VAR_28 = VAR_7;
   goto out;
  }
 } else
  goto out;

 FUNC_9((union ccb *)&VAR_31);
 if ((VAR_31.ccb_h.status & VAR_0) != 0)
  FUNC_1(VAR_31.ccb_h.path, 0, 0, 0, VAR_8);
 if (VAR_31.provsiz == 0)
  goto out;
 switch(VAR_31.buftype) {
 case 128:
  VAR_32 = (struct scsi_vpd_device_id *)VAR_31.buf;
  if (FUNC_7(VAR_26, "GEOM::lunid") == 0) {
   VAR_33 = FUNC_5(VAR_32, VAR_31.provsiz,
       VAR_20);
   if (VAR_33 == ((void*)0))
    VAR_33 = FUNC_5(VAR_32, VAR_31.provsiz,
        VAR_18);
   if (VAR_33 == ((void*)0))
    VAR_33 = FUNC_5(VAR_32, VAR_31.provsiz,
        VAR_23);
   if (VAR_33 == ((void*)0))
    VAR_33 = FUNC_5(VAR_32, VAR_31.provsiz,
        VAR_19);
  } else
   VAR_33 = ((void*)0);

  if (VAR_33 == ((void*)0))
   VAR_33 = FUNC_5(VAR_32, VAR_31.provsiz,
       VAR_22);
  if (VAR_33 == ((void*)0))
   VAR_33 = FUNC_5(VAR_32, VAR_31.provsiz,
       VAR_21);
  if (VAR_33 == ((void*)0))
   break;

  VAR_28 = 0;
  if ((VAR_33->proto_codeset & VAR_13) ==
      VAR_12) {
   if (VAR_33->length < VAR_25) {
    for (VAR_29 = 0; VAR_29 < VAR_33->length; VAR_29++)
     VAR_24[VAR_29] = VAR_33->identifier[VAR_29] ?
         VAR_33->identifier[VAR_29] : ' ';
    VAR_24[VAR_29] = 0;
   } else
    VAR_28 = VAR_6;
   break;
  }
  if ((VAR_33->proto_codeset & VAR_13) ==
      VAR_14) {
   VAR_29 = FUNC_8(VAR_33->identifier, VAR_33->length);
   if (VAR_29 < VAR_25) {
    FUNC_0(VAR_33->identifier, VAR_24, VAR_29);
    VAR_24[VAR_29] = 0;
   } else
    VAR_28 = VAR_6;
   break;
  }
  if ((VAR_33->id_type & VAR_15) ==
      VAR_16 && VAR_33->identifier[0] == 0x10) {
   if ((VAR_33->length - 2) * 2 + 4 >= VAR_25) {
    VAR_28 = VAR_6;
    break;
   }
   for (VAR_29 = 2, VAR_30 = 0; VAR_29 < VAR_33->length; VAR_29++) {
    if (VAR_29 == 6 || VAR_29 == 8 || VAR_29 == 10 || VAR_29 == 12)
        VAR_30 += FUNC_6(VAR_24 + VAR_30, "-");
    VAR_30 += FUNC_6(VAR_24 + VAR_30, "%02x",
        VAR_33->identifier[VAR_29]);
   }
   break;
  }
  if (VAR_33->length * 2 < VAR_25) {
   for (VAR_29 = 0; VAR_29 < VAR_33->length; VAR_29++)
    FUNC_6(VAR_24 + VAR_29 * 2, "%02x",
        VAR_33->identifier[VAR_29]);
  } else
    VAR_28 = VAR_6;
  break;
 default:
  if (VAR_31.provsiz < VAR_25) {
   VAR_31.buf[VAR_31.provsiz] = 0;
   VAR_28 = 0;
  } else
   VAR_28 = VAR_6;
  break;
 }

out:
 if ((char *)VAR_31.buf != VAR_24)
  FUNC_2(VAR_31.buf, VAR_10);
 return VAR_28;
}
