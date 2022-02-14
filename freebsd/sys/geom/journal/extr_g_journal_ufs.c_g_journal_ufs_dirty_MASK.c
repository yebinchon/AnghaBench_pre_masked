
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_consumer {TYPE_1__* provider; } ;
struct fs {int fs_flags; struct fs* fs_csp; int fs_sblockloc; scalar_t__ fs_clean; } ;
struct TYPE_2__ {int sectorsize; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct g_consumer*,struct fs**,int ,int ,int ) ;
 int FUNC_3 (struct g_consumer*,struct fs*,int ,int ) ;
 int FUNC_4 (struct fs*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_5(struct g_consumer *VAR_7)
{
 struct fs *VAR_8;
 int VAR_9;

 VAR_8 = ((void*)0);
 if (VAR_3 % VAR_7->provider->sectorsize != 0 ||
     FUNC_2(VAR_7, &VAR_8, VAR_4, VAR_2, VAR_5) != 0) {
  FUNC_0(0, "Cannot find superblock to mark file system %s "
      "as dirty.", VAR_7->provider->name);
  FUNC_1(VAR_8 == ((void*)0),
      ("g_journal_ufs_dirty: non-NULL fs %p\n", VAR_8));
  return;
 }
 FUNC_0(0, "clean=%d flags=0x%x", VAR_8->fs_clean, VAR_8->fs_flags);
 VAR_8->fs_clean = 0;
 VAR_8->fs_flags |= VAR_0 | VAR_1;
 VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_8->fs_sblockloc, VAR_6);
 FUNC_4(VAR_8->fs_csp);
 FUNC_4(VAR_8);
 if (VAR_9 != 0) {
  FUNC_0(0, "Cannot mark file system %s as dirty "
      "(error=%d).", VAR_7->provider->name, VAR_9);
 } else {
  FUNC_0(0, "File system %s marked as dirty.",
      VAR_7->provider->name);
 }
}
