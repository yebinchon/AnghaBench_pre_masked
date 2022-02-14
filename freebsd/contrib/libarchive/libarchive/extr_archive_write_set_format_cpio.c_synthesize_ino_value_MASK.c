
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpio {size_t ino_list_next; size_t ino_list_size; TYPE_1__* ino_list; scalar_t__ ino_next; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ old; int new; } ;


 scalar_t__ FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 void* FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(struct cpio *VAR_0, struct archive_entry *VAR_1)
{
 int64_t VAR_2 = FUNC_0(VAR_1);
 int VAR_3;
 size_t VAR_4;







 if (VAR_2 == 0)
  return (0);


 if (FUNC_1(VAR_1) < 2) {
  return (int)(++VAR_0->ino_next);
 }



 for (VAR_4 = 0; VAR_4 < VAR_0->ino_list_next; ++VAR_4) {
  if (VAR_0->ino_list[VAR_4].old == VAR_2)
   return (VAR_0->ino_list[VAR_4].new);
 }


 VAR_3 = (int)(++VAR_0->ino_next);


 if (VAR_0->ino_list_size <= VAR_0->ino_list_next) {
  size_t VAR_5 = VAR_0->ino_list_size < 512
      ? 512 : VAR_0->ino_list_size * 2;
  void *VAR_6 = FUNC_2(VAR_0->ino_list,
      sizeof(VAR_0->ino_list[0]) * VAR_5);
  if (VAR_6 == ((void*)0))
   return (-1);

  VAR_0->ino_list_size = VAR_5;
  VAR_0->ino_list = VAR_6;
 }


 VAR_0->ino_list[VAR_0->ino_list_next].old = VAR_2;
 VAR_0->ino_list[VAR_0->ino_list_next].new = VAR_3;
 ++VAR_0->ino_list_next;
 return (VAR_3);
}
