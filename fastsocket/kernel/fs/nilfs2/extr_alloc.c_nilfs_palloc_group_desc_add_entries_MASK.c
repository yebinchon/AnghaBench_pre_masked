
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nilfs_palloc_group_desc {int pg_nfrees; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct inode*,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct inode *VAR_0,
        unsigned long VAR_1,
        struct nilfs_palloc_group_desc *VAR_2,
        u32 VAR_3)
{
 FUNC_2(FUNC_1(VAR_0, VAR_1));
 FUNC_0(&VAR_2->pg_nfrees, VAR_3);
 FUNC_3(FUNC_1(VAR_0, VAR_1));
}
