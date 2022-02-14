
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ page_ofs; int * page; } ;
typedef TYPE_1__ ntfs_inode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(ntfs_inode *VAR_0)
{
 FUNC_0(!VAR_0->page);


 FUNC_1(VAR_0->page);
 VAR_0->page = ((void*)0);
 VAR_0->page_ofs = 0;
 return;
}
