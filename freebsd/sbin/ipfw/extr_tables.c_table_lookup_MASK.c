
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xi ;
typedef int key ;
typedef int ipfw_xtable_info ;
typedef int ipfw_obj_tentry ;
struct TYPE_5__ {char* name; } ;
struct TYPE_6__ {TYPE_1__ ntlv; } ;
typedef TYPE_2__ ipfw_obj_header ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*,int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(ipfw_obj_header *VAR_3, int VAR_4, char *VAR_5[])
{
 ipfw_obj_tentry VAR_6;
 ipfw_xtable_info VAR_7;
 char VAR_8[64];
 int VAR_9;

 if (VAR_4 == 0)
  FUNC_1(VAR_2, "address required");

 FUNC_3(VAR_8, *VAR_5, sizeof(VAR_8));

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_9 = FUNC_4(VAR_3, VAR_8, &VAR_7, &VAR_6);

 switch (VAR_9) {
 case 0:
  break;
 case 128:
  FUNC_1(VAR_1, "Table %s not found", VAR_3->ntlv.name);
 case 130:
  FUNC_1(VAR_1, "Entry %s not found", *VAR_5);
 case 129:
  FUNC_1(VAR_1, "Table %s algo does not support "
      "\"lookup\" method", VAR_3->ntlv.name);
 default:
  FUNC_0(VAR_0, "getsockopt(IP_FW_TABLE_XFIND)");
 }

 FUNC_5(&VAR_7, &VAR_6);
}
