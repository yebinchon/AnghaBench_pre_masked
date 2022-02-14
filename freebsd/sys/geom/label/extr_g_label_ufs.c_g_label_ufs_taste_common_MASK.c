
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_provider {int sectorsize; int name; } ;
struct g_consumer {struct g_provider* provider; } ;
struct fs {scalar_t__ fs_magic; scalar_t__ fs_fsize; char* fs_volname; int* fs_id; struct fs* fs_csp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,char*,int ) ;
 scalar_t__ FUNC_1 (struct g_provider*,struct fs*,int ) ;


 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct g_consumer*,struct fs**,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct fs*) ;
 int FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 (char*,size_t,char*,int,int) ;
 int FUNC_7 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_8(struct g_consumer *VAR_9, char *VAR_10, size_t VAR_11, int VAR_12)
{
 struct g_provider *VAR_13;
 struct fs *VAR_14;

 FUNC_5();
 VAR_13 = VAR_9->provider;
 VAR_10[0] = '\0';

 VAR_14 = ((void*)0);
 if (VAR_3 % VAR_13->sectorsize != 0 || FUNC_3(VAR_9, &VAR_14,
     VAR_4, VAR_2, VAR_8) != 0) {
  FUNC_2(VAR_14 == ((void*)0),
      ("g_label_ufs_taste_common: non-NULL fs %p\n", VAR_14));
  return;
 }
 if (VAR_14->fs_magic == VAR_0 && VAR_14->fs_fsize > 0 &&
     ( FUNC_1(VAR_13, VAR_14, VAR_5)
  || FUNC_1(VAR_13, VAR_14, VAR_6))) {

 } else if (VAR_14->fs_magic == VAR_1 && VAR_14->fs_fsize > 0 &&
     ( FUNC_1(VAR_13, VAR_14, VAR_7)
  || FUNC_1(VAR_13, VAR_14, VAR_6))) {

 } else {
  goto out;
 }
 FUNC_0(1, "%s file system detected on %s.",
     VAR_14->fs_magic == VAR_0 ? "UFS1" : "UFS2", VAR_13->name);
 switch (VAR_12) {
 case 128:

  if (VAR_14->fs_volname[0] != '\0')
   FUNC_7(VAR_10, VAR_14->fs_volname, VAR_11);
  break;
 case 129:
  if (VAR_14->fs_id[0] != 0 || VAR_14->fs_id[1] != 0)
   FUNC_6(VAR_10, VAR_11, "%08x%08x", VAR_14->fs_id[0],
       VAR_14->fs_id[1]);
  break;
 }
out:
 FUNC_4(VAR_14->fs_csp);
 FUNC_4(VAR_14);
}
