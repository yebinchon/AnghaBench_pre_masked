
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_8__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {size_t d_offset; TYPE_5__ dd; } ;
typedef size_t daddr_t ;
typedef char* caddr_t ;
struct TYPE_7__ {int bd_flags; size_t bd_sectorsize; size_t bd_sectors; } ;
typedef TYPE_2__ bdinfo_t ;
struct TYPE_6__ {scalar_t__ dv_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 size_t VAR_10 ;
 char* FUNC_1 (int ) ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_2 (char*,char*,size_t) ;
 TYPE_2__* FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct disk_devdesc*,TYPE_2__*,size_t,int,char*,int ) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,size_t) ;
 scalar_t__ FUNC_7 (struct disk_devdesc*,int ,size_t*) ;
 void* FUNC_8 (size_t,size_t) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,size_t,size_t) ;

__attribute__((used)) static int
FUNC_11(void *VAR_13, int VAR_14, daddr_t VAR_15, size_t VAR_16,
    char *VAR_17, size_t *VAR_18)
{
 struct disk_devdesc *VAR_19 = (struct disk_devdesc *)VAR_13;
 bdinfo_t *VAR_20;
 uint64_t VAR_21, VAR_22, VAR_23;
 size_t VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 caddr_t VAR_29 = ((void*)0);
 int VAR_30;

 VAR_20 = FUNC_3(&VAR_19->dd);
 if (VAR_20 == ((void*)0) || (VAR_20->bd_flags & VAR_0) == VAR_0)
  return (VAR_7);







 if (VAR_16 == 0 || (VAR_16 % VAR_3) != 0) {
  FUNC_10("bd_strategy: %d bytes I/O not multiple of %d\n",
      VAR_16, VAR_3);
  return (VAR_7);
 }

 FUNC_0("open_disk %p", VAR_19);

 VAR_22 = VAR_15 * VAR_3;
 VAR_15 = VAR_22 / VAR_20->bd_sectorsize;
 VAR_25 = VAR_22 % VAR_20->bd_sectorsize;







 if (VAR_16 > VAR_10) {
  FUNC_0("too large I/O: %zu bytes", VAR_16);
  return (VAR_7);
 }

 VAR_24 = VAR_16 / VAR_20->bd_sectorsize;
 if (VAR_24 == 0 || (VAR_16 % VAR_20->bd_sectorsize) != 0)
  VAR_24++;

 if (VAR_15 > VAR_15 + VAR_24)
  return (VAR_7);

 if (VAR_18)
  *VAR_18 = 0;





 VAR_23 = 0;
 VAR_21 = 0;
 if (VAR_19->dd.d_dev->dv_type == VAR_5) {
  if (FUNC_7(VAR_19, VAR_6, &VAR_21) == 0) {

   VAR_21 /= VAR_20->bd_sectorsize;
  }
  VAR_23 = VAR_19->d_offset;
 }
 if (VAR_21 == 0)
  VAR_21 = VAR_20->bd_sectors - VAR_23;


 if (VAR_15 < VAR_23 || VAR_15 >= VAR_23 + VAR_21)
  return (VAR_7);




 if (VAR_15 + VAR_24 >= VAR_23 + VAR_21) {
  VAR_24 = VAR_23 + VAR_21 - VAR_15;
  VAR_16 = VAR_24 * VAR_20->bd_sectorsize;
  FUNC_0("short I/O %d", VAR_24);
 }

 VAR_27 = FUNC_8(VAR_4, VAR_16);
 while (VAR_27 > VAR_20->bd_sectorsize) {
  VAR_29 = FUNC_5(VAR_27);
  if (VAR_29 != ((void*)0))
   break;
  VAR_27 -= VAR_20->bd_sectorsize;
 }
 if (VAR_29 == ((void*)0)) {
  VAR_27 = VAR_12;
  if (VAR_27 / VAR_20->bd_sectorsize == 0)
   FUNC_9("BUG: Real mode buffer is too small");


  VAR_29 = FUNC_1(VAR_11);
 }
 VAR_28 = VAR_16;
 VAR_30 = 0;
 while (VAR_24 > 0) {
  int VAR_31 = FUNC_8(VAR_24, VAR_27 / VAR_20->bd_sectorsize);

  switch (VAR_14 & VAR_9) {
  case 129:
   FUNC_0("read %d from %lld to %p", VAR_31, VAR_15, VAR_17);
   VAR_26 = VAR_20->bd_sectorsize * VAR_31 - VAR_25;
   if (VAR_28 < VAR_26)
    VAR_26 = VAR_28;

   if ((VAR_30 = FUNC_4(VAR_19, VAR_20, VAR_15, VAR_31, VAR_29, VAR_1)) != 0) {
    VAR_30 = VAR_7;
    goto error;
   }

   FUNC_2(VAR_29 + VAR_25, VAR_17, VAR_26);
   break;
  case 128 :
   FUNC_0("write %d from %lld to %p", VAR_31, VAR_15, VAR_17);
   if (VAR_25 != 0) {




    VAR_31 = 1;
    VAR_26 = VAR_20->bd_sectorsize - VAR_25;
    VAR_26 = FUNC_8(VAR_26, VAR_28);
    VAR_30 = FUNC_4(VAR_19, VAR_20, VAR_15, VAR_31, VAR_29, VAR_1);
   } else if (VAR_28 < VAR_20->bd_sectorsize) {




    VAR_31 = 1;
    VAR_26 = VAR_28;
    VAR_30 = FUNC_4(VAR_19, VAR_20, VAR_15, VAR_31, VAR_29, VAR_1);
   } else {

    VAR_26 = VAR_20->bd_sectorsize * VAR_31;
   }




   FUNC_2(VAR_17, VAR_29 + VAR_25, VAR_26);
   if ((VAR_30 = FUNC_4(VAR_19, VAR_20, VAR_15, VAR_31, VAR_29, VAR_2)) != 0) {
    VAR_30 = VAR_7;
    goto error;
   }

   break;
  default:

   VAR_30 = VAR_8;
   goto error;
  }

  VAR_25 = 0;
  VAR_17 += VAR_26;
  VAR_28 -= VAR_26;
  VAR_24 -= VAR_31;
  VAR_15 += VAR_31;
 }

 if (VAR_18 != ((void*)0))
  *VAR_18 = VAR_16;
error:
 if (VAR_29 != FUNC_1(VAR_11))
  FUNC_6(VAR_29, VAR_27);
 return (VAR_30);
}
