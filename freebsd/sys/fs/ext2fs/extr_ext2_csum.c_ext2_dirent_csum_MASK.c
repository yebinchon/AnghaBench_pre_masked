
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct m_ext2fs {int e2fs_csum_seed; } ;
struct inode {int i_gen; int i_number; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_direct_2 {int dummy; } ;
typedef int inum ;
typedef int gen ;


 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct inode *VAR_0, struct ext2fs_direct_2 *VAR_1, int VAR_2)
{
 struct m_ext2fs *VAR_3;
 char *VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 VAR_3 = VAR_0->i_e2fs;

 VAR_4 = (char *)VAR_1;

 VAR_5 = VAR_0->i_number;
 VAR_6 = VAR_0->i_gen;
 VAR_7 = FUNC_0(VAR_3->e2fs_csum_seed, (uint8_t *)&VAR_5, sizeof(VAR_5));
 VAR_7 = FUNC_0(VAR_7, (uint8_t *)&VAR_6, sizeof(VAR_6));
 VAR_7 = FUNC_0(VAR_7, (uint8_t *)VAR_4, VAR_2);

 return (VAR_7);
}
