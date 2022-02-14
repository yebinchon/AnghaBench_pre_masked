
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cdb_bytes; } ;
struct TYPE_10__ {int resid; TYPE_1__ cdb_io; } ;
struct TYPE_11__ {int resid; } ;
struct TYPE_8__ {scalar_t__ func_code; } ;
union ccb {TYPE_4__ csio; TYPE_5__ ataio; TYPE_2__ ccb_h; } ;
struct scsi_sense_data {int dummy; } ;
struct enc_softc {scalar_t__ enc_type; TYPE_3__* periph; } ;
typedef int ccb_flags ;
struct TYPE_9__ {int path; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char VAR_13 ;
 char VAR_14 ;
 char VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (TYPE_5__*,int ,char,int,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_5__*,int ,int *,int ,int ,char*,int,int) ;
 int FUNC_4 (TYPE_4__*,int ,int *,int ,int ,char*,int,int,int,int) ;
 union ccb* FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (union ccb*,int ,int ,int ,int *) ;
 int VAR_17 ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (union ccb*) ;

int
FUNC_9(struct enc_softc *VAR_18, char *VAR_19, int VAR_20, char *VAR_21, int *VAR_22)
{
 int VAR_23, VAR_24, VAR_25;
 ccb_flags VAR_26;
 union ccb *VAR_27;

 FUNC_0(VAR_18->periph->path, VAR_2,
     ("entering enc_runcmd\n"));
 if (VAR_21) {
  if ((VAR_24 = *VAR_22) < 0) {
   VAR_24 = -VAR_24;
   VAR_26 = VAR_5;
  } else {
   VAR_26 = VAR_3;
  }
 } else {
  VAR_24 = 0;
  VAR_26 = VAR_4;
 }

 if (VAR_20 > VAR_11) {
  VAR_20 = VAR_11;
 }

 VAR_27 = FUNC_5(VAR_18->periph, VAR_6);
 if (VAR_18->enc_type == VAR_10 || VAR_18->enc_type == VAR_9) {
  VAR_25 = FUNC_7(VAR_24, 1020);
  VAR_25 = (VAR_25 + 3) & ~3;
  FUNC_3(&VAR_27->ataio, 0, ((void*)0), VAR_26, 0, VAR_21, VAR_25,
      30 * 1000);
  if (VAR_19[0] == VAR_14)
   FUNC_1(&VAR_27->ataio,
       VAR_0, VAR_19[2], 0x02, VAR_25 / 4);
  else if (VAR_19[0] == VAR_15)
   FUNC_1(&VAR_27->ataio,
       VAR_0, VAR_24 > 0 ? VAR_21[0] : 0,
       0x82, VAR_25 / 4);
  else if (VAR_19[0] == VAR_13)
   FUNC_1(&VAR_27->ataio,
       VAR_0, VAR_19[2], 0x00, VAR_25 / 4);
  else
   FUNC_1(&VAR_27->ataio,
       VAR_0, VAR_24 > 0 ? VAR_21[0] : 0,
       0x80, VAR_25 / 4);
 } else {
  VAR_25 = VAR_24;
  FUNC_4(&VAR_27->csio, 0, ((void*)0), VAR_26, VAR_12,
      VAR_21, VAR_24, sizeof (struct scsi_sense_data), VAR_20,
      60 * 1000);
  FUNC_2(VAR_19, VAR_27->csio.cdb_io.cdb_bytes, VAR_20);
 }

 VAR_23 = FUNC_6(VAR_27, VAR_17, VAR_7, VAR_8, ((void*)0));
 if (VAR_23) {
  if (VAR_21) {
   *VAR_22 = VAR_24;
  }
 } else {
  if (VAR_21) {
   if (VAR_27->ccb_h.func_code == VAR_16)
    *VAR_22 = VAR_27->ataio.resid;
   else
    *VAR_22 = VAR_27->csio.resid;
   *VAR_22 += VAR_25 - VAR_24;
  }
 }
 FUNC_8(VAR_27);
 FUNC_0(VAR_18->periph->path, VAR_1,
     ("exiting enc_runcmd: *dlenp = %d\n", *VAR_22));
 return (VAR_23);
}
