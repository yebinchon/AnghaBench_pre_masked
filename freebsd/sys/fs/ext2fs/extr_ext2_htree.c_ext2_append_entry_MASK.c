
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct ext2fs_direct_2 {int e2d_reclen; int e2d_namlen; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ext2fs_direct_2*,struct ext2fs_direct_2*,int) ;

__attribute__((used)) static void
FUNC_2(char *VAR_0, uint32_t VAR_1,
    struct ext2fs_direct_2 *VAR_2,
    struct ext2fs_direct_2 *VAR_3, int VAR_4)
{
 uint16_t VAR_5;

 VAR_5 = FUNC_0(VAR_2->e2d_namlen);
 VAR_2->e2d_reclen = VAR_5;
 VAR_2 = (struct ext2fs_direct_2 *)((char *)VAR_2 + VAR_5);
 VAR_3->e2d_reclen = VAR_0 + VAR_1 - (char *)VAR_2 - VAR_4;
 FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_3->e2d_namlen));
}
