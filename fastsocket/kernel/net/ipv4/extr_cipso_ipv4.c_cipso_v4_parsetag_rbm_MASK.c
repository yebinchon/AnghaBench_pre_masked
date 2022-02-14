
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int * cat; int lvl; } ;
struct TYPE_4__ {TYPE_1__ mls; } ;
struct netlbl_lsm_secattr {int flags; TYPE_2__ attr; } ;
struct cipso_v4_doi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cipso_v4_doi const*,unsigned char const*,int,struct netlbl_lsm_secattr*) ;
 int FUNC_1 (struct cipso_v4_doi const*,unsigned char const,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const struct cipso_v4_doi *VAR_4,
     const unsigned char *VAR_5,
     struct netlbl_lsm_secattr *VAR_6)
{
 int VAR_7;
 u8 VAR_8 = VAR_5[1];
 u32 VAR_9;

 VAR_7 = FUNC_1(VAR_4, VAR_5[3], &VAR_9);
 if (VAR_7 != 0)
  return VAR_7;
 VAR_6->attr.mls.lvl = VAR_9;
 VAR_6->flags |= VAR_3;

 if (VAR_8 > 4) {
  VAR_6->attr.mls.cat =
                         FUNC_2(VAR_1);
  if (VAR_6->attr.mls.cat == ((void*)0))
   return -VAR_0;

  VAR_7 = FUNC_0(VAR_4,
          &VAR_5[4],
          VAR_8 - 4,
          VAR_6);
  if (VAR_7 != 0) {
   FUNC_3(VAR_6->attr.mls.cat);
   return VAR_7;
  }

  VAR_6->flags |= VAR_2;
 }

 return 0;
}
