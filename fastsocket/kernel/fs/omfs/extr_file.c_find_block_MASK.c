
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omfs_extent_entry {int e_cluster; int e_blocks; } ;
struct inode {int i_sb; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static sector_t FUNC_3(struct inode *VAR_0, struct omfs_extent_entry *VAR_1,
   sector_t VAR_2, int VAR_3, int *VAR_4)
{

 sector_t VAR_5 = 0;
 for (; VAR_3 > 1; VAR_3--) {
  int VAR_6 = FUNC_2(FUNC_0(VAR_0->i_sb),
   FUNC_1(VAR_1->e_blocks));

  if (VAR_2 >= VAR_5 &&
      VAR_2 < VAR_5 + VAR_6) {




   *VAR_4 = VAR_6 - (VAR_2 - VAR_5);
   return FUNC_2(FUNC_0(VAR_0->i_sb),
    FUNC_1(VAR_1->e_cluster)) +
    VAR_2 - VAR_5;
  }
  VAR_5 += VAR_6;
  VAR_1++;
 }
 return 0;
}
