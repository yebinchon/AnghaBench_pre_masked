
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int compression_level; int version_number; int block_independence; int stream_checksum; int block_maximum_size; int * pdata; scalar_t__ preset_dictionary; scalar_t__ stream_size; scalar_t__ block_checksum; } ;
struct archive_write_filter {char* name; int code; int * open; int * free; int * close; int * options; struct private_data* data; } ;
struct archive_write {int archive; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct archive_write_filter* FUNC_0 (struct archive*) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int *,int ,char*) ;
 struct private_data* FUNC_4 (int,int) ;
 int FUNC_5 (struct private_data*) ;

int
FUNC_6(struct archive *VAR_12)
{
 struct archive_write *VAR_13 = (struct archive_write *)VAR_12;
 struct archive_write_filter *VAR_14 = FUNC_0(VAR_12);
 struct private_data *VAR_15;

 FUNC_2(&VAR_13->archive, VAR_6,
     VAR_4, "archive_write_add_filter_lz4");

 VAR_15 = FUNC_4(1, sizeof(*VAR_15));
 if (VAR_15 == ((void*)0)) {
  FUNC_3(&VAR_13->archive, VAR_7, "Out of memory");
  return (VAR_1);
 }




 VAR_15->compression_level = 1;
 VAR_15->version_number = 0x01;
 VAR_15->block_independence = 1;
 VAR_15->block_checksum = 0;
 VAR_15->stream_size = 0;
 VAR_15->stream_checksum = 1;
 VAR_15->preset_dictionary = 0;
 VAR_15->block_maximum_size = 7;




 VAR_14->data = VAR_15;
 VAR_14->options = &VAR_11;
 VAR_14->close = &VAR_8;
 VAR_14->free = &VAR_9;
 VAR_14->open = &VAR_10;
 VAR_14->code = VAR_2;
 VAR_14->name = "lz4";







 VAR_15->pdata = FUNC_1("lz4");
 if (VAR_15->pdata == ((void*)0)) {
  FUNC_5(VAR_15);
  FUNC_3(&VAR_13->archive, VAR_7, "Out of memory");
  return (VAR_1);
 }
 VAR_15->compression_level = 0;
 FUNC_3(&VAR_13->archive, VAR_0,
     "Using external lz4 program");
 return (VAR_5);

}
