
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int lvl; } ;
struct TYPE_4__ {TYPE_1__ mls; } ;
struct netlbl_lsm_secattr {int flags; TYPE_2__ attr; } ;
struct cipso_v4_doi {int dummy; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cipso_v4_doi const*,struct netlbl_lsm_secattr const*,unsigned char*,int) ;
 int FUNC_1 (struct cipso_v4_doi const*,int ,int*) ;

__attribute__((used)) static int FUNC_2(const struct cipso_v4_doi *VAR_4,
    const struct netlbl_lsm_secattr *VAR_5,
    unsigned char *VAR_6,
    u32 VAR_7)
{
 int VAR_8;
 u32 VAR_9;
 u32 VAR_10;

 if (!(VAR_5->flags & VAR_3))
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_4,
     VAR_5->attr.mls.lvl,
     &VAR_10);
 if (VAR_8 != 0)
  return VAR_8;

 if (VAR_5->flags & VAR_2) {
  VAR_8 = FUNC_0(VAR_4,
           VAR_5,
           &VAR_6[4],
           VAR_7 - 4);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_9 = 4 + VAR_8;
 } else
  VAR_9 = 4;

 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_9;
 VAR_6[3] = VAR_10;

 return VAR_9;
}
