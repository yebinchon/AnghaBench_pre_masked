
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ znode; } ;
struct ubifs_info {int ilebs; int gap_lebs; TYPE_1__ zroot; } ;


 int FUNC_0 (long,int *) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ubifs_info*) ;
 int VAR_0 ;
 long FUNC_4 (scalar_t__) ;

void FUNC_5(struct ubifs_info *VAR_1)
{
 long VAR_2;

 FUNC_3(VAR_1);
 if (VAR_1->zroot.znode) {
  VAR_2 = FUNC_4(VAR_1->zroot.znode);
  FUNC_0(VAR_2, &VAR_0);
 }
 FUNC_2(VAR_1->gap_lebs);
 FUNC_2(VAR_1->ilebs);
 FUNC_1(VAR_1);
}
