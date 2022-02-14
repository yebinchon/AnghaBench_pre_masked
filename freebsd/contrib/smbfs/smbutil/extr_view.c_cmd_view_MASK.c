
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct smb_share_info_1 {char* shi1_netname; int shi1_remark; int shi1_type; } ;
struct TYPE_2__ {int ioc_srvname; } ;
struct smb_ctx {TYPE_1__ ct_ssn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct smb_share_info_1*) ;
 int FUNC_3 (int,char**,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 struct smb_share_info_1* FUNC_7 (int) ;
 size_t FUNC_8 (int ,int) ;
 char* FUNC_9 (char*,char*) ;
 int VAR_9 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (scalar_t__) ;
 char** VAR_10 ;
 scalar_t__ FUNC_12 (struct smb_ctx*,int,char**,int ,int ,int ) ;
 int FUNC_13 (struct smb_ctx*,int ,int ) ;
 int FUNC_14 (struct smb_ctx*,int,int ) ;
 scalar_t__ FUNC_15 (struct smb_ctx*) ;
 scalar_t__ FUNC_16 (struct smb_ctx*) ;
 int FUNC_17 (struct smb_ctx*,char*,int ) ;
 int FUNC_18 (char*,int,...) ;
 int FUNC_19 (struct smb_ctx*,int,struct smb_share_info_1*,int,int*,int*) ;
 scalar_t__ VAR_11 ;
 int FUNC_20 () ;

int
FUNC_21(int VAR_12, char *VAR_13[])
{
 struct smb_ctx VAR_14, *VAR_15 = &VAR_14;
 struct smb_share_info_1 *VAR_16, *VAR_17;
 char *VAR_18;
 u_int32_t VAR_19;
 u_int16_t VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;


 if (VAR_12 < 2)
  FUNC_20();
 if (FUNC_12(VAR_15, VAR_12, VAR_13, VAR_4, VAR_4, VAR_7) != 0)
  FUNC_1(1);
 if (FUNC_15(VAR_15) != 0)
  FUNC_1(1);
 if (VAR_11)
  FUNC_11(VAR_11);
 while ((VAR_22 = FUNC_3(VAR_12, VAR_13, VAR_8)) != VAR_0) {
  switch(VAR_22){
      case 128:
   VAR_21 = FUNC_14(VAR_15, VAR_22, VAR_9);
   if (VAR_21)
    FUNC_1(1);
   break;
      default:
   FUNC_20();

  }
 }




 FUNC_17(VAR_15, "IPC$", VAR_7);
 if (FUNC_16(VAR_15) != 0)
  FUNC_1(1);
 VAR_21 = FUNC_13(VAR_15, VAR_3, VAR_2);
 if (VAR_21) {
  FUNC_18("could not login to server %s", VAR_21, VAR_15->ct_ssn.ioc_srvname);
  FUNC_1(1);
 }
 FUNC_10("Share        Type       Comment\n");
 FUNC_10("-------------------------------\n");
 VAR_23 = 0xffe0;
 VAR_16 = FUNC_7(VAR_23);
 VAR_21 = FUNC_19(VAR_15, 1, VAR_16, VAR_23, &VAR_25, &VAR_26);
 if (VAR_21 &&
     VAR_21 != (VAR_5 | VAR_6)) {
  FUNC_18("unable to list resources", VAR_21);
  FUNC_1(1);
 }
 for (VAR_17 = VAR_16, VAR_24 = 0; VAR_24 < VAR_25; VAR_24++, VAR_17++) {
  VAR_20 = FUNC_4(VAR_17->shi1_type);
  VAR_19 = FUNC_5(VAR_17->shi1_remark);
  VAR_19 &= 0xFFFF;

  VAR_18 = (char*)VAR_16 + VAR_19;
  FUNC_10("%-12s %-10s %s\n", VAR_17->shi1_netname,
      VAR_10[FUNC_8(VAR_20, sizeof VAR_10 / sizeof(char *) - 1)],
      VAR_19 ? FUNC_9(VAR_18, VAR_18) : "");
 }
 FUNC_10("\n%d shares listed from %d available\n", VAR_25, VAR_26);
 FUNC_2(VAR_16);
 return 0;
}
