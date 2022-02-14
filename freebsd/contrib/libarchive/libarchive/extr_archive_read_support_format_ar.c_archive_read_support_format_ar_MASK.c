
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
struct archive {int dummy; } ;
struct ar {int * strtab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_read*,struct ar*,char*,int ,int *,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct ar*) ;

int
FUNC_5(struct archive *VAR_10)
{
 struct archive_read *VAR_11 = (struct archive_read *)VAR_10;
 struct ar *VAR_12;
 int VAR_13;

 FUNC_1(VAR_10, VAR_2,
     VAR_3, "archive_read_support_format_ar");

 VAR_12 = (struct ar *)FUNC_3(1, sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_2(&VAR_11->archive, VAR_4,
      "Can't allocate ar data");
  return (VAR_0);
 }
 VAR_12->strtab = ((void*)0);

 VAR_13 = FUNC_0(VAR_11,
     VAR_12,
     "ar",
     VAR_5,
     ((void*)0),
     VAR_8,
     VAR_7,
     VAR_9,
     ((void*)0),
     VAR_6,
     ((void*)0),
     ((void*)0));

 if (VAR_13 != VAR_1) {
  FUNC_4(VAR_12);
  return (VAR_13);
 }
 return (VAR_1);
}
