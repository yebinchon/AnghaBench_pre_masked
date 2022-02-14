
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct nfs_args {int dummy; } ;
struct mntarg {int dummy; } ;


 int FUNC_0 (void*,struct nfs_args*,int) ;
 int FUNC_1 (struct mntarg*,int ) ;
 struct mntarg* FUNC_2 (struct mntarg*,char*,struct nfs_args*,int) ;

__attribute__((used)) static int
FUNC_3(struct mntarg *VAR_0, void *VAR_1, uint64_t VAR_2)
{
 int VAR_3;
 struct nfs_args VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_4, sizeof (struct nfs_args));
 if (VAR_3)
  return VAR_3;

 VAR_0 = FUNC_2(VAR_0, "nfs_args", &VAR_4, sizeof VAR_4);

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 return (VAR_3);
}
