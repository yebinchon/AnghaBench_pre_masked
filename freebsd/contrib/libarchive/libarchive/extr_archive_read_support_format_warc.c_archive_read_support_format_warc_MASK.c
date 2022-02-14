
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct warc_s {int dummy; } ;
struct archive_read {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_read*,struct warc_s*,char*,int ,int *,int ,int ,int ,int *,int ,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int FUNC_2 (int *,int ,char*) ;
 struct warc_s* FUNC_3 (int,int) ;
 int FUNC_4 (struct warc_s*) ;

int
FUNC_5(struct archive *VAR_10)
{
 struct archive_read *VAR_11 = (struct archive_read *)VAR_10;
 struct warc_s *VAR_12;
 int VAR_13;

 FUNC_1(VAR_10, VAR_2,
     VAR_3, "archive_read_support_format_warc");

 if ((VAR_12 = FUNC_3(1, sizeof(*VAR_12))) == ((void*)0)) {
  FUNC_2(&VAR_11->archive, VAR_4,
      "Can't allocate warc data");
  return (VAR_0);
 }

 VAR_13 = FUNC_0(
  VAR_11, VAR_12, "warc",
  VAR_5, ((void*)0), VAR_7, VAR_8,
  VAR_9, ((void*)0), VAR_6, ((void*)0), ((void*)0));

 if (VAR_13 != VAR_1) {
  FUNC_4(VAR_12);
  return (VAR_13);
 }
 return (VAR_1);
}
