
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_bucket {int bu_blocks; int * bu_bhs; int bu_inode; } ;
typedef int handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(handle_t *VAR_0,
          struct ocfs2_xattr_bucket *VAR_1,
          int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->bu_blocks; VAR_3++) {
  VAR_4 = FUNC_2(VAR_0,
       FUNC_0(VAR_1->bu_inode),
       VAR_1->bu_bhs[VAR_3], VAR_2);
  if (VAR_4) {
   FUNC_1(VAR_4);
   break;
  }
 }

 return VAR_4;
}
