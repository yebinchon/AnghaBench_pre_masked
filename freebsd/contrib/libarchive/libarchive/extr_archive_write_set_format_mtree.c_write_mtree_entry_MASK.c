
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uintmax_t ;
struct archive_string {int length; int s; } ;
struct TYPE_8__ {int keys; scalar_t__ processing; } ;
struct mtree_writer {struct archive_string buf; scalar_t__ classic; scalar_t__ indent; TYPE_3__ set; struct archive_string ebuf; scalar_t__ output_global_set; int dironly; } ;
struct TYPE_9__ {unsigned int s; } ;
struct TYPE_10__ {unsigned int s; } ;
struct TYPE_7__ {unsigned int s; } ;
struct TYPE_6__ {unsigned int s; } ;
struct mtree_entry {int nlink; int filetype; int reg_info; scalar_t__ size; scalar_t__ rdevminor; scalar_t__ rdevmajor; TYPE_4__ symlink; scalar_t__ devminor; scalar_t__ devmajor; scalar_t__ ino; scalar_t__ uid; scalar_t__ gid; scalar_t__ mode; scalar_t__ mtime_nsec; scalar_t__ mtime; TYPE_5__ fflags_text; TYPE_5__ uname; TYPE_5__ gname; TYPE_2__ basename; TYPE_1__ parentdir; scalar_t__ dir_info; } ;
struct archive_write {struct mtree_writer* format_data; } ;
typedef unsigned int intmax_t ;
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
 int FUNC_0 (struct archive_write*,int ,int) ;
 int FUNC_1 (struct archive_string*,char) ;
 int FUNC_2 (struct archive_string*,char*) ;
 int FUNC_3 (struct archive_string*) ;
 int FUNC_4 (struct archive_string*,char*,unsigned int,...) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct mtree_writer*,struct mtree_entry*) ;
 int FUNC_7 (struct mtree_writer*) ;
 int FUNC_8 (struct archive_string*,unsigned int) ;
 int FUNC_9 (struct archive_string*,int ) ;
 int FUNC_10 (struct mtree_writer*) ;

__attribute__((used)) static int
FUNC_11(struct archive_write *VAR_15, struct mtree_entry *VAR_16)
{
 struct mtree_writer *VAR_17 = VAR_15->format_data;
 struct archive_string *VAR_18;
 int VAR_19, VAR_20;

 if (VAR_16->dir_info) {
  if (VAR_17->classic) {





   if (!VAR_17->dironly)
    FUNC_1(&VAR_17->buf, '\n');
   if (VAR_16->parentdir.s)
    FUNC_4(&VAR_17->buf,
        "# %s/%s\n",
        VAR_16->parentdir.s, VAR_16->basename.s);
   else
    FUNC_4(&VAR_17->buf,
        "# %s\n",
        VAR_16->basename.s);
  }
  if (VAR_17->output_global_set)
   FUNC_10(VAR_17);
 }
 FUNC_3(&VAR_17->ebuf);
 VAR_18 = (VAR_17->indent || VAR_17->classic)? &VAR_17->ebuf : &VAR_17->buf;

 if (!VAR_17->classic && VAR_16->parentdir.s) {




  FUNC_8(VAR_18, VAR_16->parentdir.s);
  FUNC_1(VAR_18, '/');
 }
 FUNC_8(VAR_18, VAR_16->basename.s);

 VAR_19 = FUNC_6(VAR_17, VAR_16);
 if ((VAR_19 & VAR_7) != 0 &&
     VAR_16->nlink != 1 && VAR_16->filetype != 132)
  FUNC_4(VAR_18, " nlink=%u", VAR_16->nlink);

 if ((VAR_19 & VAR_4) != 0 && FUNC_5(&VAR_16->gname) > 0) {
  FUNC_2(VAR_18, " gname=");
  FUNC_8(VAR_18, VAR_16->gname.s);
 }
 if ((VAR_19 & VAR_14) != 0 && FUNC_5(&VAR_16->uname) > 0) {
  FUNC_2(VAR_18, " uname=");
  FUNC_8(VAR_18, VAR_16->uname.s);
 }
 if ((VAR_19 & VAR_2) != 0) {
  if (FUNC_5(&VAR_16->fflags_text) > 0) {
   FUNC_2(VAR_18, " flags=");
   FUNC_8(VAR_18, VAR_16->fflags_text.s);
  } else if (VAR_17->set.processing &&
      (VAR_17->set.keys & VAR_2) != 0)

   FUNC_2(VAR_18, " flags=none");
 }
 if ((VAR_19 & VAR_11) != 0)
  FUNC_4(VAR_18, " time=%jd.%jd",
      (intmax_t)VAR_16->mtime, (intmax_t)VAR_16->mtime_nsec);
 if ((VAR_19 & VAR_6) != 0)
  FUNC_4(VAR_18, " mode=%o", (unsigned int)VAR_16->mode);
 if ((VAR_19 & VAR_3) != 0)
  FUNC_4(VAR_18, " gid=%jd", (intmax_t)VAR_16->gid);
 if ((VAR_19 & VAR_13) != 0)
  FUNC_4(VAR_18, " uid=%jd", (intmax_t)VAR_16->uid);

 if ((VAR_19 & VAR_5) != 0)
  FUNC_4(VAR_18, " inode=%jd", (intmax_t)VAR_16->ino);
 if ((VAR_19 & VAR_8) != 0) {
  FUNC_4(VAR_18,
      " resdevice=native,%ju,%ju",
      (uintmax_t)VAR_16->devmajor,
      (uintmax_t)VAR_16->devminor);
 }

 switch (VAR_16->filetype) {
 case 130:
  if ((VAR_19 & VAR_12) != 0)
   FUNC_2(VAR_18, " type=link");
  if ((VAR_19 & VAR_10) != 0) {
   FUNC_2(VAR_18, " link=");
   FUNC_8(VAR_18, VAR_16->symlink.s);
  }
  break;
 case 128:
  if ((VAR_19 & VAR_12) != 0)
   FUNC_2(VAR_18, " type=socket");
  break;
 case 133:
  if ((VAR_19 & VAR_12) != 0)
   FUNC_2(VAR_18, " type=char");
  if ((VAR_19 & VAR_1) != 0) {
   FUNC_4(VAR_18,
       " device=native,%ju,%ju",
       (uintmax_t)VAR_16->rdevmajor,
       (uintmax_t)VAR_16->rdevminor);
  }
  break;
 case 134:
  if ((VAR_19 & VAR_12) != 0)
   FUNC_2(VAR_18, " type=block");
  if ((VAR_19 & VAR_1) != 0) {
   FUNC_4(VAR_18,
       " device=native,%ju,%ju",
       (uintmax_t)VAR_16->rdevmajor,
       (uintmax_t)VAR_16->rdevminor);
  }
  break;
 case 132:
  if ((VAR_19 & VAR_12) != 0)
   FUNC_2(VAR_18, " type=dir");
  break;
 case 131:
  if ((VAR_19 & VAR_12) != 0)
   FUNC_2(VAR_18, " type=fifo");
  break;
 case 129:
 default:
  if ((VAR_19 & VAR_12) != 0)
   FUNC_2(VAR_18, " type=file");
  if ((VAR_19 & VAR_9) != 0)
   FUNC_4(VAR_18, " size=%jd",
       (intmax_t)VAR_16->size);
  break;
 }


 if (VAR_16->reg_info)
  FUNC_9(VAR_18, VAR_16->reg_info);

 FUNC_1(VAR_18, '\n');
 if (VAR_17->indent || VAR_17->classic)
  FUNC_7(VAR_17);

 if (VAR_17->buf.length > 32768) {
  VAR_20 = FUNC_0(
   VAR_15, VAR_17->buf.s, VAR_17->buf.length);
  FUNC_3(&VAR_17->buf);
 } else
  VAR_20 = VAR_0;
 return (VAR_20);
}
