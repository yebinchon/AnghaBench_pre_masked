
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_6__ {int fa_size; int fa_attr; int fa_ctime; int fa_mtime; int fa_atime; } ;
struct smbfs_fctx {scalar_t__ f_ecnt; int f_flags; int f_left; int f_limit; int f_infolevel; char* f_name; int f_eofs; int f_rnameofs; int f_rnamelen; int f_nmlen; scalar_t__* f_rname; int f_ssp; TYPE_2__ f_attr; struct smb_t2rq* f_t2; } ;
struct mdchain {int dummy; } ;
struct smb_t2rq {struct mdchain t2_rdata; } ;
typedef int int64_t ;
struct TYPE_5__ {int sv_tz; } ;
struct TYPE_7__ {TYPE_1__ vc_sopt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int ) ;
 scalar_t__* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct mdchain*,int *) ;
 int FUNC_7 (struct mdchain*,int*) ;
 int FUNC_8 (struct mdchain*,char*,int,int ) ;
 int FUNC_9 (struct mdchain*,int*) ;
 int FUNC_10 (struct mdchain*,int *) ;
 int FUNC_11 (struct mdchain*,int*) ;
 int FUNC_12 (struct mdchain*,int*) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int,int,int ,int,int *) ;
 int FUNC_15 (int,int,int *) ;
 int FUNC_16 (struct smbfs_fctx*) ;

__attribute__((used)) static int
FUNC_17(struct smbfs_fctx *VAR_9, int VAR_10)
{
 struct mdchain *VAR_11;
 struct smb_t2rq *VAR_12;
 char *VAR_13;
 u_int8_t VAR_14;
 u_int16_t VAR_15, VAR_16, VAR_17;
 u_int32_t VAR_18, VAR_19, VAR_20;
 int64_t VAR_21;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;

 if (VAR_9->f_ecnt == 0) {
  if (VAR_9->f_flags & VAR_6)
   return VAR_2;
  VAR_9->f_left = VAR_9->f_limit = VAR_10;
  VAR_22 = FUNC_16(VAR_9);
  if (VAR_22)
   return VAR_22;
 }
 VAR_12 = VAR_9->f_t2;
 VAR_11 = &VAR_12->t2_rdata;
 VAR_23 = FUNC_2(VAR_9->f_ssp)->vc_sopt.sv_tz;
 switch (VAR_9->f_infolevel) {
     case 128:
  VAR_19 = 0;
  VAR_25 = 0;
  FUNC_9(VAR_11, &VAR_15);
  FUNC_9(VAR_11, &VAR_16);
  FUNC_9(VAR_11, &VAR_15);
  FUNC_9(VAR_11, &VAR_16);
  FUNC_14(VAR_15, VAR_16, 0, VAR_23, &VAR_9->f_attr.fa_atime);
  FUNC_9(VAR_11, &VAR_15);
  FUNC_9(VAR_11, &VAR_16);
  FUNC_14(VAR_15, VAR_16, 0, VAR_23, &VAR_9->f_attr.fa_mtime);
  FUNC_11(VAR_11, &VAR_18);
  VAR_9->f_attr.fa_size = VAR_18;
  FUNC_10(VAR_11, ((void*)0));
  FUNC_9(VAR_11, &VAR_17);
  VAR_9->f_attr.fa_attr = VAR_17;
  FUNC_12(VAR_11, &VAR_14);
  VAR_18 = VAR_26 = VAR_14;
  VAR_25 = 23;
  VAR_27 = VAR_19 = 24 + VAR_26;
  break;
     case 129:
  FUNC_11(VAR_11, &VAR_19);
  FUNC_10(VAR_11, ((void*)0));
  FUNC_6(VAR_11, ((void*)0));
  FUNC_7(VAR_11, &VAR_21);
  FUNC_15(VAR_21, VAR_23, &VAR_9->f_attr.fa_atime);
  FUNC_7(VAR_11, &VAR_21);
  FUNC_15(VAR_21, VAR_23, &VAR_9->f_attr.fa_mtime);
  FUNC_7(VAR_11, &VAR_21);
  FUNC_15(VAR_21, VAR_23, &VAR_9->f_attr.fa_ctime);
  FUNC_7(VAR_11, &VAR_21);
  VAR_9->f_attr.fa_size = VAR_21;
  FUNC_6(VAR_11, ((void*)0));
  FUNC_11(VAR_11, &VAR_20);
  VAR_9->f_attr.fa_attr = VAR_20;
  FUNC_11(VAR_11, &VAR_18);
  VAR_25 = 64;
  VAR_27 = VAR_19 ? VAR_19 : VAR_25 + VAR_18;
  break;
     default:
  FUNC_0("unexpected info level %d\n", VAR_9->f_infolevel);
  return VAR_1;
 }
 if (FUNC_1(FUNC_2(VAR_9->f_ssp))) {
  VAR_26 = FUNC_13(VAR_18, VAR_8 * 2);
 } else
  VAR_26 = FUNC_13(VAR_18, VAR_8);
 VAR_13 = VAR_9->f_name;
 VAR_22 = FUNC_8(VAR_11, VAR_13, VAR_26, VAR_3);
 if (VAR_22)
  return VAR_22;
 if (VAR_19) {
  VAR_24 = VAR_19 - VAR_26 - VAR_25;
  if (VAR_24 > 0)
   FUNC_8(VAR_11, ((void*)0), VAR_24, VAR_3);
  else if (VAR_24 < 0) {
   FUNC_0("out of sync\n");
   return VAR_0;
  }
 }
 if (FUNC_1(FUNC_2(VAR_9->f_ssp))) {
  if (VAR_26 > 1 && VAR_13[VAR_26 - 1] == 0 && VAR_13[VAR_26 - 2] == 0)
   VAR_26 -= 2;
 } else
  if (VAR_26 && VAR_13[VAR_26 - 1] == 0)
   VAR_26--;
 if (VAR_26 == 0)
  return VAR_0;

 VAR_19 = VAR_9->f_eofs + VAR_27;
 if (VAR_9->f_rnameofs && (VAR_9->f_flags & VAR_7) == 0 &&
     (VAR_9->f_rnameofs >= VAR_9->f_eofs && VAR_9->f_rnameofs < VAR_19)) {



  if (VAR_9->f_rnamelen <= VAR_26) {
   if (VAR_9->f_rname)
    FUNC_4(VAR_9->f_rname, VAR_4);
   VAR_9->f_rname = FUNC_5(VAR_26 + 1, VAR_4, VAR_5);
   VAR_9->f_rnamelen = VAR_26;
  }
  FUNC_3(VAR_9->f_name, VAR_9->f_rname, VAR_26);
  VAR_9->f_rname[VAR_26] = 0;
  VAR_9->f_flags |= VAR_7;
 }
 VAR_9->f_nmlen = VAR_26;
 VAR_9->f_eofs = VAR_19;
 VAR_9->f_ecnt--;
 VAR_9->f_left--;
 return 0;
}
