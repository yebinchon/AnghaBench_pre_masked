
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
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(const struct cipso_v4_doi *VAR_5,
          const struct netlbl_lsm_secattr *VAR_6,
          unsigned char *VAR_7,
          u32 VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 if ((VAR_6->flags & VAR_3) == 0)
  return -VAR_1;

 VAR_9 = FUNC_1(VAR_5,
     VAR_6->attr.mls.lvl,
     &VAR_11);
 if (VAR_9 != 0)
  return VAR_9;

 if (VAR_6->flags & VAR_2) {
  VAR_9 = FUNC_0(VAR_5,
          VAR_6,
          &VAR_7[4],
          VAR_8 - 4);
  if (VAR_9 < 0)
   return VAR_9;




  if (VAR_4 && VAR_9 > 0 && VAR_9 <= 10)
   VAR_10 = 14;
  else
   VAR_10 = 4 + VAR_9;
 } else
  VAR_10 = 4;

 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_10;
 VAR_7[3] = VAR_11;

 return VAR_10;
}
