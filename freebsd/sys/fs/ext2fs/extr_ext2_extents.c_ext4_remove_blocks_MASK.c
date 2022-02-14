
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {unsigned long e_blk; } ;


 int FUNC_0 (struct inode*,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_1 (struct ext4_extent*) ;
 unsigned long FUNC_2 (struct ext4_extent*) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_0, struct ext4_extent *VAR_1,
    unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;

 if (VAR_2 >= VAR_1->e_blk &&
     VAR_3 == VAR_1->e_blk + FUNC_2(VAR_1) - 1) {

  VAR_4 = VAR_1->e_blk + FUNC_2(VAR_1) - VAR_2;
  VAR_5 = FUNC_1(VAR_1) +
      FUNC_2(VAR_1) - VAR_4;
  FUNC_0(VAR_0, VAR_5, VAR_4, 0);
 }

 return (0);
}
