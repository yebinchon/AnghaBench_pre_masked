
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {unsigned int length; char* s; } ;
struct lha {int header_crc; unsigned char dos_attr; size_t birthtime; size_t mtime; size_t atime; int setflag; int mode; int gid; int uid; TYPE_1__ uname; TYPE_1__ gname; int * sconv; void* origsize; void* compsize; int atime_tv_nsec; int mtime_tv_nsec; int birthtime_tv_nsec; TYPE_1__ dirname; TYPE_1__ filename; } ;
struct archive_string {char* s; } ;
struct archive_read {int archive; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct archive_read*,size_t,int *) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (unsigned char const*) ;
 size_t FUNC_3 (unsigned char const*) ;
 void* FUNC_4 (unsigned char const*) ;
 int FUNC_5 (int *,int ,char*) ;
 int * FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct archive_string*) ;
 int FUNC_9 (struct archive_string*) ;
 int FUNC_10 (struct archive_string*,char*,int) ;
 int FUNC_11 (TYPE_1__*,char const*,size_t) ;
 int FUNC_12 (int ,...) ;
 void* FUNC_13 (void*,int *) ;
 int FUNC_14 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_15(struct archive_read *VAR_6, struct lha *VAR_7,
    uint16_t *VAR_8, int VAR_9, size_t VAR_10, size_t *VAR_11)
{
 const void *VAR_12;
 const unsigned char *VAR_13;
 size_t VAR_14;
 size_t VAR_15;
 unsigned int VAR_16;
 unsigned char VAR_17;
 *VAR_11 = VAR_9;

 for (;;) {

  if ((VAR_12 =
      FUNC_0(VAR_6, VAR_9, ((void*)0))) == ((void*)0))
   return (FUNC_14(VAR_6));


  if (VAR_9 == sizeof(uint16_t))
   VAR_14 = FUNC_2(VAR_12);
  else
   VAR_14 = FUNC_3(VAR_12);
  if (VAR_14 == 0) {

   if (VAR_8 != ((void*)0))
    *VAR_8 = FUNC_12(*VAR_8, VAR_12, VAR_9);
   FUNC_1(VAR_6, VAR_9);
   return (VAR_2);
  }


  if (((uint64_t)*VAR_11 + VAR_14) >
        (uint64_t)VAR_10 ||
      VAR_14 <= (size_t)VAR_9)
   goto invalid;


  if ((VAR_12 = FUNC_0(VAR_6, VAR_14, ((void*)0))) == ((void*)0))
   return (FUNC_14(VAR_6));
  *VAR_11 += VAR_14;

  VAR_13 = (const unsigned char *)VAR_12;

  VAR_17 = VAR_13[VAR_9];

  VAR_15 = VAR_14 - (1 + VAR_9);

  VAR_13 += VAR_9 + 1;

  if (VAR_8 != ((void*)0) && VAR_17 != 0x00)
   *VAR_8 = FUNC_12(*VAR_8, VAR_12, VAR_14);
  switch (VAR_17) {
  case 0x00:


   if (VAR_15 >= 2) {
    VAR_7->header_crc = FUNC_2(VAR_13);
    if (VAR_8 != ((void*)0)) {
     static const char VAR_18[2] = {0, 0};
     *VAR_8 = FUNC_12(*VAR_8, VAR_12,
         VAR_14 - VAR_15);

     *VAR_8 = FUNC_12(*VAR_8, VAR_18, 2);
     *VAR_8 = FUNC_12(*VAR_8,
         VAR_13+2, VAR_15 - 2);
    }
   }
   break;
  case 0x01:
   if (VAR_15 == 0) {

    FUNC_7(&VAR_7->filename);
    break;
   }
   if (VAR_13[0] == '\0')
    goto invalid;
   FUNC_11(&VAR_7->filename,
       (const char *)VAR_13, VAR_15);
   break;
  case 0x02:
   if (VAR_15 == 0 || VAR_13[0] == '\0')

    goto invalid;

   FUNC_11(&VAR_7->dirname,
         (const char *)VAR_13, VAR_15);




   for (VAR_16 = 0; VAR_16 < VAR_7->dirname.length; VAR_16++) {
    if ((unsigned char)VAR_7->dirname.s[VAR_16] == 0xFF)
     VAR_7->dirname.s[VAR_16] = '/';
   }

   if (VAR_7->dirname.s[VAR_7->dirname.length-1] != '/')

    goto invalid;
   break;
  case 0x40:
   if (VAR_15 == 2)
    VAR_7->dos_attr = (unsigned char)
        (FUNC_2(VAR_13) & 0xff);
   break;
  case 0x41:
   if (VAR_15 == (sizeof(uint64_t) * 3)) {
    VAR_7->birthtime = FUNC_13(
        FUNC_4(VAR_13),
        &VAR_7->birthtime_tv_nsec);
    VAR_13 += sizeof(uint64_t);
    VAR_7->mtime = FUNC_13(
        FUNC_4(VAR_13),
        &VAR_7->mtime_tv_nsec);
    VAR_13 += sizeof(uint64_t);
    VAR_7->atime = FUNC_13(
        FUNC_4(VAR_13),
        &VAR_7->atime_tv_nsec);
    VAR_7->setflag |= VAR_4 |
        VAR_3;
   }
   break;
  case 0x42:
   if (VAR_15 == sizeof(uint64_t) * 2) {
    VAR_7->compsize = FUNC_4(VAR_13);
    VAR_13 += sizeof(uint64_t);
    VAR_7->origsize = FUNC_4(VAR_13);
   }
   break;
  case 0x46:



   if (VAR_15 == sizeof(uint32_t)) {
    struct archive_string VAR_19;
    const char *VAR_20;

    FUNC_9(&VAR_19);
    switch (FUNC_3(VAR_13)) {
    case 65001:
     VAR_20 = "UTF-8";
     break;
    default:
     FUNC_10(&VAR_19, "CP%d",
         (int)FUNC_3(VAR_13));
     VAR_20 = VAR_19.s;
     break;
    }
    VAR_7->sconv =
        FUNC_6(
     &(VAR_6->archive), VAR_20, 1);
    FUNC_8(&VAR_19);
    if (VAR_7->sconv == ((void*)0))
     return (VAR_1);
   }
   break;
  case 0x50:
   if (VAR_15 == sizeof(uint16_t)) {
    VAR_7->mode = FUNC_2(VAR_13);
    VAR_7->setflag |= VAR_5;
   }
   break;
  case 0x51:
   if (VAR_15 == (sizeof(uint16_t) * 2)) {
    VAR_7->gid = FUNC_2(VAR_13);
    VAR_7->uid = FUNC_2(VAR_13+2);
   }
   break;
  case 0x52:
   if (VAR_15 > 0)
    FUNC_11(&VAR_7->gname,
        (const char *)VAR_13, VAR_15);
   break;
  case 0x53:
   if (VAR_15 > 0)
    FUNC_11(&VAR_7->uname,
        (const char *)VAR_13, VAR_15);
   break;
  case 0x54:
   if (VAR_15 == sizeof(uint32_t))
    VAR_7->mtime = FUNC_3(VAR_13);
   break;
  case 0x7f:

   if (VAR_15 == 16) {
    VAR_7->dos_attr = (unsigned char)
        (FUNC_2(VAR_13) & 0xff);
    VAR_7->mode = FUNC_2(VAR_13+2);
    VAR_7->gid = FUNC_2(VAR_13+4);
    VAR_7->uid = FUNC_2(VAR_13+6);
    VAR_7->birthtime = FUNC_3(VAR_13+8);
    VAR_7->atime = FUNC_3(VAR_13+12);
    VAR_7->setflag |= VAR_5
        | VAR_4 | VAR_3;
   }
   break;
  case 0xff:
   if (VAR_15 == 20) {
    VAR_7->mode = (mode_t)FUNC_3(VAR_13);
    VAR_7->gid = FUNC_3(VAR_13+4);
    VAR_7->uid = FUNC_3(VAR_13+8);
    VAR_7->birthtime = FUNC_3(VAR_13+12);
    VAR_7->atime = FUNC_3(VAR_13+16);
    VAR_7->setflag |= VAR_5
        | VAR_4 | VAR_3;
   }
   break;
  case 0x43:
  case 0x44:
  case 0x45:
  default:
   break;
  }

  FUNC_1(VAR_6, VAR_14);
 }
invalid:
 FUNC_5(&VAR_6->archive, VAR_0,
     "Invalid extended LHa header");
 return (VAR_1);
}
