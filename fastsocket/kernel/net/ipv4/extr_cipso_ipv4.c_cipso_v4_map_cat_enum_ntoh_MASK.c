
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


 int VAR_0 ;
 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct cipso_v4_doi *VAR_1,
          const unsigned char *VAR_2,
          u32 VAR_3,
          struct netlbl_lsm_secattr *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += 2) {
  VAR_5 = FUNC_1(VAR_4->attr.mls.cat,
    FUNC_0(&VAR_2[VAR_6]),
    VAR_0);
  if (VAR_5 != 0)
   return VAR_5;
 }

 return 0;
}
