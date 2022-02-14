
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_sufile; } ;
struct TYPE_2__ {int flags; } ;
struct nilfs_sc_info {int sc_nfreesegs; int sc_freesegs; TYPE_1__ sc_stage; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nilfs_sc_info*) ;
 int FUNC_2 (struct nilfs_sc_info*,struct the_nilfs*) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct nilfs_sc_info *VAR_1,
        struct the_nilfs *VAR_2, int VAR_3)
{
 if (FUNC_4(VAR_3)) {
  FUNC_2(VAR_1, VAR_2);
  if (VAR_1->sc_stage.flags & VAR_0) {
   int VAR_4;

   VAR_4 = FUNC_3(VAR_2->ns_sufile,
       VAR_1->sc_freesegs,
       VAR_1->sc_nfreesegs,
       ((void*)0));
   FUNC_0(VAR_4);
  }
 }
 FUNC_1(VAR_1);
}
