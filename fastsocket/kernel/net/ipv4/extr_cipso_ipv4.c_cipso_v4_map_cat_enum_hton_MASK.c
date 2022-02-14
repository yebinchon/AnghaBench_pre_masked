
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int cat; } ;
struct TYPE_4__ {TYPE_1__ mls; } ;
struct netlbl_lsm_secattr {TYPE_2__ attr; } ;
struct cipso_v4_doi {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(const struct cipso_v4_doi *VAR_1,
          const struct netlbl_lsm_secattr *VAR_2,
          unsigned char *VAR_3,
          u32 VAR_4)
{
 int VAR_5 = -1;
 u32 VAR_6 = 0;

 for (;;) {
  VAR_5 = FUNC_1(VAR_2->attr.mls.cat,
       VAR_5 + 1);
  if (VAR_5 < 0)
   break;
  if ((VAR_6 + 2) > VAR_4)
   return -VAR_0;

  *((__be16 *)&VAR_3[VAR_6]) = FUNC_0(VAR_5);
  VAR_6 += 2;
 }

 return VAR_6;
}
