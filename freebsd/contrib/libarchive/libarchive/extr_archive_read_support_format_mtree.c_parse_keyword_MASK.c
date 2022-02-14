
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct mtree_option {char* value; } ;
struct mtree {int contents_name; } ;
struct archive_read {int archive; } ;
struct archive_entry {int dummy; } ;
typedef int mode_t ;
typedef scalar_t__ int64_t ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct archive_entry*,char*) ;
 int FUNC_1 (struct archive_entry*,char*) ;
 int FUNC_2 (struct archive_entry*,char*) ;
 int FUNC_3 (struct archive_entry*,char*) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_entry*,int ) ;
 int FUNC_6 (struct archive_entry*,scalar_t__) ;
 int FUNC_7 (struct archive_entry*,scalar_t__) ;
 int FUNC_8 (struct archive_entry*,int ,long) ;
 int FUNC_9 (struct archive_entry*,unsigned int) ;
 int FUNC_10 (struct archive_entry*,int ) ;
 int FUNC_11 (struct archive_entry*,int ) ;
 int FUNC_12 (struct archive_entry*,scalar_t__) ;
 int FUNC_13 (struct archive_entry*,scalar_t__) ;
 int FUNC_14 (int *,int ,char*,char*,...) ;
 int FUNC_15 (int *,char*) ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 (char**,int) ;
 int FUNC_19 (int *,int *,char*) ;
 int FUNC_20 (char*,int *) ;
 char* FUNC_21 (char*,char) ;
 scalar_t__ FUNC_22 (char*,char*) ;

__attribute__((used)) static int
FUNC_23(struct archive_read *VAR_22, struct mtree *VAR_23,
    struct archive_entry *VAR_24, struct mtree_option *VAR_25, int *VAR_26)
{
 char *VAR_27, *VAR_28;

 VAR_28 = VAR_25->value;

 if (*VAR_28 == '\0')
  return (VAR_7);

 if (FUNC_22(VAR_28, "nochange") == 0) {
  *VAR_26 |= VAR_15;
  return (VAR_7);
 }
 if (FUNC_22(VAR_28, "optional") == 0) {
  *VAR_26 |= VAR_16;
  return (VAR_7);
 }
 if (FUNC_22(VAR_28, "ignore") == 0) {





  return (VAR_7);
 }

 VAR_27 = FUNC_21(VAR_28, '=');
 if (VAR_27 == ((void*)0)) {
  FUNC_14(&VAR_22->archive, VAR_6,
      "Malformed attribute \"%s\" (%d)", VAR_28, VAR_28[0]);
  return (VAR_8);
 }

 *VAR_27 = '\0';
 ++VAR_27;

 switch (VAR_28[0]) {
 case 'c':
  if (FUNC_22(VAR_28, "content") == 0
      || FUNC_22(VAR_28, "contents") == 0) {
   FUNC_20(VAR_27, ((void*)0));
   FUNC_15(&VAR_23->contents_name, VAR_27);
   break;
  }
  if (FUNC_22(VAR_28, "cksum") == 0)
   break;
  VAR_21;
 case 'd':
  if (FUNC_22(VAR_28, "device") == 0) {


   int VAR_29;
   dev_t VAR_30;

   *VAR_26 |= VAR_9;
   VAR_29 = FUNC_19(&VAR_30, &VAR_22->archive, VAR_27);
   if (VAR_29 == VAR_7)
    FUNC_11(VAR_24, VAR_30);
   return VAR_29;
  }
  VAR_21;
 case 'f':
  if (FUNC_22(VAR_28, "flags") == 0) {
   *VAR_26 |= VAR_10;
   FUNC_0(VAR_24, VAR_27);
   break;
  }
  VAR_21;
 case 'g':
  if (FUNC_22(VAR_28, "gid") == 0) {
   *VAR_26 |= VAR_11;
   FUNC_6(VAR_24, FUNC_18(&VAR_27, 10));
   break;
  }
  if (FUNC_22(VAR_28, "gname") == 0) {
   *VAR_26 |= VAR_12;
   FUNC_1(VAR_24, VAR_27);
   break;
  }
  VAR_21;
 case 'i':
  if (FUNC_22(VAR_28, "inode") == 0) {
   FUNC_7(VAR_24, FUNC_18(&VAR_27, 10));
   break;
  }
  VAR_21;
 case 'l':
  if (FUNC_22(VAR_28, "link") == 0) {
   FUNC_2(VAR_24, VAR_27);
   break;
  }
  VAR_21;
 case 'm':
  if (FUNC_22(VAR_28, "md5") == 0 || FUNC_22(VAR_28, "md5digest") == 0)
   break;
  if (FUNC_22(VAR_28, "mode") == 0) {
   if (VAR_27[0] >= '0' && VAR_27[0] <= '7') {
    *VAR_26 |= VAR_17;
    FUNC_10(VAR_24,
        (mode_t)FUNC_18(&VAR_27, 8));
   } else {
    FUNC_14(&VAR_22->archive,
        VAR_6,
        "Symbolic or non-octal mode \"%s\" unsupported", VAR_27);
    return VAR_8;
   }
   break;
  }
  VAR_21;
 case 'n':
  if (FUNC_22(VAR_28, "nlink") == 0) {
   *VAR_26 |= VAR_14;
   FUNC_9(VAR_24,
    (unsigned int)FUNC_18(&VAR_27, 10));
   break;
  }
  VAR_21;
 case 'r':
  if (FUNC_22(VAR_28, "resdevice") == 0) {


   int VAR_31;
   dev_t VAR_32;

   VAR_31 = FUNC_19(&VAR_32, &VAR_22->archive, VAR_27);
   if (VAR_31 == VAR_7)
    FUNC_4(VAR_24, VAR_32);
   return VAR_31;
  }
  if (FUNC_22(VAR_28, "rmd160") == 0 ||
      FUNC_22(VAR_28, "rmd160digest") == 0)
   break;
  VAR_21;
 case 's':
  if (FUNC_22(VAR_28, "sha1") == 0 || FUNC_22(VAR_28, "sha1digest") == 0)
   break;
  if (FUNC_22(VAR_28, "sha256") == 0 ||
      FUNC_22(VAR_28, "sha256digest") == 0)
   break;
  if (FUNC_22(VAR_28, "sha384") == 0 ||
      FUNC_22(VAR_28, "sha384digest") == 0)
   break;
  if (FUNC_22(VAR_28, "sha512") == 0 ||
      FUNC_22(VAR_28, "sha512digest") == 0)
   break;
  if (FUNC_22(VAR_28, "size") == 0) {
   FUNC_12(VAR_24, FUNC_18(&VAR_27, 10));
   break;
  }
  VAR_21;
 case 't':
  if (FUNC_22(VAR_28, "tags") == 0) {





   break;
  }
  if (FUNC_22(VAR_28, "time") == 0) {
   int64_t VAR_33;
   int64_t VAR_34 = FUNC_16();
   int64_t VAR_35 = FUNC_17();
   long VAR_36 = 0;

   *VAR_26 |= VAR_13;
   VAR_33 = FUNC_18(&VAR_27, 10);



   if (*VAR_27 == '.') {
    ++VAR_27;
    VAR_36 = (long)FUNC_18(&VAR_27, 10);
    if (VAR_36 < 0)
     VAR_36 = 0;
    else if (VAR_36 > 999999999)
     VAR_36 = 999999999;
   }
   if (VAR_33 > VAR_34)
    VAR_33 = VAR_34;
   else if (VAR_33 < VAR_35)
    VAR_33 = VAR_35;
   FUNC_8(VAR_24, (time_t)VAR_33, VAR_36);
   break;
  }
  if (FUNC_22(VAR_28, "type") == 0) {
   switch (VAR_27[0]) {
   case 'b':
    if (FUNC_22(VAR_27, "block") == 0) {
     FUNC_5(VAR_24, VAR_0);
     break;
    }
    VAR_21;
   case 'c':
    if (FUNC_22(VAR_27, "char") == 0) {
     FUNC_5(VAR_24,
      VAR_1);
     break;
    }
    VAR_21;
   case 'd':
    if (FUNC_22(VAR_27, "dir") == 0) {
     FUNC_5(VAR_24,
      VAR_2);
     break;
    }
    VAR_21;
   case 'f':
    if (FUNC_22(VAR_27, "fifo") == 0) {
     FUNC_5(VAR_24,
      VAR_3);
     break;
    }
    if (FUNC_22(VAR_27, "file") == 0) {
     FUNC_5(VAR_24,
      VAR_5);
     break;
    }
    VAR_21;
   case 'l':
    if (FUNC_22(VAR_27, "link") == 0) {
     FUNC_5(VAR_24,
      VAR_4);
     break;
    }
    VAR_21;
   default:
    FUNC_14(&VAR_22->archive,
        VAR_6,
        "Unrecognized file type \"%s\"; "
        "assuming \"file\"", VAR_27);
    FUNC_5(VAR_24, VAR_5);
    return (VAR_8);
   }
   *VAR_26 |= VAR_18;
   break;
  }
  VAR_21;
 case 'u':
  if (FUNC_22(VAR_28, "uid") == 0) {
   *VAR_26 |= VAR_19;
   FUNC_13(VAR_24, FUNC_18(&VAR_27, 10));
   break;
  }
  if (FUNC_22(VAR_28, "uname") == 0) {
   *VAR_26 |= VAR_20;
   FUNC_3(VAR_24, VAR_27);
   break;
  }
  VAR_21;
 default:
  FUNC_14(&VAR_22->archive, VAR_6,
      "Unrecognized key %s=%s", VAR_28, VAR_27);
  return (VAR_8);
 }
 return (VAR_7);
}
