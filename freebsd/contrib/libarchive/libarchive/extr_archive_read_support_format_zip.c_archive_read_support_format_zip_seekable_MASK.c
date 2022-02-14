
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zip {int process_mac_extensions; int crc32func; int has_encrypted_entries; } ;
struct archive_read {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive_read*,struct zip*,char*,int ,int ,int ,int ,int ,int *,int ,int ,int ) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct zip*) ;
 int VAR_14 ;

int
FUNC_5(struct archive *VAR_15)
{
 struct archive_read *VAR_16 = (struct archive_read *)VAR_15;
 struct zip *VAR_17;
 int VAR_18;

 FUNC_1(VAR_15, VAR_3,
     VAR_4, "archive_read_support_format_zip_seekable");

 VAR_17 = (struct zip *)FUNC_3(1, sizeof(*VAR_17));
 if (VAR_17 == ((void*)0)) {
  FUNC_2(&VAR_16->archive, VAR_5,
      "Can't allocate zip data");
  return (VAR_0);
 }
 VAR_17->has_encrypted_entries = VAR_2;
 VAR_17->crc32func = VAR_14;

 VAR_18 = FUNC_0(VAR_16,
     VAR_17,
     "zip",
     VAR_11,
     VAR_8,
     VAR_12,
     VAR_9,
     VAR_10,
     ((void*)0),
     VAR_6,
     VAR_13,
     VAR_7);

 if (VAR_18 != VAR_1)
  FUNC_4(VAR_17);
 return (VAR_1);
}
