
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int secid; } ;
struct netlbl_lsm_secattr {int flags; TYPE_1__ attr; } ;
struct cipso_v4_doi {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct cipso_v4_doi *VAR_1,
     const unsigned char *VAR_2,
     struct netlbl_lsm_secattr *VAR_3)
{
 VAR_3->attr.secid = *(u32 *)&VAR_2[2];
 VAR_3->flags |= VAR_0;

 return 0;
}
