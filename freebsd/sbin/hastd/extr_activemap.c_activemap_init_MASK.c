
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct activemap {int am_mediasize; int am_nextents; int am_diskmapsize; int am_syncoff; scalar_t__ am_magic; struct activemap* am_syncmap; struct activemap* am_memmap; struct activemap* am_diskmap; struct activemap* am_memtab; scalar_t__ am_nkeepdirty; int am_keepdirty; scalar_t__ am_ndirty; int am_mapsize; int am_extentshift; scalar_t__ am_extentsize; scalar_t__ am_nkeepdirty_limit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int,int) ;
 int VAR_2 ;
 int FUNC_6 (struct activemap*) ;
 struct activemap* FUNC_7 (int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;

int
FUNC_10(struct activemap **VAR_3, uint64_t VAR_4, uint32_t VAR_5,
    uint32_t VAR_6, uint32_t VAR_7)
{
 struct activemap *VAR_8;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_4 > 0);
 FUNC_0(VAR_5 > 0);
 FUNC_0(FUNC_8(VAR_5));
 FUNC_0(VAR_6 > 0);
 FUNC_0(FUNC_8(VAR_6));
 FUNC_0(VAR_7 > 0);

 VAR_8 = FUNC_7(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0))
  return (-1);

 VAR_8->am_mediasize = VAR_4;
 VAR_8->am_nkeepdirty_limit = VAR_7;
 VAR_8->am_extentsize = VAR_5;
 VAR_8->am_extentshift = FUNC_3(VAR_5 - 1);
 VAR_8->am_nextents = ((VAR_4 - 1) / VAR_5) + 1;
 VAR_8->am_mapsize = FUNC_4(VAR_8->am_nextents);
 VAR_8->am_diskmapsize = FUNC_9(VAR_8->am_mapsize, VAR_6);
 VAR_8->am_ndirty = 0;
 VAR_8->am_syncoff = -2;
 FUNC_1(&VAR_8->am_keepdirty);
 VAR_8->am_nkeepdirty = 0;

 VAR_8->am_memtab = FUNC_5(VAR_8->am_nextents, sizeof(VAR_8->am_memtab[0]));
 VAR_8->am_diskmap = FUNC_5(1, VAR_8->am_diskmapsize);
 VAR_8->am_memmap = FUNC_2(VAR_8->am_nextents);
 VAR_8->am_syncmap = FUNC_2(VAR_8->am_nextents);




 if (VAR_8->am_memtab == ((void*)0) || VAR_8->am_diskmap == ((void*)0) ||
     VAR_8->am_memmap == ((void*)0) || VAR_8->am_syncmap == ((void*)0)) {
  if (VAR_8->am_memtab != ((void*)0))
   FUNC_6(VAR_8->am_memtab);
  if (VAR_8->am_diskmap != ((void*)0))
   FUNC_6(VAR_8->am_diskmap);
  if (VAR_8->am_memmap != ((void*)0))
   FUNC_6(VAR_8->am_memmap);
  if (VAR_8->am_syncmap != ((void*)0))
   FUNC_6(VAR_8->am_syncmap);
  VAR_8->am_magic = 0;
  FUNC_6(VAR_8);
  VAR_2 = VAR_1;
  return (-1);
 }

 VAR_8->am_magic = VAR_0;
 *VAR_3 = VAR_8;

 return (0);
}
