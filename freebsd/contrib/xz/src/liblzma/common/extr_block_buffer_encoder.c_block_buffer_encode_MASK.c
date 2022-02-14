
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ lzma_ret ;
struct TYPE_10__ {int u8; } ;
struct TYPE_11__ {TYPE_1__ buffer; } ;
typedef TYPE_2__ lzma_check_state ;
struct TYPE_12__ {int version; size_t uncompressed_size; scalar_t__ compressed_size; int* raw_check; scalar_t__ check; int * filters; } ;
typedef TYPE_3__ lzma_block ;
typedef int lzma_allocator ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t const VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int const*,int const*,size_t,int*,size_t*,size_t) ;
 int FUNC_2 (TYPE_3__*,int const*,size_t,int*,size_t*,size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 size_t FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,int const*,size_t) ;
 int FUNC_9 (int*,int ,size_t const) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static lzma_ret
FUNC_11(lzma_block *VAR_8, const lzma_allocator *VAR_9,
  const uint8_t *VAR_10, size_t VAR_11,
  uint8_t *VAR_12, size_t *VAR_13, size_t VAR_14,
  bool VAR_15)
{

 if (VAR_8 == ((void*)0) || (VAR_10 == ((void*)0) && VAR_11 != 0) || VAR_12 == ((void*)0)
   || VAR_13 == ((void*)0) || *VAR_13 > VAR_14)
  return VAR_5;



 if (VAR_8->version > 1)
  return VAR_4;

 if ((unsigned int)(VAR_8->check) > VAR_1
   || (VAR_15 && VAR_8->filters == ((void*)0)))
  return VAR_5;

 if (!FUNC_6(VAR_8->check))
  return VAR_6;




 VAR_14 -= (VAR_14 - *VAR_13) & 3;


 const size_t VAR_16 = FUNC_7(VAR_8->check);
 FUNC_0(VAR_16 != VAR_7);


 if (VAR_14 - *VAR_13 <= VAR_16)
  return VAR_0;

 VAR_14 -= VAR_16;



 VAR_8->uncompressed_size = VAR_11;
 VAR_8->compressed_size = FUNC_3(VAR_11);
 if (VAR_8->compressed_size == 0)
  return VAR_2;


 lzma_ret VAR_17 = VAR_0;
 if (VAR_15)
  VAR_17 = FUNC_1(VAR_8, VAR_9,
    VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

 if (VAR_17 != VAR_3) {


  if (VAR_17 != VAR_0)
   return VAR_17;






  FUNC_10(FUNC_2(VAR_8, VAR_10, VAR_11,
    VAR_12, VAR_13, VAR_14));
 }

 FUNC_0(*VAR_13 <= VAR_14);




 for (size_t VAR_18 = (size_t)(VAR_8->compressed_size); VAR_18 & 3; ++VAR_18) {
  FUNC_0(*VAR_13 < VAR_14);
  VAR_12[(*VAR_13)++] = 0x00;
 }


 if (VAR_16 > 0) {



  lzma_check_state VAR_19;
  FUNC_5(&VAR_19, VAR_8->check);
  FUNC_8(&VAR_19, VAR_8->check, VAR_10, VAR_11);
  FUNC_4(&VAR_19, VAR_8->check);

  FUNC_9(VAR_8->raw_check, VAR_19.buffer.u8, VAR_16);
  FUNC_9(VAR_12 + *VAR_13, VAR_19.buffer.u8, VAR_16);
  *VAR_13 += VAR_16;
 }

 return VAR_3;
}
