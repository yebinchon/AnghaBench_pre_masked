
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct activemap {scalar_t__ am_magic; size_t am_mapsize; int am_nextents; scalar_t__ am_ndirty; int * am_memtab; int am_memmap; int am_syncmap; int am_diskmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct activemap*) ;
 int FUNC_2 (int ,int,int*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct activemap*,int) ;
 int FUNC_5 (int ,unsigned char const*,size_t) ;

void
FUNC_6(struct activemap *VAR_1, const unsigned char *VAR_2, size_t VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1->am_magic == VAR_0);
 FUNC_0(VAR_3 >= VAR_1->am_mapsize);

 FUNC_5(VAR_1->am_diskmap, VAR_2, VAR_1->am_mapsize);
 FUNC_5(VAR_1->am_memmap, VAR_2, VAR_1->am_mapsize);
 FUNC_5(VAR_1->am_syncmap, VAR_2, VAR_1->am_mapsize);

 FUNC_2(VAR_1->am_memmap, VAR_1->am_nextents, &VAR_4);
 if (VAR_4 == -1) {

  return;
 }



 FUNC_1(VAR_1);





 VAR_1->am_ndirty = 0;
 for (; VAR_4 < VAR_1->am_nextents; VAR_4++) {
  if (FUNC_3(VAR_1->am_memmap, VAR_4)) {
   VAR_1->am_memtab[VAR_4] = FUNC_4(VAR_1, VAR_4);
   VAR_1->am_ndirty++;
  }
 }
}
