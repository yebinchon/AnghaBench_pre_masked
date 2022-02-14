
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_delegation {int dl_file; scalar_t__ dl_flock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct nfs4_delegation*) ;
 struct file* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct file*,int ,scalar_t__*) ;

__attribute__((used)) static void
FUNC_4(struct nfs4_delegation *VAR_2)
{
 struct file *VAR_3 = FUNC_1(VAR_2->dl_file);

 FUNC_0("NFSD: close_delegation dp %p\n",VAR_2);
 if (VAR_2->dl_flock)
  FUNC_3(VAR_3, VAR_0, &VAR_2->dl_flock);
 FUNC_2(VAR_2->dl_file, VAR_1);
}
