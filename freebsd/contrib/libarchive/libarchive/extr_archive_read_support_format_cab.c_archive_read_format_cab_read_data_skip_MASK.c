
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cab {int end_of_entry_cleanup; int end_of_entry; TYPE_3__* entry_cfdata; TYPE_2__* entry_cffolder; scalar_t__ entry_bytes_remaining; scalar_t__ entry_unconsumed; int bytes_skipped; int read_data_invoked; scalar_t__ end_of_archive; } ;
struct archive_read {TYPE_1__* format; } ;
typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ unconsumed; } ;
struct TYPE_5__ {scalar_t__ comptype; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_4)
{
 struct cab *VAR_5;
 int64_t VAR_6;
 int VAR_7;

 VAR_5 = (struct cab *)(VAR_4->format->data);

 if (VAR_5->end_of_archive)
  return (VAR_0);

 if (!VAR_5->read_data_invoked) {
  VAR_5->bytes_skipped += VAR_5->entry_bytes_remaining;
  VAR_5->entry_bytes_remaining = 0;

  VAR_5->end_of_entry_cleanup = VAR_5->end_of_entry = 1;
  return (VAR_2);
 }

 if (VAR_5->entry_unconsumed) {

  VAR_7 = (int)FUNC_0(VAR_4, VAR_5->entry_unconsumed);
  VAR_5->entry_unconsumed = 0;
  if (VAR_7 < 0)
   return (VAR_7);
 } else if (VAR_5->entry_cfdata == ((void*)0)) {
  VAR_7 = FUNC_1(VAR_4);
  if (VAR_7 < 0)
   return (VAR_7);
 }


 if (VAR_5->end_of_entry_cleanup)
  return (VAR_2);





 VAR_6 = FUNC_0(VAR_4, VAR_5->entry_bytes_remaining);
 if (VAR_6 < 0)
  return (VAR_1);



 if (VAR_5->entry_cffolder->comptype == VAR_3 &&
     VAR_5->entry_cfdata != ((void*)0))
  VAR_5->entry_cfdata->unconsumed = 0;


 VAR_5->end_of_entry_cleanup = VAR_5->end_of_entry = 1;
 return (VAR_2);
}
