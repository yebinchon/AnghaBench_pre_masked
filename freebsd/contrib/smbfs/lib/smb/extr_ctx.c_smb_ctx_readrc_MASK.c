
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* ioc_share; } ;
struct TYPE_3__ {scalar_t__* ioc_user; scalar_t__* ioc_srvname; } ;
struct smb_ctx {TYPE_2__ ct_sh; TYPE_1__ ct_ssn; int ct_nb; } ;
typedef int sname ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (struct smb_ctx*,char*,int) ;
 scalar_t__ FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (char*,int,char*,char*,...) ;

int
FUNC_4(struct smb_ctx *VAR_4)
{
 char VAR_5[VAR_1 + VAR_2 + VAR_0 + 4];


 if (FUNC_2() != 0)
  return 0;

 if (VAR_4->ct_ssn.ioc_user[0] == 0 || VAR_4->ct_ssn.ioc_srvname[0] == 0)
  return 0;

 FUNC_1(VAR_4, "default", 0);
 FUNC_0(VAR_3, VAR_4->ct_nb, "default", 0);
 FUNC_1(VAR_4, VAR_4->ct_ssn.ioc_srvname, 1);
 FUNC_0(VAR_3, VAR_4->ct_nb, VAR_4->ct_ssn.ioc_srvname, 1);



 FUNC_3(VAR_5, sizeof(VAR_5), "%s:%s", VAR_4->ct_ssn.ioc_srvname,
     VAR_4->ct_ssn.ioc_user);
 FUNC_1(VAR_4, VAR_5, 2);

 if (VAR_4->ct_sh.ioc_share[0] != 0) {



  FUNC_3(VAR_5, sizeof(VAR_5), "%s:%s:%s", VAR_4->ct_ssn.ioc_srvname,
      VAR_4->ct_ssn.ioc_user, VAR_4->ct_sh.ioc_share);
  FUNC_1(VAR_4, VAR_5, 3);
 }
 return 0;
}
