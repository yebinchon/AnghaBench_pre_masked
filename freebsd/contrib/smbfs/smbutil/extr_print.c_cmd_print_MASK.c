
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* ioc_srvname; char* ioc_user; } ;
struct smb_ctx {TYPE_1__ ct_ssn; } ;
typedef int smbfh ;
typedef scalar_t__ off_t ;
typedef int fnamebuf ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,char*,int) ;
 scalar_t__ FUNC_7 (struct smb_ctx*,int,char**,int ,int ,int ) ;
 int FUNC_8 (struct smb_ctx*,int ,int ) ;
 int FUNC_9 (struct smb_ctx*,int,int ) ;
 scalar_t__ FUNC_10 (struct smb_ctx*) ;
 scalar_t__ FUNC_11 (struct smb_ctx*) ;
 int FUNC_12 (char*,int,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (struct smb_ctx*,int ) ;
 int FUNC_14 (struct smb_ctx*,int ,int,char*,int *) ;
 int FUNC_15 (struct smb_ctx*,int ,scalar_t__,int,char*) ;
 int FUNC_16 (char*,int,char*,char*,char*,char*) ;
 scalar_t__ FUNC_17 (char*,char*) ;
 int FUNC_18 () ;

int
FUNC_19(int VAR_11, char *VAR_12[])
{
 struct smb_ctx VAR_13, *VAR_14 = &VAR_13;
 smbfh VAR_15;
 off_t VAR_16;
 char VAR_17[8192];
 char *VAR_18;
 char VAR_19[256];
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

 if (VAR_11 < 2)
  FUNC_18();
 if (FUNC_7(VAR_14, VAR_11, VAR_12, VAR_4, VAR_4, VAR_5) != 0)
  FUNC_1(1);
 if (FUNC_10(VAR_14) != 0)
  FUNC_1(1);
 if (VAR_10)
  FUNC_5(VAR_10);
 while ((VAR_21 = FUNC_2(VAR_11, VAR_12, VAR_6)) != VAR_1) {
  switch(VAR_21){
      case 128:
   VAR_20 = FUNC_9(VAR_14, VAR_21, VAR_8);
   if (VAR_20)
    FUNC_1(1);
   break;
      default:
   FUNC_18();

  }
 }
 if (VAR_9 + 1 >= VAR_11)
  FUNC_4();
 VAR_18 = VAR_12[VAR_9 + 1];

 if (FUNC_17(VAR_18, "-") == 0) {
  VAR_23 = 0;
  VAR_18 = "stdin";
 } else {
  VAR_23 = FUNC_3(VAR_18, VAR_2, 0);
  if (VAR_23 < 0) {
   FUNC_12("could not open file %s\n", VAR_7, VAR_18);
   FUNC_1(1);
  }
 }

 if (FUNC_11(VAR_14) != 0)
  FUNC_1(1);
 VAR_20 = FUNC_8(VAR_14, VAR_4, VAR_3);
 if (VAR_20) {
  FUNC_12("could not login to server %s", VAR_20, VAR_14->ct_ssn.ioc_srvname);
  FUNC_1(1);
 }
 FUNC_16(VAR_19, sizeof(VAR_19), "%s_%s_%s", VAR_14->ct_ssn.ioc_user,
     VAR_14->ct_ssn.ioc_srvname, VAR_18);
 VAR_20 = FUNC_14(VAR_14, 0, 1, VAR_19, &VAR_15);
 if (VAR_20) {
  FUNC_12("could not open print job", VAR_20);
  FUNC_1(1);
 }
 VAR_16 = 0;
 VAR_20 = 0;
 for(;;) {
  VAR_24 = FUNC_6(VAR_23, VAR_17, sizeof(VAR_17));
  if (VAR_24 == 0)
   break;
  if (VAR_24 < 0) {
   VAR_20 = VAR_7;
   FUNC_12("error reading input file\n", VAR_20);
   break;
  }
  VAR_22 = FUNC_15(VAR_14, VAR_15, VAR_16, VAR_24, VAR_17);
  if (VAR_22 < 0) {
   VAR_20 = VAR_7;
   FUNC_12("error writing spool file\n", VAR_20);
   break;
  }
  if (VAR_22 != VAR_24) {
   FUNC_12("incomplete write to spool file\n", 0);
   VAR_20 = VAR_0;
   break;
  }
  VAR_16 += VAR_24;
 }
 FUNC_0(VAR_23);
 VAR_20 = FUNC_13(VAR_14, VAR_15);
 if (VAR_20)
  FUNC_12("an error while closing spool file\n", VAR_20);
 return VAR_20 ? 1 : 0;
}
