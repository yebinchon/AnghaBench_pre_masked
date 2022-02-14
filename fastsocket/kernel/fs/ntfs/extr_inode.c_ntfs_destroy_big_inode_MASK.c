
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {int count; int page; } ;
typedef TYPE_1__ ntfs_inode ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (char*) ;

void FUNC_6(struct inode *VAR_1)
{
 ntfs_inode *VAR_2 = FUNC_2(VAR_1);

 FUNC_5("Entering.");
 FUNC_1(VAR_2->page);
 if (!FUNC_3(&VAR_2->count))
  FUNC_0();
 FUNC_4(VAR_0, FUNC_2(VAR_1));
}
