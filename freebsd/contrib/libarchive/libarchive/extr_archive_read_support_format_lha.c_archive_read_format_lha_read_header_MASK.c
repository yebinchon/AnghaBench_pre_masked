
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_string {int s; int length; } ;
struct lha {int end_of_entry; int found_first_header; unsigned char level; unsigned char* method; int directory; int entry_is_compressed; scalar_t__ compsize; int setflag; int mode; int dos_attr; scalar_t__ entry_bytes_remaining; char* format_name; scalar_t__ entry_crc_calculated; scalar_t__ entry_offset; scalar_t__ origsize; scalar_t__ atime_tv_nsec; scalar_t__ atime; scalar_t__ mtime_tv_nsec; scalar_t__ mtime; scalar_t__ birthtime_tv_nsec; scalar_t__ birthtime; struct archive_string gname; struct archive_string uname; scalar_t__ gid; scalar_t__ uid; int * sconv; struct archive_string dirname; struct archive_string filename; int * opt_sconv; scalar_t__ header_size; scalar_t__ entry_unconsumed; scalar_t__ end_of_entry_cleanup; scalar_t__ decompress_init; } ;
struct TYPE_4__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_2__ archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
typedef int signature ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (struct archive_read*,int,int *) ;
 scalar_t__ FUNC_1 (struct archive_entry*,int ,int ,int *) ;
 scalar_t__ FUNC_2 (struct archive_entry*,int ,int ,int *) ;
 int FUNC_3 (struct archive_entry*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct archive_entry*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct archive_entry*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct archive_entry*,scalar_t__) ;
 int FUNC_7 (struct archive_entry*,int ) ;
 int FUNC_8 (struct archive_entry*,int) ;
 int FUNC_9 (struct archive_entry*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct archive_entry*,scalar_t__) ;
 int FUNC_11 (struct archive_entry*,int *) ;
 int FUNC_12 (struct archive_entry*,scalar_t__) ;
 int FUNC_13 (struct archive_entry*,int ) ;
 int * FUNC_14 (struct archive_entry*) ;
 int FUNC_15 (struct archive_entry*) ;
 int FUNC_16 (struct archive_entry*) ;
 int FUNC_17 (struct archive_entry*) ;
 int FUNC_18 (struct archive_entry*) ;
 int FUNC_19 (TYPE_2__*,scalar_t__,char*,...) ;
 int FUNC_20 (struct archive_string*,struct archive_string*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct archive_string*,struct archive_string*) ;
 int FUNC_23 (struct archive_string*) ;
 int FUNC_24 (struct archive_string*) ;
 int FUNC_25 (struct archive_string*) ;
 scalar_t__ FUNC_26 (struct archive_string*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_27 (unsigned char const*) ;
 int FUNC_28 () ;
 int FUNC_29 (struct archive_string*,struct archive_string*) ;
 int FUNC_30 (struct archive_read*,struct lha*) ;
 int FUNC_31 (struct archive_read*,struct lha*) ;
 int FUNC_32 (struct archive_read*,struct lha*) ;
 int FUNC_33 (struct archive_read*,struct lha*) ;
 int FUNC_34 (struct lha*,struct archive_entry*) ;
 int FUNC_35 (struct archive_read*) ;
 scalar_t__ FUNC_36 (unsigned char*,char*,int) ;
 int FUNC_37 (char*,char*,unsigned char,unsigned char,unsigned char) ;
 int FUNC_38 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_39(struct archive_read *VAR_18,
    struct archive_entry *VAR_19)
{
 struct archive_string VAR_20;
 struct archive_string VAR_21;
 struct lha *VAR_22;
 const unsigned char *VAR_23;
 const char *VAR_24;
 int VAR_25;

 FUNC_28();

 VAR_18->archive.archive_format = VAR_8;
 if (VAR_18->archive.archive_format_name == ((void*)0))
  VAR_18->archive.archive_format_name = "lha";

 VAR_22 = (struct lha *)(VAR_18->format->data);
 VAR_22->decompress_init = 0;
 VAR_22->end_of_entry = 0;
 VAR_22->end_of_entry_cleanup = 0;
 VAR_22->entry_unconsumed = 0;

 if ((VAR_23 = FUNC_0(VAR_18, VAR_15, ((void*)0))) == ((void*)0)) {




  VAR_24 = FUNC_0(VAR_18, sizeof(VAR_24[0]), ((void*)0));
  if (VAR_24 == ((void*)0) || VAR_24[0] == 0)
   return (VAR_4);
  return (FUNC_38(VAR_18));
 }

 VAR_24 = (const char *)VAR_23;
 if (VAR_22->found_first_header == 0 &&
     VAR_24[0] == 'M' && VAR_24[1] == 'Z') {

  VAR_25 = FUNC_35(VAR_18);
  if (VAR_25 < VAR_9)
   return (VAR_25);

  if ((VAR_23 = FUNC_0(VAR_18, sizeof(*VAR_23), ((void*)0))) == ((void*)0))
   return (FUNC_38(VAR_18));
  VAR_24 = (const char *)VAR_23;
 }

 if (VAR_24[0] == 0)
  return (VAR_4);




 if (FUNC_27(VAR_23) != 0) {
  FUNC_19(&VAR_18->archive, VAR_5,
      "Bad LHa file");
  return (VAR_7);
 }


 VAR_22->found_first_header = 1;

 VAR_22->header_size = 0;
 VAR_22->level = VAR_23[VAR_13];
 VAR_22->method[0] = VAR_23[VAR_14+1];
 VAR_22->method[1] = VAR_23[VAR_14+2];
 VAR_22->method[2] = VAR_23[VAR_14+3];
 if (FUNC_36(VAR_22->method, "lhd", 3) == 0)
  VAR_22->directory = 1;
 else
  VAR_22->directory = 0;
 if (FUNC_36(VAR_22->method, "lh0", 3) == 0 ||
     FUNC_36(VAR_22->method, "lz4", 3) == 0)
  VAR_22->entry_is_compressed = 0;
 else
  VAR_22->entry_is_compressed = 1;

 VAR_22->compsize = 0;
 VAR_22->origsize = 0;
 VAR_22->setflag = 0;
 VAR_22->birthtime = 0;
 VAR_22->birthtime_tv_nsec = 0;
 VAR_22->mtime = 0;
 VAR_22->mtime_tv_nsec = 0;
 VAR_22->atime = 0;
 VAR_22->atime_tv_nsec = 0;
 VAR_22->mode = (VAR_22->directory)? 0777 : 0666;
 VAR_22->uid = 0;
 VAR_22->gid = 0;
 FUNC_23(&VAR_22->dirname);
 FUNC_23(&VAR_22->filename);
 VAR_22->dos_attr = 0;
 if (VAR_22->opt_sconv != ((void*)0))
  VAR_22->sconv = VAR_22->opt_sconv;
 else
  VAR_22->sconv = ((void*)0);

 switch (VAR_23[VAR_13]) {
 case 0:
  VAR_25 = FUNC_30(VAR_18, VAR_22);
  break;
 case 1:
  VAR_25 = FUNC_31(VAR_18, VAR_22);
  break;
 case 2:
  VAR_25 = FUNC_32(VAR_18, VAR_22);
  break;
 case 3:
  VAR_25 = FUNC_33(VAR_18, VAR_22);
  break;
 default:
  FUNC_19(&VAR_18->archive, VAR_5,
      "Unsupported LHa header level %d", VAR_23[VAR_13]);
  VAR_25 = VAR_7;
  break;
 }
 if (VAR_25 < VAR_9)
  return (VAR_25);


 if (!VAR_22->directory && FUNC_26(&VAR_22->filename) == 0)

  return (FUNC_38(VAR_18));




 FUNC_20(&VAR_22->dirname, &VAR_22->filename);
 FUNC_25(&VAR_21);
 FUNC_25(&VAR_20);
 FUNC_22(&VAR_21, &VAR_22->dirname);

 if ((VAR_22->mode & VAR_2) == VAR_1) {



  if (!FUNC_29(&VAR_20, &VAR_21)) {

   FUNC_19(&VAR_18->archive,
           VAR_5,
       "Unknown symlink-name");
   FUNC_24(&VAR_21);
   FUNC_24(&VAR_20);
   return (VAR_6);
  }
 } else {




  VAR_22->mode = (VAR_22->mode & ~VAR_2) |
      ((VAR_22->directory)? VAR_0: VAR_3);
 }
 if ((VAR_22->setflag & VAR_16) == 0 &&
     (VAR_22->dos_attr & 1) != 0)
  VAR_22->mode &= ~(0222);




 if (FUNC_1(VAR_19, VAR_21.s,
     VAR_21.length, VAR_22->sconv) != 0) {
  if (VAR_17 == VAR_12) {
   FUNC_19(&VAR_18->archive, VAR_12,
       "Can't allocate memory for Pathname");
   return (VAR_7);
  }
  FUNC_19(&VAR_18->archive,
      VAR_5,
      "Pathname cannot be converted "
      "from %s to current locale.",
      FUNC_21(VAR_22->sconv));
  VAR_25 = VAR_9;
 }
 FUNC_24(&VAR_21);
 if (FUNC_26(&VAR_20) > 0) {
  if (FUNC_2(VAR_19, VAR_20.s,
      VAR_20.length, VAR_22->sconv) != 0) {
   if (VAR_17 == VAR_12) {
    FUNC_19(&VAR_18->archive, VAR_12,
        "Can't allocate memory for Linkname");
    return (VAR_7);
   }
   FUNC_19(&VAR_18->archive,
       VAR_5,
       "Linkname cannot be converted "
       "from %s to current locale.",
       FUNC_21(VAR_22->sconv));
   VAR_25 = VAR_9;
  }
 } else
  FUNC_11(VAR_19, ((void*)0));
 FUNC_24(&VAR_20);





 if (VAR_23[VAR_13] == 0)
  FUNC_34(VAR_22, VAR_19);

 FUNC_8(VAR_19, VAR_22->mode);
 FUNC_12(VAR_19, VAR_22->uid);
 FUNC_6(VAR_19, VAR_22->gid);
 if (FUNC_26(&VAR_22->uname) > 0)
  FUNC_13(VAR_19, VAR_22->uname.s);
 if (FUNC_26(&VAR_22->gname) > 0)
  FUNC_7(VAR_19, VAR_22->gname.s);
 if (VAR_22->setflag & VAR_11) {
  FUNC_4(VAR_19, VAR_22->birthtime,
      VAR_22->birthtime_tv_nsec);
  FUNC_5(VAR_19, VAR_22->birthtime,
      VAR_22->birthtime_tv_nsec);
 } else {
  FUNC_16(VAR_19);
  FUNC_17(VAR_19);
 }
 FUNC_9(VAR_19, VAR_22->mtime, VAR_22->mtime_tv_nsec);
 if (VAR_22->setflag & VAR_10)
  FUNC_3(VAR_19, VAR_22->atime,
      VAR_22->atime_tv_nsec);
 else
  FUNC_15(VAR_19);
 if (VAR_22->directory || FUNC_14(VAR_19) != ((void*)0))
  FUNC_18(VAR_19);
 else
  FUNC_10(VAR_19, VAR_22->origsize);




 VAR_22->entry_bytes_remaining = VAR_22->compsize;
 if (VAR_22->entry_bytes_remaining < 0) {
  FUNC_19(&VAR_18->archive,
      VAR_5,
      "Invalid LHa entry size");
  return (VAR_7);
 }
 VAR_22->entry_offset = 0;
 VAR_22->entry_crc_calculated = 0;




 if (VAR_22->directory || VAR_22->compsize == 0)
  VAR_22->end_of_entry = 1;

 FUNC_37(VAR_22->format_name, "lha -%c%c%c-",
     VAR_22->method[0], VAR_22->method[1], VAR_22->method[2]);
 VAR_18->archive.archive_format_name = VAR_22->format_name;

 return (VAR_25);
}
