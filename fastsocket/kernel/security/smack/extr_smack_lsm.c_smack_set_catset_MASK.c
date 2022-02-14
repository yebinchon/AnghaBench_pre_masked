
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* cat; } ;
struct TYPE_6__ {TYPE_1__ mls; } ;
struct netlbl_lsm_secattr {TYPE_2__ attr; int flags; } ;
struct TYPE_7__ {scalar_t__ startbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int,int ) ;

__attribute__((used)) static void FUNC_2(char *VAR_3, struct netlbl_lsm_secattr *VAR_4)
{
 unsigned char *VAR_5;
 unsigned char VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (!VAR_3)
  return;

 VAR_4->flags |= VAR_1;
 VAR_4->attr.mls.cat = FUNC_0(VAR_0);
 VAR_4->attr.mls.cat->startbit = 0;

 for (VAR_7 = 1, VAR_5 = VAR_3, VAR_9 = 0; VAR_9 < VAR_2; VAR_5++, VAR_9++)
  for (VAR_6 = 0x80; VAR_6 != 0; VAR_6 >>= 1, VAR_7++) {
   if ((VAR_6 & *VAR_5) == 0)
    continue;
   VAR_8 = FUNC_1(VAR_4->attr.mls.cat,
         VAR_7, VAR_0);
  }
}
