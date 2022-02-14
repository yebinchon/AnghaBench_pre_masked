
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpio {scalar_t__ entry_bytes_remaining; scalar_t__ entry_padding; scalar_t__ entry_bytes_unconsumed; } ;
struct archive_read {TYPE_1__* format; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_2)
{
 struct cpio *VAR_3 = (struct cpio *)(VAR_2->format->data);
 int64_t VAR_4 = VAR_3->entry_bytes_remaining + VAR_3->entry_padding +
  VAR_3->entry_bytes_unconsumed;

 if (VAR_4 != FUNC_0(VAR_2, VAR_4)) {
  return (VAR_0);
 }
 VAR_3->entry_bytes_remaining = 0;
 VAR_3->entry_padding = 0;
 VAR_3->entry_bytes_unconsumed = 0;
 return (VAR_1);
}
