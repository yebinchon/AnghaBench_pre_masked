
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tar {int process_mac_extensions; } ;
struct archive_read {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_read*,struct tar*,char*,int ,int ,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct tar*) ;

int
FUNC_5(struct archive *VAR_11)
{
 struct archive_read *VAR_12 = (struct archive_read *)VAR_11;
 struct tar *VAR_13;
 int VAR_14;

 FUNC_1(VAR_11, VAR_2,
     VAR_3, "archive_read_support_format_tar");

 VAR_13 = (struct tar *)FUNC_3(1, sizeof(*VAR_13));
 if (VAR_13 == ((void*)0)) {
  FUNC_2(&VAR_12->archive, VAR_4,
      "Can't allocate tar data");
  return (VAR_0);
 }





 VAR_14 = FUNC_0(VAR_12, VAR_13, "tar",
     VAR_5,
     VAR_7,
     VAR_9,
     VAR_8,
     VAR_10,
     ((void*)0),
     VAR_6,
     ((void*)0),
     ((void*)0));

 if (VAR_14 != VAR_1)
  FUNC_4(VAR_13);
 return (VAR_1);
}
