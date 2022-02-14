
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct cfdata {scalar_t__ unconsumed; scalar_t__ read_offset; scalar_t__ uncompressed_avail; scalar_t__ compressed_bytes_remaining; int uncompressed_bytes_remaining; } ;
struct cab {int cab_offset; TYPE_2__* entry_cffolder; struct cfdata* entry_cfdata; } ;
struct archive_read {TYPE_1__* format; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ comptype; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (struct archive_read*) ;
 int FUNC_2 (struct archive_read*,size_t) ;

__attribute__((used)) static int64_t
FUNC_3(struct archive_read *VAR_1, int64_t VAR_2)
{
 struct cab *VAR_3 = (struct cab *)(VAR_1->format->data);
 struct cfdata *VAR_4;
 int64_t VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = VAR_3->entry_cfdata;
 VAR_6 = VAR_2;
 if (VAR_3->entry_cffolder->comptype == VAR_0) {
  if (VAR_2 < VAR_4->unconsumed)
   VAR_5 = VAR_2;
  else
   VAR_5 = VAR_4->unconsumed;
  VAR_6 -= VAR_5;
  VAR_4->read_offset += (uint16_t)VAR_5;
  VAR_4->uncompressed_bytes_remaining -= (uint16_t)VAR_5;
  VAR_4->unconsumed -= VAR_5;
 } else {
  VAR_5 = VAR_4->uncompressed_avail - VAR_4->read_offset;
  if (VAR_5 > 0) {
   if (VAR_2 < VAR_5)
    VAR_5 = VAR_2;
   VAR_6 -= VAR_5;
   VAR_4->read_offset += (uint16_t)VAR_5;
   VAR_4->uncompressed_bytes_remaining -= (uint16_t)VAR_5;
  }

  if (VAR_4->unconsumed) {
   VAR_5 = VAR_4->unconsumed;
   VAR_4->unconsumed = 0;
  } else
   VAR_5 = 0;
 }
 if (VAR_5) {

  FUNC_2(VAR_1, (size_t)VAR_5);


  FUNC_0(VAR_1, VAR_5);
  VAR_3->cab_offset += VAR_5;
  VAR_4->compressed_bytes_remaining -= (uint16_t)VAR_5;
  if (VAR_4->compressed_bytes_remaining == 0) {
   VAR_7 = FUNC_1(VAR_1);
   if (VAR_7 < 0)
    return (VAR_7);
  }
 }
 return (VAR_6);
}
