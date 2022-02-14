
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_writer {int classic; int output_global_set; } ;
struct archive_write {scalar_t__ format_data; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive*,char*) ;

int
FUNC_1(struct archive *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1,
  "archive_write_set_format_mtree_classic");
 if (VAR_2 == VAR_0) {
  struct archive_write *VAR_3 = (struct archive_write *)VAR_1;
  struct mtree_writer *VAR_4;

  VAR_4 = (struct mtree_writer *)VAR_3->format_data;


  VAR_4->classic = 1;


  VAR_4->output_global_set = 1;
 }
 return (VAR_2);
}
