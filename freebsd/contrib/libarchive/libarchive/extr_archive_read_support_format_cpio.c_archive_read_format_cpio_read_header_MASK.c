
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpio {int init_default_conversion; int (* read_header ) (struct archive_read*,struct cpio*,struct archive_entry*,size_t*,size_t*) ;int entry_bytes_remaining; scalar_t__ entry_offset; struct archive_string_conv* sconv_default; struct archive_string_conv* opt_sconv; } ;
struct archive_string_conv {int dummy; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (struct archive_read*,size_t,int *) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct archive_entry*,char const*,size_t,struct archive_string_conv*) ;
 scalar_t__ FUNC_4 (struct archive_entry*,char const*,size_t,struct archive_string_conv*) ;
 scalar_t__ FUNC_5 (struct archive_entry*) ;
 int FUNC_6 (int *,scalar_t__,char*,...) ;
 int FUNC_7 (struct archive_string_conv*) ;
 struct archive_string_conv* FUNC_8 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_9 (struct archive_read*,struct cpio*,struct archive_entry*) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;
 int FUNC_11 (struct archive_read*,struct cpio*,struct archive_entry*,size_t*,size_t*) ;

__attribute__((used)) static int
FUNC_12(struct archive_read *VAR_8,
    struct archive_entry *VAR_9)
{
 struct cpio *VAR_10;
 const void *VAR_11, *VAR_12;
 struct archive_string_conv *VAR_13;
 size_t VAR_14;
 size_t VAR_15;
 int VAR_16;

 VAR_10 = (struct cpio *)(VAR_8->format->data);
 VAR_13 = VAR_10->opt_sconv;
 if (VAR_13 == ((void*)0)) {
  if (!VAR_10->init_default_conversion) {
   VAR_10->sconv_default =
       FUNC_8(
         &(VAR_8->archive));
   VAR_10->init_default_conversion = 1;
  }
  VAR_13 = VAR_10->sconv_default;
 }

 VAR_16 = (VAR_10->read_header(VAR_8, VAR_10, VAR_9, &VAR_14, &VAR_15));

 if (VAR_16 < VAR_5)
  return (VAR_16);


 VAR_11 = FUNC_0(VAR_8, VAR_14 + VAR_15, ((void*)0));
 if (VAR_11 == ((void*)0))
     return (VAR_3);
 if (FUNC_3(VAR_9,
     (const char *)VAR_11, VAR_14, VAR_13) != 0) {
  if (VAR_7 == VAR_6) {
   FUNC_6(&VAR_8->archive, VAR_6,
       "Can't allocate memory for Pathname");
   return (VAR_3);
  }
  FUNC_6(&VAR_8->archive, VAR_2,
      "Pathname can't be converted from %s to current locale.",
      FUNC_7(VAR_13));
  VAR_16 = VAR_5;
 }
 VAR_10->entry_offset = 0;

 FUNC_1(VAR_8, VAR_14 + VAR_15);


 if (FUNC_5(VAR_9) == VAR_0) {
  if (VAR_10->entry_bytes_remaining > 1024 * 1024) {
   FUNC_6(&VAR_8->archive, VAR_6,
       "Rejecting malformed cpio archive: symlink contents exceed 1 megabyte");
   return (VAR_3);
  }
  VAR_12 = FUNC_0(VAR_8,
   (size_t)VAR_10->entry_bytes_remaining, ((void*)0));
  if (VAR_12 == ((void*)0))
   return (VAR_3);
  if (FUNC_4(VAR_9, (const char *)VAR_12,
      (size_t)VAR_10->entry_bytes_remaining, VAR_13) != 0) {
   if (VAR_7 == VAR_6) {
    FUNC_6(&VAR_8->archive, VAR_6,
        "Can't allocate memory for Linkname");
    return (VAR_3);
   }
   FUNC_6(&VAR_8->archive,
       VAR_2,
       "Linkname can't be converted from %s to "
       "current locale.",
       FUNC_7(VAR_13));
   VAR_16 = VAR_5;
  }
  FUNC_1(VAR_8, VAR_10->entry_bytes_remaining);
  VAR_10->entry_bytes_remaining = 0;
 }







 if (VAR_14 == 11 && FUNC_10((const char *)VAR_11, "TRAILER!!!",
     11) == 0) {

  FUNC_2(&VAR_8->archive);
  return (VAR_1);
 }


 if (FUNC_9(VAR_8, VAR_10, VAR_9) != VAR_4) {
  return (VAR_3);
 }

 return (VAR_16);
}
