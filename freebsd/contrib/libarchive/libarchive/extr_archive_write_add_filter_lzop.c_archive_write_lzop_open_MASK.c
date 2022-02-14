
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct write_lzop {char compression_level; int pdata; } ;
struct archive_write_filter {scalar_t__ data; } ;
struct archive_string {int s; } ;


 int FUNC_0 (struct archive_write_filter*,int ,int ) ;
 int FUNC_1 (struct archive_string*,char) ;
 int FUNC_2 (struct archive_string*,char*) ;
 int FUNC_3 (struct archive_string*) ;
 int FUNC_4 (struct archive_string*) ;

__attribute__((used)) static int
FUNC_5(struct archive_write_filter *VAR_0)
{
 struct write_lzop *VAR_1 = (struct write_lzop *)VAR_0->data;
 struct archive_string VAR_2;
 int VAR_3;

 FUNC_4(&VAR_2);
 FUNC_2(&VAR_2, "lzop");

 if (VAR_1->compression_level > 0) {
  FUNC_1(&VAR_2, ' ');
  FUNC_1(&VAR_2, '-');
  FUNC_1(&VAR_2, '0' + VAR_1->compression_level);
 }

 VAR_3 = FUNC_0(VAR_0, VAR_1->pdata, VAR_2.s);
 FUNC_3(&VAR_2);
 return (VAR_3);
}
