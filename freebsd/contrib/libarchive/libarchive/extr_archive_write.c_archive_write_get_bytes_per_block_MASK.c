
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int bytes_per_block; int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,char*) ;

int
FUNC_1(struct archive *VAR_2)
{
 struct archive_write *VAR_3 = (struct archive_write *)VAR_2;
 FUNC_0(&VAR_3->archive, VAR_1,
     VAR_0, "archive_write_get_bytes_per_block");
 return (VAR_3->bytes_per_block);
}
