
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int const lzma_ret ;
struct TYPE_3__ {int coder; int const (* code ) (int ,int *,int const*,size_t*,size_t) ;int (* reset ) (int ,int *) ;int (* set_uncompressed ) (int ,int) ;} ;
struct TYPE_4__ {int sequence; int need_properties; int need_dictionary_reset; int uncompressed_size; int next_sequence; int compressed_size; TYPE_1__ lzma; int options; } ;
typedef TYPE_2__ lzma_lzma2_coder ;
typedef int lzma_dict ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,size_t*,size_t,size_t const*) ;
 int FUNC_3 (int *,int const) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int *) ;
 int const FUNC_7 (int ,int *,int const*,size_t*,size_t) ;

__attribute__((used)) static lzma_ret
FUNC_8(void *VAR_4, lzma_dict *restrict VAR_5,
  const uint8_t *restrict VAR_6, size_t *restrict VAR_7,
  size_t VAR_8)
{
 lzma_lzma2_coder *restrict VAR_9 = VAR_4;




 while (*VAR_7 < VAR_8 || VAR_9->sequence == 131)
 switch (VAR_9->sequence) {
 case 133: {
  const uint32_t VAR_10 = VAR_6[*VAR_7];
  ++*VAR_7;


  if (VAR_10 == 0x00)
   return VAR_3;

  if (VAR_10 >= 0xE0 || VAR_10 == 1) {


   VAR_9->need_properties = 1;
   VAR_9->need_dictionary_reset = 1;
  } else if (VAR_9->need_dictionary_reset) {
   return VAR_0;
  }

  if (VAR_10 >= 0x80) {


   VAR_9->uncompressed_size = (VAR_10 & 0x1F) << 16;
   VAR_9->sequence = 129;



   if (VAR_10 >= 0xC0) {


    VAR_9->need_properties = 0;
    VAR_9->next_sequence = 130;

   } else if (VAR_9->need_properties) {
    return VAR_0;

   } else {
    VAR_9->next_sequence = 131;




    if (VAR_10 >= 0xA0)
     VAR_9->lzma.reset(VAR_9->lzma.coder,
       &VAR_9->options);
   }
  } else {

   if (VAR_10 > 2)
    return VAR_0;


   VAR_9->sequence = 135;
   VAR_9->next_sequence = 132;
  }

  if (VAR_9->need_dictionary_reset) {


   VAR_9->need_dictionary_reset = 0;
   FUNC_1(VAR_5);
   return VAR_1;
  }

  break;
 }

 case 129:
  VAR_9->uncompressed_size += (uint32_t)(VAR_6[(*VAR_7)++]) << 8;
  VAR_9->sequence = 128;
  break;

 case 128:
  VAR_9->uncompressed_size += VAR_6[(*VAR_7)++] + 1;
  VAR_9->sequence = 135;
  VAR_9->lzma.set_uncompressed(VAR_9->lzma.coder,
    VAR_9->uncompressed_size);
  break;

 case 135:
  VAR_9->compressed_size = (uint32_t)(VAR_6[(*VAR_7)++]) << 8;
  VAR_9->sequence = 134;
  break;

 case 134:
  VAR_9->compressed_size += VAR_6[(*VAR_7)++] + 1;
  VAR_9->sequence = VAR_9->next_sequence;
  break;

 case 130:
  if (FUNC_3(&VAR_9->options, VAR_6[(*VAR_7)++]))
   return VAR_0;

  VAR_9->lzma.reset(VAR_9->lzma.coder, &VAR_9->options);

  VAR_9->sequence = 131;
  break;

 case 131: {


  const size_t VAR_11 = *VAR_7;


  const lzma_ret VAR_12 = VAR_9->lzma.code(VAR_9->lzma.coder,
    VAR_5, VAR_6, VAR_7, VAR_8);


  const size_t VAR_13 = *VAR_7 - VAR_11;
  if (VAR_13 > VAR_9->compressed_size)
   return VAR_0;

  VAR_9->compressed_size -= VAR_13;


  if (VAR_12 != VAR_3)
   return VAR_12;




  if (VAR_9->compressed_size != 0)
   return VAR_0;

  VAR_9->sequence = 133;
  break;
 }

 case 132: {

  FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_9->compressed_size);
  if (VAR_9->compressed_size != 0)
   return VAR_1;

  VAR_9->sequence = 133;
  break;
 }

 default:
  FUNC_0(0);
  return VAR_2;
 }

 return VAR_1;
}
