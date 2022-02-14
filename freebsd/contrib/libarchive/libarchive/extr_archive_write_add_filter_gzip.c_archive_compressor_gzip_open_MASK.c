
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {scalar_t__ compression_level; scalar_t__ timestamp; int pdata; } ;
struct archive_write_filter {int write; scalar_t__ data; } ;
struct archive_string {int s; } ;


 int FUNC_0 (struct archive_write_filter*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct archive_string*,scalar_t__) ;
 int FUNC_2 (struct archive_string*,char*) ;
 int FUNC_3 (struct archive_string*,char*) ;
 int FUNC_4 (struct archive_string*) ;
 int FUNC_5 (struct archive_string*) ;

__attribute__((used)) static int
FUNC_6(struct archive_write_filter *VAR_1)
{
 struct private_data *VAR_2 = (struct private_data *)VAR_1->data;
 struct archive_string VAR_3;
 int VAR_4;

 FUNC_5(&VAR_3);
 FUNC_3(&VAR_3, "gzip");


 if (VAR_2->compression_level > 0) {
  FUNC_2(&VAR_3, " -");
  FUNC_1(&VAR_3, '0' + VAR_2->compression_level);
 }
 if (VAR_2->timestamp < 0)

  FUNC_2(&VAR_3, " -n");
 else if (VAR_2->timestamp > 0)

  FUNC_2(&VAR_3, " -N");

 VAR_1->write = VAR_0;
 VAR_4 = FUNC_0(VAR_1, VAR_2->pdata, VAR_3.s);
 FUNC_4(&VAR_3);
 return (VAR_4);
}
