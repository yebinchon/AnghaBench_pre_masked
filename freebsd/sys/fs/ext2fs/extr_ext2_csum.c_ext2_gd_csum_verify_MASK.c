
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct m_ext2fs {unsigned int e2fs_gcount; TYPE_1__* e2fs_gd; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ ext4bgd_csum; } ;


 int VAR_0 ;
 char* FUNC_0 (struct cdev*) ;
 int FUNC_1 (struct m_ext2fs*,unsigned int,TYPE_1__*) ;
 int FUNC_2 (char*,char*,unsigned int,scalar_t__,int) ;

int
FUNC_3(struct m_ext2fs *VAR_1, struct cdev *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->e2fs_gcount; VAR_3++) {
  if (VAR_1->e2fs_gd[VAR_3].ext4bgd_csum !=
      FUNC_1(VAR_1, VAR_3, &VAR_1->e2fs_gd[VAR_3])) {
   FUNC_2(
"WARNING: mount of %s denied due bad gd=%d csum=0x%x, expected=0x%x - run fsck\n",
       FUNC_0(VAR_2), VAR_3, VAR_1->e2fs_gd[VAR_3].ext4bgd_csum,
       FUNC_1(VAR_1, VAR_3, &VAR_1->e2fs_gd[VAR_3]));
   VAR_4 = VAR_0;
   break;
  }
 }

 return (VAR_4);
}
