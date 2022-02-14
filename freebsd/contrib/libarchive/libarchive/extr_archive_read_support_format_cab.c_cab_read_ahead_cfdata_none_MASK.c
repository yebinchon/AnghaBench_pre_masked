
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfdata {scalar_t__ uncompressed_bytes_remaining; void const* sum_ptr; scalar_t__ unconsumed; int uncompressed_size; int uncompressed_avail; } ;
struct cab {struct cfdata* entry_cfdata; } ;
struct archive_read {TYPE_1__* format; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 void* FUNC_0 (struct archive_read*,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct archive_read*) ;

__attribute__((used)) static const void *
FUNC_2(struct archive_read *VAR_0, ssize_t *VAR_1)
{
 struct cab *VAR_2 = (struct cab *)(VAR_0->format->data);
 struct cfdata *VAR_3;
 const void *VAR_4;

 VAR_3 = VAR_2->entry_cfdata;







 VAR_4 = FUNC_0(VAR_0, 1, VAR_1);
 if (*VAR_1 <= 0) {
  *VAR_1 = FUNC_1(VAR_0);
  return (((void*)0));
 }
 if (*VAR_1 > VAR_3->uncompressed_bytes_remaining)
  *VAR_1 = VAR_3->uncompressed_bytes_remaining;
 VAR_3->uncompressed_avail = VAR_3->uncompressed_size;
 VAR_3->unconsumed = *VAR_1;
 VAR_3->sum_ptr = VAR_4;
 return (VAR_4);
}
