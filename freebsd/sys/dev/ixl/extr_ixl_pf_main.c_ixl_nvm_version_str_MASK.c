
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sbuf {int dummy; } ;
struct TYPE_4__ {int oem_ver; int version; int eetrack; } ;
struct TYPE_3__ {int api_min_ver; int api_maj_ver; int fw_build; int fw_min_ver; int fw_maj_ver; } ;
struct i40e_hw {TYPE_2__ nvm; TYPE_1__ aq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sbuf*,char*,int ,int ,int ,int ,int ,int,int,int ,int ,int ,int ) ;

void
FUNC_1(struct i40e_hw *VAR_4, struct sbuf *VAR_5)
{
 u8 VAR_6 = (u8)(VAR_4->nvm.oem_ver >> 24);
 u16 VAR_7 = (u16)((VAR_4->nvm.oem_ver >> 16) & 0xFFFF);
 u8 VAR_8 = (u8)(VAR_4->nvm.oem_ver & 0xFF);

 FUNC_0(VAR_5,
     "fw %d.%d.%05d api %d.%d nvm %x.%02x etid %08x oem %d.%d.%d",
     VAR_4->aq.fw_maj_ver, VAR_4->aq.fw_min_ver, VAR_4->aq.fw_build,
     VAR_4->aq.api_maj_ver, VAR_4->aq.api_min_ver,
     (VAR_4->nvm.version & VAR_0) >>
     VAR_1,
     (VAR_4->nvm.version & VAR_2) >>
     VAR_3,
     VAR_4->nvm.eetrack,
     VAR_6, VAR_7, VAR_8);
}
