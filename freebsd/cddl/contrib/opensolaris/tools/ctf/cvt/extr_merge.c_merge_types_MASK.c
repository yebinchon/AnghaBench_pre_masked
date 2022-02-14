
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ md_parent; scalar_t__ md_tgt; int ** md_tdtbr; int * md_tdtba; int ** md_iitba; } ;
typedef TYPE_1__ merge_cb_data_t ;
typedef int list_t ;
typedef int hash_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,TYPE_1__*) ;
 int * FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_9(hash_t *VAR_7, merge_cb_data_t *VAR_8)
{
 list_t *VAR_9 = ((void*)0);
 list_t *VAR_10 = ((void*)0);
 int VAR_11, VAR_12;

 VAR_8->md_iitba = &VAR_9;
 VAR_8->md_tdtba = FUNC_5(VAR_0, VAR_6,
     VAR_5);
 VAR_8->md_tdtbr = &VAR_10;

 (void) FUNC_4(VAR_7, VAR_4, VAR_8);

 VAR_12 = FUNC_4(VAR_8->md_tdtba, VAR_2, VAR_8);
 FUNC_2(3, "add_tdtba_cb added %d items\n", VAR_12);

 VAR_11 = FUNC_7(*VAR_8->md_iitba, VAR_1, VAR_8);
 FUNC_2(3, "add_iitba_cb added %d items\n", VAR_11);

 FUNC_1(FUNC_6(*VAR_8->md_iitba) == 0 &&
     FUNC_3(VAR_8->md_tdtba) == 0);

 VAR_12 = FUNC_7(*VAR_8->md_tdtbr, VAR_3, VAR_8);
 FUNC_2(3, "add_tdtbr_cb added %d items\n", VAR_12);

 if (FUNC_6(*VAR_8->md_tdtbr) != 0)
  FUNC_0("Couldn't remap all nodes\n");
 if (VAR_8->md_parent == VAR_8->md_tgt) {
  FUNC_8(VAR_8);
 }
}
