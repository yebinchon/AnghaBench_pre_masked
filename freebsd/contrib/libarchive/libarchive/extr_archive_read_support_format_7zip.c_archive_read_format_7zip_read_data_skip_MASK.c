
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {TYPE_1__* format; } ;
struct _7zip {int end_of_entry; scalar_t__ entry_bytes_remaining; scalar_t__ pack_stream_bytes_unconsumed; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_read*) ;
 scalar_t__ FUNC_1 (struct archive_read*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_2)
{
 struct _7zip *VAR_3;
 int64_t VAR_4;

 VAR_3 = (struct _7zip *)(VAR_2->format->data);

 if (VAR_3->pack_stream_bytes_unconsumed)
  FUNC_0(VAR_2);


 if (VAR_3->end_of_entry)
  return (VAR_1);





 VAR_4 = FUNC_1(VAR_2, (size_t)VAR_3->entry_bytes_remaining);
 if (VAR_4 < 0)
  return (VAR_0);
 VAR_3->entry_bytes_remaining = 0;


 VAR_3->end_of_entry = 1;
 return (VAR_1);
}
