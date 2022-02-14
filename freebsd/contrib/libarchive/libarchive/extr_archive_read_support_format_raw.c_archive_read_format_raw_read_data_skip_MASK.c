
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw_info {int end_of_file; scalar_t__ unconsumed; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_read*,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_1)
{
 struct raw_info *VAR_2 = (struct raw_info *)(VAR_1->format->data);


 if (VAR_2->unconsumed) {
  FUNC_0(VAR_1, VAR_2->unconsumed);
  VAR_2->unconsumed = 0;
 }
 VAR_2->end_of_file = 1;
 return (VAR_0);
}
