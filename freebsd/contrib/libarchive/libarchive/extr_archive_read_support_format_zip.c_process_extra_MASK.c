
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {int vendor; char strength; char compression; } ;
struct zip_entry {int uncompressed_size; int compressed_size; int local_header_offset; int mtime; int atime; int ctime; int uid; int gid; int system; int mode; TYPE_1__ aes_extra; int flags; } ;
struct zip {unsigned long (* crc32func ) (int ,char const*,int ) ;int * sconv_utf8; int ignore_crc32; } ;
struct archive_read {int archive; TYPE_2__* format; } ;
struct archive_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct archive_entry*,char const*,unsigned short,int *) ;
 char* FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (int *,int ,char*,...) ;
 int * FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_7 ;
 int FUNC_8 (char const*) ;
 unsigned long FUNC_9 (int ,char const*,int ) ;

__attribute__((used)) static int
FUNC_10(struct archive_read *VAR_8, struct archive_entry *VAR_9,
     const char *VAR_10, size_t VAR_11, struct zip_entry* VAR_12)
{
 unsigned VAR_13 = 0;
 struct zip *VAR_14 = (struct zip *)(VAR_8->format->data);

 if (VAR_11 == 0) {
  return VAR_4;
 }

 if (VAR_11 < 4) {
  size_t VAR_15 = 0;







  for (; VAR_15 < VAR_11; VAR_15++) {
   if (VAR_10[VAR_15] != 0) {
    FUNC_5(&VAR_8->archive,
        VAR_2,
        "Too-small extra data: "
        "Need at least 4 bytes, "
        "but only found %d bytes",
        (int)VAR_11);
    return VAR_3;
   }
  }

  return VAR_4;
 }

 while (VAR_13 <= VAR_11 - 4) {
  unsigned short VAR_16 = FUNC_2(VAR_10 + VAR_13);
  unsigned short VAR_17 = FUNC_2(VAR_10 + VAR_13 + 2);

  VAR_13 += 4;
  if (VAR_13 + VAR_17 > VAR_11) {
   FUNC_5(&VAR_8->archive,
       VAR_2, "Extra data overflow: "
       "Need %d bytes but only found %d bytes",
       (int)VAR_17, (int)(VAR_11 - VAR_13));
   return VAR_3;
  }




  switch (VAR_16) {
  case 0x0001:

   VAR_12->flags |= VAR_6;
   if (VAR_12->uncompressed_size == 0xffffffff) {
    uint64_t VAR_18 = 0;
    if (VAR_17 < 8
        || (VAR_18 = FUNC_4(VAR_10 + VAR_13)) >
        VAR_5) {
     FUNC_5(&VAR_8->archive,
         VAR_2,
         "Malformed 64-bit "
         "uncompressed size");
     return VAR_3;
    }
    VAR_12->uncompressed_size = VAR_18;
    VAR_13 += 8;
    VAR_17 -= 8;
   }
   if (VAR_12->compressed_size == 0xffffffff) {
    uint64_t VAR_19 = 0;
    if (VAR_17 < 8
        || (VAR_19 = FUNC_4(VAR_10 + VAR_13)) >
        VAR_5) {
     FUNC_5(&VAR_8->archive,
         VAR_2,
         "Malformed 64-bit "
         "compressed size");
     return VAR_3;
    }
    VAR_12->compressed_size = VAR_19;
    VAR_13 += 8;
    VAR_17 -= 8;
   }
   if (VAR_12->local_header_offset == 0xffffffff) {
    uint64_t VAR_20 = 0;
    if (VAR_17 < 8
        || (VAR_20 = FUNC_4(VAR_10 + VAR_13)) >
        VAR_5) {
     FUNC_5(&VAR_8->archive,
         VAR_2,
         "Malformed 64-bit "
         "local header offset");
     return VAR_3;
    }
    VAR_12->local_header_offset = VAR_20;
    VAR_13 += 8;
    VAR_17 -= 8;
   }



   break;
  case 0x5455:
  {

   int VAR_21;
   if (VAR_17 == 0) {
    FUNC_5(&VAR_8->archive,
        VAR_2,
        "Incomplete extended time field");
    return VAR_3;
   }
   VAR_21 = VAR_10[VAR_13];
   VAR_13++;
   VAR_17--;

   if (VAR_21 & 0x01)
   {





    if (VAR_17 < 4)
     break;
    VAR_12->mtime = FUNC_3(VAR_10 + VAR_13);
    VAR_13 += 4;
    VAR_17 -= 4;
   }
   if (VAR_21 & 0x02)
   {
    if (VAR_17 < 4)
     break;
    VAR_12->atime = FUNC_3(VAR_10 + VAR_13);
    VAR_13 += 4;
    VAR_17 -= 4;
   }
   if (VAR_21 & 0x04)
   {
    if (VAR_17 < 4)
     break;
    VAR_12->ctime = FUNC_3(VAR_10 + VAR_13);
    VAR_13 += 4;
    VAR_17 -= 4;
   }
   break;
  }
  case 0x5855:
  {

   if (VAR_17 >= 8) {
    VAR_12->atime = FUNC_3(VAR_10 + VAR_13);
    VAR_12->mtime =
        FUNC_3(VAR_10 + VAR_13 + 4);
   }
   if (VAR_17 >= 12) {
    VAR_12->uid =
        FUNC_2(VAR_10 + VAR_13 + 8);
    VAR_12->gid =
        FUNC_2(VAR_10 + VAR_13 + 10);
   }
   break;
  }
  case 0x6c78:
  {
   int VAR_22, VAR_23;

   if (VAR_17 < 1)
    break;
   VAR_23 = VAR_22 = 0xff & VAR_10[VAR_13];
   VAR_13 += 1;
   VAR_17 -= 1;


   while ((VAR_23 & 0x80) != 0
       && VAR_17 >= 1) {
    VAR_23 = VAR_10[VAR_13];
    VAR_13 += 1;
    VAR_17 -= 1;
   }

   if (VAR_22 & 1) {

    if (VAR_17 < 2)
     break;
    VAR_12->system
        = FUNC_2(VAR_10 + VAR_13) >> 8;
    VAR_13 += 2;
    VAR_17 -= 2;
   }
   if (VAR_22 & 2) {

    uint32_t VAR_24;
    if (VAR_17 < 2)
     break;
    VAR_24
        = FUNC_2(VAR_10 + VAR_13);

    (void)VAR_24;
    VAR_13 += 2;
    VAR_17 -= 2;
   }
   if (VAR_22 & 4) {

    uint32_t VAR_25;
    if (VAR_17 < 4)
     break;
    VAR_25
        = FUNC_3(VAR_10 + VAR_13);
    if (VAR_12->system == 3) {
     VAR_12->mode
         = VAR_25 >> 16;
    } else if (VAR_12->system == 0) {

     if (0x10 == (VAR_25 &
         0x10)) {
      VAR_12->mode =
          VAR_0 | 0775;
     } else {
      VAR_12->mode =
          VAR_1 | 0664;
     }
     if (0x01 == (VAR_25 &
         0x01)) {


      VAR_12->mode &= 0555;
     }
    } else {
     VAR_12->mode = 0;
    }
    VAR_13 += 4;
    VAR_17 -= 4;
   }
   if (VAR_22 & 8) {

    uint32_t VAR_26;
    if (VAR_17 < 2)
     break;
    VAR_26
        = FUNC_2(VAR_10 + VAR_13);
    VAR_13 += 2;
    VAR_17 -= 2;

    if (VAR_17 < VAR_26)
     break;

    VAR_13 += VAR_26;
    VAR_17 -= VAR_26;
   }
   break;
  }
  case 0x7075:
  {

   if (VAR_17 < 5 || VAR_9 == ((void*)0))
    break;
   VAR_13 += 5;
   VAR_17 -= 5;



   if (VAR_14->sconv_utf8 == ((void*)0)) {
    VAR_14->sconv_utf8 =
     FUNC_6(
     &VAR_8->archive, "UTF-8", 1);



    if (VAR_14->sconv_utf8 == ((void*)0))
     break;
   }


   if (!VAR_14->ignore_crc32) {
    const char *VAR_27 = FUNC_1(VAR_9);
    if (VAR_27) {
     unsigned long VAR_28 =
         VAR_14->crc32func(0, VAR_27, FUNC_8(VAR_27));
     unsigned long VAR_29 =
         FUNC_3(VAR_10 + VAR_13 - 4);
     if (VAR_28 != VAR_29) {







      break;
     }
    }
   }

   if (FUNC_0(VAR_9,
       VAR_10 + VAR_13, VAR_17, VAR_14->sconv_utf8) != 0) {






   }
   break;
  }
  case 0x7855:






   if (VAR_17 >= 2)
    VAR_12->uid = FUNC_2(VAR_10 + VAR_13);
   if (VAR_17 >= 4)
    VAR_12->gid =
        FUNC_2(VAR_10 + VAR_13 + 2);
   break;
  case 0x7875:
  {

   int VAR_30 = 0, VAR_31 = 0;


   if (VAR_17 >= 1 && VAR_10[VAR_13] == 1) {
    if (VAR_17 >= 4) {

     VAR_30 = 0xff & (int)VAR_10[VAR_13+1];
     if (VAR_30 == 2)
      VAR_12->uid =
          FUNC_2(
              VAR_10 + VAR_13 + 2);
     else if (VAR_30 == 4 && VAR_17 >= 6)
      VAR_12->uid =
          FUNC_3(
              VAR_10 + VAR_13 + 2);
    }
    if (VAR_17 >= (2 + VAR_30 + 3)) {

     VAR_31 = 0xff &
         (int)VAR_10[VAR_13+2+VAR_30];
     if (VAR_31 == 2)
      VAR_12->gid =
          FUNC_2(
              VAR_10+VAR_13+2+VAR_30+1);
     else if (VAR_31 == 4 &&
         VAR_17 >= (2 + VAR_30 + 5))
      VAR_12->gid =
          FUNC_3(
              VAR_10+VAR_13+2+VAR_30+1);
    }
   }
   break;
  }
  case 0x9901:

   if (VAR_17 < 6) {
    FUNC_5(&VAR_8->archive,
        VAR_2,
        "Incomplete AES field");
    return VAR_3;
   }
   if (VAR_10[VAR_13 + 2] == 'A' && VAR_10[VAR_13 + 3] == 'E') {

    VAR_12->aes_extra.vendor =
        FUNC_2(VAR_10 + VAR_13);

    VAR_12->aes_extra.strength = VAR_10[VAR_13 + 4];

    VAR_12->aes_extra.compression =
        VAR_10[VAR_13 + 5];
   }
   break;
  default:
   break;
  }
  VAR_13 += VAR_17;
 }
 return VAR_4;
}
