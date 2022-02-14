
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lha {int end_of_entry_cleanup; int end_of_entry; scalar_t__ entry_bytes_remaining; scalar_t__ entry_unconsumed; } ;
struct archive_read {TYPE_1__* format; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_read*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_2)
{
 struct lha *VAR_3;
 int64_t VAR_4;

 VAR_3 = (struct lha *)(VAR_2->format->data);

 if (VAR_3->entry_unconsumed) {

  FUNC_0(VAR_2, VAR_3->entry_unconsumed);
  VAR_3->entry_unconsumed = 0;
 }


 if (VAR_3->end_of_entry_cleanup)
  return (VAR_1);





 VAR_4 = FUNC_0(VAR_2, VAR_3->entry_bytes_remaining);
 if (VAR_4 < 0)
  return (VAR_0);


 VAR_3->end_of_entry_cleanup = VAR_3->end_of_entry = 1;
 return (VAR_1);
}
