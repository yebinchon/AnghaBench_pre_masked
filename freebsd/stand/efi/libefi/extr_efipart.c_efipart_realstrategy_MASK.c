
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_9__ {TYPE_1__* d_dev; } ;
struct disk_devdesc {size_t d_offset; TYPE_2__ dd; } ;
struct devdesc {int dummy; } ;
struct TYPE_11__ {TYPE_5__* pd_blkio; } ;
typedef TYPE_4__ pdinfo_t ;
typedef int daddr_t ;
struct TYPE_12__ {TYPE_3__* Media; } ;
struct TYPE_10__ {size_t BlockSize; size_t LastBlock; unsigned int IoAlign; } ;
struct TYPE_8__ {scalar_t__ dv_type; } ;
typedef TYPE_5__ EFI_BLOCK_IO ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_0 (char*,char*,size_t) ;
 scalar_t__ FUNC_1 (struct disk_devdesc*,int ,size_t*) ;
 TYPE_4__* FUNC_2 (struct devdesc*) ;
 int FUNC_3 (TYPE_5__*,int const,int,size_t,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (unsigned int,size_t) ;
 size_t FUNC_6 (size_t,size_t) ;
 uintptr_t FUNC_7 (uintptr_t,unsigned int) ;

__attribute__((used)) static int
FUNC_8(void *VAR_9, int VAR_10, daddr_t VAR_11, size_t VAR_12,
    char *VAR_13, size_t *VAR_14)
{
 struct disk_devdesc *VAR_15 = (struct disk_devdesc *)VAR_9;
 pdinfo_t *VAR_16;
 EFI_BLOCK_IO *VAR_17;
 uint64_t VAR_18, VAR_19, VAR_20 = 0;
 char *VAR_21;
 size_t VAR_22, VAR_23, VAR_24;
 unsigned VAR_25;
 bool VAR_26;
 int VAR_27;
 uint64_t VAR_28, VAR_29;

 if (VAR_15 == ((void*)0) || VAR_11 < 0)
  return (VAR_3);

 VAR_16 = FUNC_2((struct devdesc *)VAR_15);
 if (VAR_16 == ((void*)0))
  return (VAR_3);

 VAR_17 = VAR_16->pd_blkio;
 if (VAR_17 == ((void*)0))
  return (VAR_6);

 if (VAR_12 == 0 || (VAR_12 % 512) != 0)
  return (VAR_4);

 VAR_18 = VAR_11 * 512;




 VAR_19 = 0;
 if (VAR_15->dd.d_dev->dv_type == VAR_1) {
  if (FUNC_1(VAR_15, VAR_2, &VAR_19) == 0) {

   VAR_19 /= VAR_17->Media->BlockSize;
  }
  VAR_20 = VAR_15->d_offset;
 }
 if (VAR_19 == 0)
  VAR_19 = VAR_17->Media->LastBlock + 1 - VAR_20;


 if ((VAR_18 + VAR_12) / VAR_17->Media->BlockSize > VAR_20 + VAR_19) {
  VAR_28 = VAR_20 + VAR_19;
  VAR_29 = VAR_18 / VAR_17->Media->BlockSize;

  if (VAR_28 <= VAR_29) {
   if (VAR_14 != ((void*)0))
    *VAR_14 = 0;

   return (VAR_4);
  }
  VAR_12 = VAR_28 - VAR_29;
  VAR_12 = VAR_12 * VAR_17->Media->BlockSize;
 }

 VAR_26 = 1;

 if ((VAR_12 % VAR_17->Media->BlockSize == 0) &&
     (VAR_18 % VAR_17->Media->BlockSize == 0))
  VAR_26 = 0;


 VAR_25 = VAR_17->Media->IoAlign;
 if (VAR_25 == 0)
  VAR_25++;

 if (VAR_25 > 1 && (uintptr_t)VAR_13 != FUNC_7((uintptr_t)VAR_13, VAR_25))
  VAR_26 = 1;

 if (VAR_26) {
  for (VAR_24 = VAR_0; VAR_24 > 0;
      VAR_24 -= VAR_17->Media->BlockSize) {
   VAR_21 = FUNC_5(VAR_25, VAR_24);
   if (VAR_21 != ((void*)0))
    break;
  }
 } else {
  VAR_21 = VAR_13;
  VAR_24 = VAR_12;
 }

 if (VAR_21 == ((void*)0))
  return (VAR_5);

 if (VAR_14 != ((void*)0))
  *VAR_14 = VAR_12;

 VAR_27 = 0;
 VAR_11 = VAR_18 / VAR_17->Media->BlockSize;
 VAR_22 = VAR_18 % VAR_17->Media->BlockSize;

 while (VAR_12 > 0) {
  size_t VAR_30 = FUNC_6(VAR_12, VAR_24);

  if (VAR_30 < VAR_17->Media->BlockSize)
   VAR_30 = 1;
  else
   VAR_30 /= VAR_17->Media->BlockSize;

  switch (VAR_10 & VAR_8) {
  case 129:
   VAR_23 = VAR_17->Media->BlockSize * VAR_30 - VAR_22;
   if (VAR_12 < VAR_23)
    VAR_23 = VAR_12;

   VAR_27 = FUNC_3(VAR_17, VAR_10, VAR_11, VAR_30, VAR_21);
   if (VAR_27 != 0)
    goto error;

   if (VAR_26)
    FUNC_0(VAR_21 + VAR_22, VAR_13, VAR_23);
   break;
  case 128:
   VAR_27 = 0;
   if (VAR_22 != 0) {




    VAR_30 = 1;
    VAR_23 = VAR_17->Media->BlockSize - VAR_22;
    VAR_23 = FUNC_6(VAR_23, VAR_12);
    VAR_27 = FUNC_3(VAR_17, 129, VAR_11, VAR_30,
        VAR_21);
   } else if (VAR_12 < VAR_17->Media->BlockSize) {




    VAR_30 = 1;
    VAR_23 = VAR_12;
    VAR_27 = FUNC_3(VAR_17, 129, VAR_11, VAR_30,
        VAR_21);
   } else {

    VAR_23 = VAR_17->Media->BlockSize * VAR_30;
   }

   if (VAR_27 != 0)
    goto error;




   if (VAR_26)
    FUNC_0(VAR_13, VAR_21 + VAR_22, VAR_23);
   VAR_27 = FUNC_3(VAR_17, 128, VAR_11, VAR_30, VAR_21);
   if (VAR_27 != 0)
    goto error;
   break;
  default:

   VAR_27 = VAR_7;
   goto error;
  }

  VAR_22 = 0;
  VAR_13 += VAR_23;
  VAR_12 -= VAR_23;
  VAR_11 += VAR_30;
 }

error:
 if (VAR_14 != ((void*)0))
  *VAR_14 -= VAR_12;

 if (VAR_26)
  FUNC_4(VAR_21);
 return (VAR_27);
}
