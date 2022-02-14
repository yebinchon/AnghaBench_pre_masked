
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct smbfs_args {scalar_t__ version; int flags; int caseopt; int dir_mode; int file_mode; int gid; int uid; int root_path; int dev; } ;
struct mntarg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (void*,struct smbfs_args*,int) ;
 int FUNC_1 (struct mntarg*,int ) ;
 struct mntarg* FUNC_2 (struct mntarg*,char*,int ,int) ;
 struct mntarg* FUNC_3 (struct mntarg*,int,char*) ;
 struct mntarg* FUNC_4 (struct mntarg*,char*,char*,int ) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct mntarg *VAR_7, void * VAR_8, uint64_t VAR_9)
{
 struct smbfs_args VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_8, &VAR_10, sizeof(struct smbfs_args));
 if (VAR_11)
  return VAR_11;

 if (VAR_10.version != VAR_6) {
  FUNC_5("mount version mismatch: kernel=%d, mount=%d\n",
      VAR_6, VAR_10.version);
  return VAR_0;
 }
 VAR_7 = FUNC_4(VAR_7, "dev", "%d", VAR_10.dev);
 VAR_7 = FUNC_3(VAR_7, VAR_10.flags & VAR_4, "nosoft");
 VAR_7 = FUNC_3(VAR_7, VAR_10.flags & VAR_2, "nointr");
 VAR_7 = FUNC_3(VAR_7, VAR_10.flags & VAR_5, "nostrong");
 VAR_7 = FUNC_3(VAR_7, VAR_10.flags & VAR_1, "nohave_nls");
 VAR_7 = FUNC_3(VAR_7, !(VAR_10.flags & VAR_3), "nolong");
 VAR_7 = FUNC_2(VAR_7, "rootpath", VAR_10.root_path, -1);
 VAR_7 = FUNC_4(VAR_7, "uid", "%d", VAR_10.uid);
 VAR_7 = FUNC_4(VAR_7, "gid", "%d", VAR_10.gid);
 VAR_7 = FUNC_4(VAR_7, "file_mode", "%d", VAR_10.file_mode);
 VAR_7 = FUNC_4(VAR_7, "dir_mode", "%d", VAR_10.dir_mode);
 VAR_7 = FUNC_4(VAR_7, "caseopt", "%d", VAR_10.caseopt);

 VAR_11 = FUNC_1(VAR_7, VAR_9);

 return (VAR_11);
}
