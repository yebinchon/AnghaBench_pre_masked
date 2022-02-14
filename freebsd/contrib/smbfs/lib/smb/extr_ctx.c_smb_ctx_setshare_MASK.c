
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc_stype; int ioc_share; } ;
struct smb_ctx {TYPE_1__ ct_sh; int ct_parsedlevel; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*,int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

int
FUNC_3(struct smb_ctx *VAR_3, const char *VAR_4, int VAR_5)
{
 if (FUNC_2(VAR_4) > VAR_2) {
  FUNC_1("share name '%s' too long", 0, VAR_4);
  return VAR_0;
 }
 FUNC_0(VAR_3->ct_sh.ioc_share, VAR_4);
 if (VAR_4[0] != 0)
  VAR_3->ct_parsedlevel = VAR_1;
 VAR_3->ct_sh.ioc_stype = VAR_5;
 return 0;
}
