
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct activemap {scalar_t__ am_magic; size_t am_diskmapsize; scalar_t__ am_diskmap; int am_mapsize; int am_memmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct activemap*) ;
 int FUNC_2 (scalar_t__,int ,int ) ;

const unsigned char *
FUNC_3(struct activemap *VAR_1, size_t *VAR_2)
{

 FUNC_0(VAR_1->am_magic == VAR_0);

 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_1->am_diskmapsize;
 FUNC_2(VAR_1->am_diskmap, VAR_1->am_memmap, VAR_1->am_mapsize);
 FUNC_1(VAR_1);
 return ((const unsigned char *)VAR_1->am_diskmap);
}
