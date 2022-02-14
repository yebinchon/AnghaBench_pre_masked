
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lha {scalar_t__ entry_is_compressed; int entry_offset; scalar_t__ end_of_entry; scalar_t__ entry_unconsumed; } ;
struct archive_read {TYPE_1__* format; } ;
typedef int int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (struct archive_read*) ;
 int FUNC_2 (struct archive_read*,void const**,size_t*,int *) ;
 int FUNC_3 (struct archive_read*,void const**,size_t*,int *) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_0,
    const void **VAR_1, size_t *VAR_2, int64_t *VAR_3)
{
 struct lha *VAR_4 = (struct lha *)(VAR_0->format->data);
 int VAR_5;

 if (VAR_4->entry_unconsumed) {

  FUNC_0(VAR_0, VAR_4->entry_unconsumed);
  VAR_4->entry_unconsumed = 0;
 }
 if (VAR_4->end_of_entry) {
  *VAR_3 = VAR_4->entry_offset;
  *VAR_2 = 0;
  *VAR_1 = ((void*)0);
  return (FUNC_1(VAR_0));
 }

 if (VAR_4->entry_is_compressed)
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 else

  VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 return (VAR_5);
}
