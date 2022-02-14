
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s; } ;
struct tar {scalar_t__ entry_bytes_remaining; scalar_t__ realsize; int sparse_allowed; int sconv; TYPE_1__ entry_linkpath; } ;
struct TYPE_6__ {int archive_format; } ;
struct archive_read {TYPE_4__ archive; } ;
struct archive_entry_header_ustar {char* typeflag; int mtime; int size; int gid; int uid; int mode; scalar_t__* linkname; } ;
struct archive_entry {int dummy; } ;
typedef int mode_t ;


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
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct archive_entry*,int ,int ,int ) ;
 int FUNC_1 (struct archive_entry*,int ,int ,int ) ;
 int FUNC_2 (struct archive_entry*,int ) ;
 int FUNC_3 (struct archive_entry*,scalar_t__) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_entry*,scalar_t__,int ) ;
 int FUNC_6 (struct archive_entry*,scalar_t__) ;
 int FUNC_7 (struct archive_entry*,scalar_t__) ;
 int FUNC_8 (struct archive_entry*) ;
 int FUNC_9 (struct archive_read*,int) ;
 int FUNC_10 (TYPE_4__*,int ,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,scalar_t__*,int) ;
 int FUNC_14 (struct archive_read*,int ,char*) ;
 scalar_t__ FUNC_15 (int ,int) ;

__attribute__((used)) static int
FUNC_16(struct archive_read *VAR_13, struct tar *VAR_14,
    struct archive_entry *VAR_15, const void *VAR_16)
{
 const struct archive_entry_header_ustar *VAR_17;
 char VAR_18;
 int VAR_19 = VAR_11;

 VAR_17 = (const struct archive_entry_header_ustar *)VAR_16;
 if (VAR_17->linkname[0])
  FUNC_13(&(VAR_14->entry_linkpath),
      VAR_17->linkname, sizeof(VAR_17->linkname));
 else
  FUNC_11(&(VAR_14->entry_linkpath));


 FUNC_4(VAR_15,
  (mode_t)FUNC_15(VAR_17->mode, sizeof(VAR_17->mode)));
 FUNC_7(VAR_15, FUNC_15(VAR_17->uid, sizeof(VAR_17->uid)));
 FUNC_3(VAR_15, FUNC_15(VAR_17->gid, sizeof(VAR_17->gid)));
 VAR_14->entry_bytes_remaining = FUNC_15(VAR_17->size, sizeof(VAR_17->size));
 if (VAR_14->entry_bytes_remaining < 0) {
  VAR_14->entry_bytes_remaining = 0;
  FUNC_10(&VAR_13->archive, VAR_6,
      "Tar entry has negative size");
  return (VAR_7);
 }
 if (VAR_14->entry_bytes_remaining == VAR_12) {

  VAR_14->entry_bytes_remaining = 0;
  FUNC_10(&VAR_13->archive, VAR_6,
      "Tar entry size overflow");
  return (VAR_7);
 }
 VAR_14->realsize = VAR_14->entry_bytes_remaining;
 FUNC_6(VAR_15, VAR_14->entry_bytes_remaining);
 FUNC_5(VAR_15, FUNC_15(VAR_17->mtime, sizeof(VAR_17->mtime)), 0);


 VAR_18 = VAR_17->typeflag[0];

 switch (VAR_18) {
 case '1':
  if (FUNC_0(VAR_15, VAR_14->entry_linkpath.s,
      FUNC_12(&(VAR_14->entry_linkpath)), VAR_14->sconv) != 0) {
   VAR_19 = FUNC_14(VAR_13, VAR_14->sconv,
       "Linkname");
   if (VAR_19 == VAR_7)
    return (VAR_19);
  }
  if (FUNC_8(VAR_15) > 0)
   FUNC_2(VAR_15, VAR_5);
  if (FUNC_8(VAR_15) == 0) {

  } else if (VAR_13->archive.archive_format
      == VAR_10) {

  } else if (VAR_13->archive.archive_format == VAR_8
      || VAR_13->archive.archive_format == VAR_9)
  {

   FUNC_6(VAR_15, 0);
   VAR_14->entry_bytes_remaining = 0;
  } else if (FUNC_9(VAR_13, 50) > 50) {






   FUNC_6(VAR_15, 0);
   VAR_14->entry_bytes_remaining = 0;
  }
  break;
 case '2':
  FUNC_2(VAR_15, VAR_4);
  FUNC_6(VAR_15, 0);
  VAR_14->entry_bytes_remaining = 0;
  if (FUNC_1(VAR_15, VAR_14->entry_linkpath.s,
      FUNC_12(&(VAR_14->entry_linkpath)), VAR_14->sconv) != 0) {
   VAR_19 = FUNC_14(VAR_13, VAR_14->sconv,
       "Linkname");
   if (VAR_19 == VAR_7)
    return (VAR_19);
  }
  break;
 case '3':
  FUNC_2(VAR_15, VAR_1);
  FUNC_6(VAR_15, 0);
  VAR_14->entry_bytes_remaining = 0;
  break;
 case '4':
  FUNC_2(VAR_15, VAR_0);
  FUNC_6(VAR_15, 0);
  VAR_14->entry_bytes_remaining = 0;
  break;
 case '5':
  FUNC_2(VAR_15, VAR_2);
  FUNC_6(VAR_15, 0);
  VAR_14->entry_bytes_remaining = 0;
  break;
 case '6':
  FUNC_2(VAR_15, VAR_3);
  FUNC_6(VAR_15, 0);
  VAR_14->entry_bytes_remaining = 0;
  break;
 case 'D':





  FUNC_2(VAR_15, VAR_2);
  break;
 case 'M':






  break;
 case 'N':



  FUNC_2(VAR_15, VAR_5);
  break;
 case 'S':





 case '0':





  VAR_14->sparse_allowed = 1;

 default:




  FUNC_2(VAR_15, VAR_5);
  break;
 }
 return (VAR_19);
}
