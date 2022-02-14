
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int pdata; int compression_level; } ;
struct archive_write_filter {int write; scalar_t__ data; } ;
struct archive_string {int s; } ;


 int FUNC_0 (struct archive_write_filter*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct archive_string*) ;
 int FUNC_2 (struct archive_string*) ;
 int FUNC_3 (struct archive_string*,char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct archive_write_filter *VAR_1)
{
 struct private_data *VAR_2 = (struct private_data *)VAR_1->data;
 struct archive_string VAR_3;
 int VAR_4;

 FUNC_2(&VAR_3);
 FUNC_3(&VAR_3, "zstd -%d", VAR_2->compression_level);

 VAR_1->write = VAR_0;
 VAR_4 = FUNC_0(VAR_1, VAR_2->pdata, VAR_3.s);
 FUNC_1(&VAR_3);
 return (VAR_4);
}
