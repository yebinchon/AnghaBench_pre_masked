
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct activemap {scalar_t__ am_magic; int am_syncmap; int am_memmap; int am_diskmap; int am_memtab; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct activemap*) ;

void
FUNC_3(struct activemap *VAR_1)
{

 FUNC_0(VAR_1->am_magic == VAR_0);

 VAR_1->am_magic = 0;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1->am_memtab);
 FUNC_1(VAR_1->am_diskmap);
 FUNC_1(VAR_1->am_memmap);
 FUNC_1(VAR_1->am_syncmap);
}
