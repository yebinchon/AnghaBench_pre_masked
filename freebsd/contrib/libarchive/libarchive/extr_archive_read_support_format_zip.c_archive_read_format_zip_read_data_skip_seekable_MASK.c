
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zip {scalar_t__ unconsumed; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct archive_read *VAR_1)
{
 struct zip *VAR_2;
 VAR_2 = (struct zip *)(VAR_1->format->data);

 VAR_2->unconsumed = 0;
 return (VAR_0);
}
