
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive*,int ,int ,char*) ;
 int FUNC_1 (int *,int ,char*) ;

int
FUNC_2(struct archive *VAR_4)
{
 struct archive_read *VAR_5 = (struct archive_read *)VAR_4;
 FUNC_0(VAR_4, VAR_1,
     VAR_2, "archive_read_support_format_xar");

 FUNC_1(&VAR_5->archive, VAR_0,
     "Xar not supported on this platform");
 return (VAR_3);
}
