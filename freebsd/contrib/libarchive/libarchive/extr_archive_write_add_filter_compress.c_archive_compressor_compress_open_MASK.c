
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct private_data {size_t compressed_buffer_size; int* compressed; int max_maxcode; int out_count; int code_len; int compressed_offset; int hashtab; int first_free; int cur_maxcode; int checkpoint; scalar_t__ compress_ratio; scalar_t__ bit_offset; scalar_t__ bit_buf; scalar_t__ in_count; } ;
struct archive_write_filter {char* name; struct private_data* data; int free; int close; int write; TYPE_1__* archive; int next_filter; int code; } ;
struct TYPE_3__ {scalar_t__ magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 size_t FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (struct private_data*) ;
 int* FUNC_6 (size_t) ;
 int FUNC_7 (int ,int,int) ;

__attribute__((used)) static int
FUNC_8(struct archive_write_filter *VAR_10)
{
 int VAR_11;
 struct private_data *VAR_12;
 size_t VAR_13 = 65536, VAR_14;

 VAR_10->code = VAR_1;
 VAR_10->name = "compress";

 VAR_11 = FUNC_1(VAR_10->next_filter);
 if (VAR_11 != VAR_2)
  return (VAR_11);

 VAR_12 = (struct private_data *)FUNC_4(1, sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_2(VAR_10->archive, VAR_5,
      "Can't allocate data for compression");
  return (VAR_0);
 }

 if (VAR_10->archive->magic == VAR_3) {


  VAR_14 = FUNC_3(VAR_10->archive);
  if (VAR_14 > VAR_13)
   VAR_13 = VAR_14;
  else if (VAR_14 != 0)
   VAR_13 -= VAR_13 % VAR_14;
 }
 VAR_12->compressed_buffer_size = VAR_13;
 VAR_12->compressed = FUNC_6(VAR_12->compressed_buffer_size);

 if (VAR_12->compressed == ((void*)0)) {
  FUNC_2(VAR_10->archive, VAR_5,
      "Can't allocate data for compression buffer");
  FUNC_5(VAR_12);
  return (VAR_0);
 }

 VAR_10->write = VAR_9;
 VAR_10->close = VAR_7;
 VAR_10->free = VAR_8;

 VAR_12->max_maxcode = 0x10000;
 VAR_12->in_count = 0;
 VAR_12->bit_buf = 0;
 VAR_12->bit_offset = 0;
 VAR_12->out_count = 3;
 VAR_12->compress_ratio = 0;
 VAR_12->checkpoint = VAR_4;
 VAR_12->code_len = 9;
 VAR_12->cur_maxcode = FUNC_0(VAR_12->code_len);
 VAR_12->first_free = VAR_6;

 FUNC_7(VAR_12->hashtab, 0xff, sizeof(VAR_12->hashtab));


 VAR_12->compressed[0] = 0x1f;
 VAR_12->compressed[1] = 0x9d;
 VAR_12->compressed[2] = 0x90;
 VAR_12->compressed_offset = 3;

 VAR_10->data = VAR_12;
 return (0);
}
