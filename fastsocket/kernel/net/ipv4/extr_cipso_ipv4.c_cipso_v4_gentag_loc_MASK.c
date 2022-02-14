
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int secid; } ;
struct netlbl_lsm_secattr {int flags; TYPE_1__ attr; } ;
struct cipso_v4_doi {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(const struct cipso_v4_doi *VAR_4,
          const struct netlbl_lsm_secattr *VAR_5,
          unsigned char *VAR_6,
          u32 VAR_7)
{
 if (!(VAR_5->flags & VAR_3))
  return -VAR_2;

 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_1;
 *(u32 *)&VAR_6[2] = VAR_5->attr.secid;

 return VAR_1;
}
