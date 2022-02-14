
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpio {int entry_bytes_remaining; int entry_padding; } ;
struct TYPE_2__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_1__ archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct archive_read*,int ,int *) ;
 int FUNC_1 (struct archive_read*,int ) ;
 int FUNC_2 (struct archive_entry*,unsigned char const) ;
 int FUNC_3 (struct archive_entry*,unsigned char const) ;
 int FUNC_4 (struct archive_entry*,unsigned char const) ;
 int FUNC_5 (struct archive_entry*,unsigned char const) ;
 int FUNC_6 (struct archive_entry*,int,int ) ;
 int FUNC_7 (struct archive_entry*,unsigned char const) ;
 int FUNC_8 (struct archive_entry*,unsigned char const) ;
 int FUNC_9 (struct archive_entry*,int) ;
 int FUNC_10 (struct archive_entry*,unsigned char const) ;
 int FUNC_11 (TYPE_1__*,int ,char*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_12 (unsigned char const*) ;

__attribute__((used)) static int
FUNC_13(struct archive_read *VAR_14, struct cpio *VAR_15,
    struct archive_entry *VAR_16, size_t *VAR_17, size_t *VAR_18)
{
 const void *VAR_19;
 const unsigned char *VAR_20;

 VAR_14->archive.archive_format = VAR_1;
 VAR_14->archive.archive_format_name = "cpio (little-endian binary)";


 VAR_19 = FUNC_0(VAR_14, VAR_6, ((void*)0));
 if (VAR_19 == ((void*)0)) {
     FUNC_11(&VAR_14->archive, 0,
  "End of file trying to read next cpio header");
     return (VAR_0);
 }


 VAR_20 = (const unsigned char *)VAR_19;

 FUNC_2(VAR_16, VAR_20[VAR_3] + VAR_20[VAR_3 + 1] * 256);
 FUNC_4(VAR_16, VAR_20[VAR_7] + VAR_20[VAR_7 + 1] * 256);
 FUNC_5(VAR_16, VAR_20[VAR_8] + VAR_20[VAR_8 + 1] * 256);
 FUNC_10(VAR_16, VAR_20[VAR_13] + VAR_20[VAR_13 + 1] * 256);
 FUNC_3(VAR_16, VAR_20[VAR_5] + VAR_20[VAR_5 + 1] * 256);
 FUNC_7(VAR_16, VAR_20[VAR_11] + VAR_20[VAR_11 + 1] * 256);
 FUNC_8(VAR_16, VAR_20[VAR_12] + VAR_20[VAR_12 + 1] * 256);
 FUNC_6(VAR_16, FUNC_12(VAR_20 + VAR_9), 0);
 *VAR_17 = VAR_20[VAR_10] + VAR_20[VAR_10 + 1] * 256;
 *VAR_18 = *VAR_17 & 1;

 VAR_15->entry_bytes_remaining = FUNC_12(VAR_20 + VAR_4);
 FUNC_9(VAR_16, VAR_15->entry_bytes_remaining);
 VAR_15->entry_padding = VAR_15->entry_bytes_remaining & 1;
 FUNC_1(VAR_14, VAR_6);
 return (VAR_2);
}
