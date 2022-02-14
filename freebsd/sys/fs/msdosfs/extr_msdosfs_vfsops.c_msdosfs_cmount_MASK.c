
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct msdosfs_args {int flags; int cs_local; int cs_dos; int cs_win; int dirmask; int mask; int gid; int uid; int fspec; int export; } ;
struct mntarg {int dummy; } ;
struct export_args {int dummy; } ;
typedef int exp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (void*,struct msdosfs_args*,int) ;
 int FUNC_1 (struct mntarg*,int ) ;
 struct mntarg* FUNC_2 (struct mntarg*,char*,struct export_args*,int) ;
 struct mntarg* FUNC_3 (struct mntarg*,int,char*) ;
 struct mntarg* FUNC_4 (struct mntarg*,char*,char*,int ) ;
 struct mntarg* FUNC_5 (struct mntarg*,char*,int ,int ) ;
 int FUNC_6 (int *,struct export_args*) ;

__attribute__((used)) static int
FUNC_7(struct mntarg *VAR_7, void *VAR_8, uint64_t VAR_9)
{
 struct msdosfs_args VAR_10;
 struct export_args VAR_11;
 int VAR_12;

 if (VAR_8 == ((void*)0))
  return (VAR_0);
 VAR_12 = FUNC_0(VAR_8, &VAR_10, sizeof VAR_10);
 if (VAR_12)
  return (VAR_12);
 FUNC_6(&VAR_10.export, &VAR_11);

 VAR_7 = FUNC_5(VAR_7, "from", VAR_10.fspec, VAR_2);
 VAR_7 = FUNC_2(VAR_7, "export", &VAR_11, sizeof(VAR_11));
 VAR_7 = FUNC_4(VAR_7, "uid", "%d", VAR_10.uid);
 VAR_7 = FUNC_4(VAR_7, "gid", "%d", VAR_10.gid);
 VAR_7 = FUNC_4(VAR_7, "mask", "%d", VAR_10.mask);
 VAR_7 = FUNC_4(VAR_7, "dirmask", "%d", VAR_10.dirmask);

 VAR_7 = FUNC_3(VAR_7, VAR_10.flags & VAR_6, "noshortname");
 VAR_7 = FUNC_3(VAR_7, VAR_10.flags & VAR_4, "nolongname");
 VAR_7 = FUNC_3(VAR_7, !(VAR_10.flags & VAR_5), "nowin95");
 VAR_7 = FUNC_3(VAR_7, VAR_10.flags & VAR_3, "nokiconv");

 VAR_7 = FUNC_5(VAR_7, "cs_win", VAR_10.cs_win, VAR_1);
 VAR_7 = FUNC_5(VAR_7, "cs_dos", VAR_10.cs_dos, VAR_1);
 VAR_7 = FUNC_5(VAR_7, "cs_local", VAR_10.cs_local, VAR_1);

 VAR_12 = FUNC_1(VAR_7, VAR_9);

 return (VAR_12);
}
