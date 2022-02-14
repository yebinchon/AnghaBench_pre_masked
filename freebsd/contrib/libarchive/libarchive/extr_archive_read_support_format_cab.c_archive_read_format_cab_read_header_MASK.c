
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cfheader {scalar_t__ file_index; scalar_t__ file_count; int major; int minor; struct cffolder* folder_array; int folder_count; struct cffile* file_array; } ;
struct cffolder {char* compname; } ;
struct TYPE_8__ {int s; } ;
struct cffile {int folder; int attr; scalar_t__ uncompressed_size; int mtime; TYPE_2__ pathname; } ;
struct cab {int found_header; int end_of_archive; int end_of_entry; int end_of_entry_cleanup; int init_default_conversion; scalar_t__ entry_bytes_remaining; int format_name; struct cffolder* entry_cffolder; scalar_t__ entry_offset; struct archive_string_conv* sconv_default; struct archive_string_conv* sconv; struct archive_string_conv* sconv_utf8; int * entry_cfdata; struct cffile* entry_cffile; scalar_t__ entry_unconsumed; scalar_t__ entry_uncompressed_bytes_read; scalar_t__ entry_compressed_bytes_read; struct cfheader cfheader; } ;
struct archive_string_conv {int dummy; } ;
struct TYPE_9__ {int archive_format_name; } ;
struct archive_read {TYPE_4__ archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
struct TYPE_7__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct archive_entry*,int ,int ,struct archive_string_conv*) ;
 int FUNC_1 (struct archive_entry*,int) ;
 int FUNC_2 (struct archive_entry*,int ,int ) ;
 int FUNC_3 (struct archive_entry*,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,char*,...) ;
 int FUNC_5 (struct archive_string_conv*) ;
 struct archive_string_conv* FUNC_6 (TYPE_4__*,char*,int) ;
 struct archive_string_conv* FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (struct cab*,struct archive_entry*) ;
 int FUNC_11 (struct archive_read*) ;
 scalar_t__ VAR_9 ;



 int FUNC_12 (int ,char*,int,int,char*) ;

__attribute__((used)) static int
FUNC_13(struct archive_read *VAR_10,
    struct archive_entry *VAR_11)
{
 struct cab *VAR_12;
 struct cfheader *VAR_13;
 struct cffolder *VAR_14;
 struct cffile *VAR_15;
 struct archive_string_conv *VAR_16;
 int VAR_17 = VAR_4, VAR_18;

 VAR_12 = (struct cab *)(VAR_10->format->data);
 if (VAR_12->found_header == 0) {
  VAR_17 = FUNC_11(VAR_10);
  if (VAR_17 < VAR_5)
   return (VAR_17);

  VAR_12->found_header = 1;
 }
 VAR_13 = &VAR_12->cfheader;

 if (VAR_13->file_index >= VAR_13->file_count) {
  VAR_12->end_of_archive = 1;
  return (VAR_1);
 }
 VAR_15 = &VAR_13->file_array[VAR_13->file_index++];

 VAR_12->end_of_entry = 0;
 VAR_12->end_of_entry_cleanup = 0;
 VAR_12->entry_compressed_bytes_read = 0;
 VAR_12->entry_uncompressed_bytes_read = 0;
 VAR_12->entry_unconsumed = 0;
 VAR_12->entry_cffile = VAR_15;




 VAR_14 = VAR_12->entry_cffolder;
 switch (VAR_15->folder) {
 case 130:
 case 129:
  VAR_12->entry_cffolder = &VAR_13->folder_array[0];
  break;
 case 128:
  VAR_12->entry_cffolder = &VAR_13->folder_array[VAR_13->folder_count-1];
  break;
 default:
  VAR_12->entry_cffolder = &VAR_13->folder_array[VAR_15->folder];
  break;
 }


 if (VAR_14 != VAR_12->entry_cffolder)
  VAR_12->entry_cfdata = ((void*)0);



 if (VAR_15->attr & VAR_6) {
  if (VAR_12->sconv_utf8 == ((void*)0)) {
   VAR_12->sconv_utf8 =
       FUNC_6(
    &(VAR_10->archive), "UTF-8", 1);
   if (VAR_12->sconv_utf8 == ((void*)0))
    return (VAR_3);
  }
  VAR_16 = VAR_12->sconv_utf8;
 } else if (VAR_12->sconv != ((void*)0)) {

  VAR_16 = VAR_12->sconv;
 } else {

  if (!VAR_12->init_default_conversion) {
   VAR_12->sconv_default =
       FUNC_7(
         &(VAR_10->archive));
   VAR_12->init_default_conversion = 1;
  }
  VAR_16 = VAR_12->sconv_default;
 }




 VAR_18 = FUNC_9(&(VAR_15->pathname), VAR_15->attr);
 if (FUNC_0(VAR_11, VAR_15->pathname.s,
     FUNC_8(&(VAR_15->pathname)), VAR_16) != 0) {
  if (VAR_9 == VAR_8) {
   FUNC_4(&VAR_10->archive, VAR_8,
       "Can't allocate memory for Pathname");
   return (VAR_3);
  }
  FUNC_4(&VAR_10->archive,
      VAR_2,
      "Pathname cannot be converted "
      "from %s to current locale.",
      FUNC_5(VAR_16));
  VAR_17 = VAR_5;
 }
 if (VAR_18 < 0) {

  FUNC_10(VAR_12, VAR_11);
 }

 FUNC_3(VAR_11, VAR_15->uncompressed_size);
 if (VAR_15->attr & VAR_7)
  FUNC_1(VAR_11, VAR_0 | 0555);
 else
  FUNC_1(VAR_11, VAR_0 | 0666);
 FUNC_2(VAR_11, VAR_15->mtime, 0);

 VAR_12->entry_bytes_remaining = VAR_15->uncompressed_size;
 VAR_12->entry_offset = 0;

 if (VAR_15->uncompressed_size == 0)
  VAR_12->end_of_entry_cleanup = VAR_12->end_of_entry = 1;


 FUNC_12(VAR_12->format_name, "CAB %d.%d (%s)",
     VAR_13->major, VAR_13->minor, VAR_12->entry_cffolder->compname);
 VAR_10->archive.archive_format_name = VAR_12->format_name;

 return (VAR_17);
}
