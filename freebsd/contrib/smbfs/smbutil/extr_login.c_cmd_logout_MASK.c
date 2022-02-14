
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ioc_srvname; int ioc_opt; } ;
struct TYPE_3__ {int ioc_opt; } ;
struct smb_ctx {int ct_parsedlevel; TYPE_2__ ct_ssn; TYPE_1__ ct_sh; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_10 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct smb_ctx*,int,char**,int,int,int ) ;
 int FUNC_8 (struct smb_ctx*,int,int ) ;
 int FUNC_9 (struct smb_ctx*,int,int ) ;
 scalar_t__ FUNC_10 (struct smb_ctx*) ;
 scalar_t__ FUNC_11 (struct smb_ctx*) ;
 int FUNC_12 (struct smb_ctx*,int,int,int ) ;
 int FUNC_13 (char*,int,...) ;
 scalar_t__ VAR_11 ;

int
FUNC_14(int VAR_12, char *VAR_13[])
{
 struct smb_ctx VAR_14, *VAR_15 = &VAR_14;
 int VAR_16, VAR_17, VAR_18;

 if (VAR_12 < 2)
  FUNC_4();
 if (FUNC_7(VAR_15, VAR_12, VAR_13, 129, 130, VAR_8) != 0)
  FUNC_1(1);
 if (FUNC_10(VAR_15) != 0)
  FUNC_1(1);
 if (VAR_11)
  FUNC_6(VAR_11);
 while ((VAR_17 = FUNC_2(VAR_12, VAR_13, VAR_9)) != VAR_2){
  switch (VAR_17) {
      case 128:
   VAR_16 = FUNC_9(VAR_15, VAR_17, VAR_10);
   if (VAR_16)
    FUNC_1(1);
   break;
      default:
   FUNC_4();

  }
 }





 VAR_15->ct_ssn.ioc_opt &= ~VAR_6;
 VAR_15->ct_sh.ioc_opt &= ~VAR_4;
 if (FUNC_11(VAR_15) != 0)
  FUNC_1(1);
 VAR_18 = VAR_15->ct_parsedlevel;
 VAR_16 = FUNC_8(VAR_15, VAR_18, 0);
 if (VAR_16 == VAR_1) {
  if (VAR_16) {
   FUNC_13("There is no connection to %s", VAR_16, VAR_15->ct_ssn.ioc_srvname);
   FUNC_1(1);
  }
 }
 if (VAR_16)
  FUNC_1(1);
 switch (VAR_18) {
     case 129:
  VAR_17 = VAR_7;
  break;
     case 130:
  VAR_17 = VAR_5;
  break;
     default:
  FUNC_13("unknown connection level %d", 0, VAR_18);
  FUNC_1(1);
 }
 VAR_16 = FUNC_12(VAR_15, VAR_18, VAR_17, 0);
 if (VAR_16 && VAR_16 != VAR_0) {
  FUNC_13("Can't release connection", VAR_16);
  FUNC_1(1);
 }
 FUNC_5("Connection unmarked as permanent and will be closed when possible\n");
 FUNC_1(0);
}
