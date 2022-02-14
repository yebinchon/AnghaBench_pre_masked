
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int s_flags; int * s_fs_info; } ;
struct TYPE_6__ {int major_ver; int cluster_size; int nls_map; int * upcase; scalar_t__ upcase_len; int * attrdef; scalar_t__ attrdef_size; int * mft_ino; int * mftmirr_ino; int * logfile_ino; int mftbmp_lock; int * mftbmp_ino; int lcnbmp_lock; int * lcnbmp_ino; int * root_ino; int * secure_ino; int * extend_ino; int * quota_ino; int * quota_q_ino; int * usnjrnl_ino; int * usnjrnl_max_ino; int * usnjrnl_j_ino; int * vol_ino; } ;
typedef TYPE_1__ ntfs_volume ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (struct super_block*,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;

__attribute__((used)) static void FUNC_18(struct super_block *VAR_6)
{
 ntfs_volume *VAR_7 = FUNC_0(VAR_6);

 FUNC_11("Entering.");

 FUNC_6();
 FUNC_4(VAR_7->vol_ino);
 VAR_7->vol_ino = ((void*)0);


 if (VAR_7->major_ver >= 3) {
  if (VAR_7->extend_ino) {
   FUNC_4(VAR_7->extend_ino);
   VAR_7->extend_ino = ((void*)0);
  }
  if (VAR_7->secure_ino) {
   FUNC_4(VAR_7->secure_ino);
   VAR_7->secure_ino = ((void*)0);
  }
 }

 FUNC_4(VAR_7->root_ino);
 VAR_7->root_ino = ((void*)0);

 FUNC_2(&VAR_7->lcnbmp_lock);
 FUNC_4(VAR_7->lcnbmp_ino);
 VAR_7->lcnbmp_ino = ((void*)0);
 FUNC_16(&VAR_7->lcnbmp_lock);

 FUNC_2(&VAR_7->mftbmp_lock);
 FUNC_4(VAR_7->mftbmp_ino);
 VAR_7->mftbmp_ino = ((void*)0);
 FUNC_16(&VAR_7->mftbmp_lock);
 FUNC_4(VAR_7->mft_ino);
 VAR_7->mft_ino = ((void*)0);


 VAR_7->attrdef_size = 0;
 if (VAR_7->attrdef) {
  FUNC_12(VAR_7->attrdef);
  VAR_7->attrdef = ((void*)0);
 }
 VAR_7->upcase_len = 0;




 FUNC_7(&VAR_3);
 if (VAR_7->upcase == VAR_2) {
  VAR_5--;
  VAR_7->upcase = ((void*)0);
 }
 if (!VAR_5 && VAR_2) {
  FUNC_12(VAR_2);
  VAR_2 = ((void*)0);
 }
 if (VAR_7->cluster_size <= 4096 && !--VAR_4)
  FUNC_3();
 FUNC_8(&VAR_3);
 if (VAR_7->upcase) {
  FUNC_12(VAR_7->upcase);
  VAR_7->upcase = ((void*)0);
 }

 FUNC_14(VAR_7->nls_map);

 VAR_6->s_fs_info = ((void*)0);
 FUNC_5(VAR_7);

 FUNC_15();
}
