
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_group_desc {int pg_nfrees; } ;
struct inode {int dummy; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static unsigned long
FUNC_4(struct inode *VAR_0, unsigned long VAR_1,
          const struct nilfs_palloc_group_desc *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(FUNC_1(VAR_0, VAR_1));
 VAR_3 = FUNC_0(VAR_2->pg_nfrees);
 FUNC_3(FUNC_1(VAR_0, VAR_1));
 return VAR_3;
}
