
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int bytes_in_last_block; int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_3, int VAR_4)
{
 struct archive_write *VAR_5 = (struct archive_write *)VAR_3;
 FUNC_0(&VAR_5->archive, VAR_2,
     VAR_1, "archive_write_set_bytes_in_last_block");
 VAR_5->bytes_in_last_block = VAR_4;
 return (VAR_0);
}
