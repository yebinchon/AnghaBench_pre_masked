
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct superblock_smack {int smk_sblock; scalar_t__ smk_initialized; int smk_hat; int smk_floor; int smk_default; int smk_root; } ;
struct super_block {struct superblock_smack* s_security; } ;
struct TYPE_4__ {int smk_known; } ;
struct TYPE_3__ {int smk_known; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct superblock_smack* FUNC_0 (int,int ) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_4)
{
 struct superblock_smack *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct superblock_smack), VAR_1);

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->smk_root = VAR_2.smk_known;
 VAR_5->smk_default = VAR_2.smk_known;
 VAR_5->smk_floor = VAR_2.smk_known;
 VAR_5->smk_hat = VAR_3.smk_known;
 VAR_5->smk_initialized = 0;
 FUNC_1(&VAR_5->smk_sblock);

 VAR_4->s_security = VAR_5;

 return 0;
}
