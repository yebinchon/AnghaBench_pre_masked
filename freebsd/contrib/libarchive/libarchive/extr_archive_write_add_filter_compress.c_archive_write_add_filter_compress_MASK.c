
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {char* name; int code; int * open; } ;
struct archive_write {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct archive_write_filter* FUNC_0 (struct archive*) ;
 int FUNC_1 (int *,int ,int ,char*) ;
 int VAR_4 ;

int
FUNC_2(struct archive *VAR_5)
{
 struct archive_write *VAR_6 = (struct archive_write *)VAR_5;
 struct archive_write_filter *VAR_7 = FUNC_0(VAR_5);

 FUNC_1(&VAR_6->archive, VAR_3,
     VAR_2, "archive_write_add_filter_compress");
 VAR_7->open = &VAR_4;
 VAR_7->code = VAR_0;
 VAR_7->name = "compress";
 return (VAR_1);
}
