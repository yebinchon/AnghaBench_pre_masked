
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive {scalar_t__ read_data_offset; scalar_t__ read_data_output_offset; size_t read_data_remaining; void* read_data_block; int read_data_is_posix_read; size_t read_data_requested; } ;
typedef size_t la_ssize_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct archive*,void const**,size_t*,scalar_t__*) ;
 int FUNC_1 (struct archive*,int ,char*) ;
 int FUNC_2 (char*,void*,size_t) ;
 int FUNC_3 (char*,int ,size_t) ;

la_ssize_t
FUNC_4(struct archive *VAR_4, void *VAR_5, size_t VAR_6)
{
 struct archive *VAR_7 = (struct archive *)VAR_4;
 char *VAR_8;
 const void *VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_10 = 0;
 VAR_8 = (char *)VAR_5;

 while (VAR_6 > 0) {
  if (VAR_7->read_data_offset == VAR_7->read_data_output_offset &&
      VAR_7->read_data_remaining == 0) {
   VAR_9 = VAR_7->read_data_block;
   VAR_7->read_data_is_posix_read = 1;
   VAR_7->read_data_requested = VAR_6;
   VAR_12 = FUNC_0(VAR_7, &VAR_9,
       &VAR_7->read_data_remaining, &VAR_7->read_data_offset);
   VAR_7->read_data_block = VAR_9;
   if (VAR_12 == VAR_0)
    return (VAR_10);





   if (VAR_12 < VAR_2)
    return (VAR_12);
  }

  if (VAR_7->read_data_offset < VAR_7->read_data_output_offset) {
   FUNC_1(VAR_7, VAR_1,
       "Encountered out-of-order sparse blocks");
   return (VAR_3);
  }


  if (VAR_7->read_data_output_offset + (int64_t)VAR_6 <
      VAR_7->read_data_offset) {
   VAR_11 = VAR_6;
  } else if (VAR_7->read_data_output_offset <
      VAR_7->read_data_offset) {
   VAR_11 = (size_t)(VAR_7->read_data_offset -
       VAR_7->read_data_output_offset);
  } else
   VAR_11 = 0;


  FUNC_3(VAR_8, 0, VAR_11);
  VAR_6 -= VAR_11;
  VAR_7->read_data_output_offset += VAR_11;
  VAR_8 += VAR_11;
  VAR_10 += VAR_11;


  if (VAR_6 > 0) {
   VAR_11 = VAR_7->read_data_remaining;
   if (VAR_11 > VAR_6)
    VAR_11 = VAR_6;
   if (VAR_11)
    FUNC_2(VAR_8, VAR_7->read_data_block, VAR_11);
   VAR_6 -= VAR_11;
   VAR_7->read_data_block += VAR_11;
   VAR_7->read_data_remaining -= VAR_11;
   VAR_7->read_data_output_offset += VAR_11;
   VAR_7->read_data_offset += VAR_11;
   VAR_8 += VAR_11;
   VAR_10 += VAR_11;
  }
 }
 VAR_7->read_data_is_posix_read = 0;
 VAR_7->read_data_requested = 0;
 return (VAR_10);
}
