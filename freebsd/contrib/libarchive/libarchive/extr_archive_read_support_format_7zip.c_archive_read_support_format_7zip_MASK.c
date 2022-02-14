
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
struct archive {int dummy; } ;
struct _7zip {int has_encrypted_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct archive_read*,struct _7zip*,char*,int ,int *,int ,int ,int ,int *,int ,int ,int ) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *,int ,char*) ;
 struct _7zip* FUNC_3 (int,int) ;
 int FUNC_4 (struct _7zip*) ;

int
FUNC_5(struct archive *VAR_13)
{
 struct archive_read *VAR_14 = (struct archive_read *)VAR_13;
 struct _7zip *VAR_15;
 int VAR_16;

 FUNC_1(VAR_13, VAR_3,
     VAR_4, "archive_read_support_format_7zip");

 VAR_15 = FUNC_3(1, sizeof(*VAR_15));
 if (VAR_15 == ((void*)0)) {
  FUNC_2(&VAR_14->archive, VAR_5,
      "Can't allocate 7zip data");
  return (VAR_0);
 }





 VAR_15->has_encrypted_entries = VAR_2;


 VAR_16 = FUNC_0(VAR_14,
     VAR_15,
     "7zip",
     VAR_6,
     ((void*)0),
     VAR_11,
     VAR_9,
     VAR_10,
     ((void*)0),
     VAR_7,
     VAR_12,
     VAR_8);

 if (VAR_16 != VAR_1)
  FUNC_4(VAR_15);
 return (VAR_1);
}
