
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int fi_inode; int fi_hash; int fi_ref; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct nfs4_file*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void
FUNC_5(struct nfs4_file *VAR_2)
{
 if (FUNC_0(&VAR_2->fi_ref, &VAR_1)) {
  FUNC_3(&VAR_2->fi_hash);
  FUNC_4(&VAR_1);
  FUNC_1(VAR_2->fi_inode);
  FUNC_2(VAR_0, VAR_2);
 }
}
