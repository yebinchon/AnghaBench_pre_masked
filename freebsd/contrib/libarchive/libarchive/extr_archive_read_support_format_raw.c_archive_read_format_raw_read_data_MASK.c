
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw_info {size_t unconsumed; int end_of_file; size_t offset; } ;
struct archive_read {TYPE_1__* format; } ;
typedef void* ssize_t ;
typedef size_t int64_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct archive_read*,int,void**) ;
 int FUNC_1 (struct archive_read*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_2,
    const void **VAR_3, size_t *VAR_4, int64_t *VAR_5)
{
 struct raw_info *VAR_6;
 ssize_t VAR_7;

 VAR_6 = (struct raw_info *)(VAR_2->format->data);


 if (VAR_6->unconsumed) {
  FUNC_1(VAR_2, VAR_6->unconsumed);
  VAR_6->unconsumed = 0;
 }

 if (VAR_6->end_of_file)
  return (VAR_0);


 *VAR_3 = FUNC_0(VAR_2, 1, &VAR_7);
 if (VAR_7 > 0) {

  *VAR_4 = VAR_7;
  *VAR_5 = VAR_6->offset;
  VAR_6->offset += *VAR_4;
  VAR_6->unconsumed = VAR_7;
  return (VAR_1);
 } else if (0 == VAR_7) {

  VAR_6->end_of_file = 1;
  *VAR_4 = 0;
  *VAR_5 = VAR_6->offset;
  return (VAR_0);
 } else {

  *VAR_4 = 0;
  *VAR_5 = VAR_6->offset;
  return ((int)VAR_7);
 }
}
