
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {scalar_t__ compression_level; scalar_t__ block_maximum_size; scalar_t__ stream_checksum; scalar_t__ block_independence; int pdata; scalar_t__ block_checksum; } ;
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
 FUNC_3(&VAR_3, "lz4 -z -q -q");


 if (VAR_2->compression_level > 0) {
  FUNC_2(&VAR_3, " -");
  FUNC_1(&VAR_3, '0' + VAR_2->compression_level);
 }

 FUNC_2(&VAR_3, " -B");
 FUNC_1(&VAR_3, '0' + VAR_2->block_maximum_size);

 if (VAR_2->block_checksum)
  FUNC_2(&VAR_3, " -BX");
 if (VAR_2->stream_checksum == 0)
  FUNC_2(&VAR_3, " --no-frame-crc");
 if (VAR_2->block_independence == 0)
  FUNC_2(&VAR_3, " -BD");

 VAR_1->write = VAR_0;

 VAR_4 = FUNC_0(VAR_1, VAR_2->pdata, VAR_3.s);
 FUNC_4(&VAR_3);
 return (VAR_4);
}
