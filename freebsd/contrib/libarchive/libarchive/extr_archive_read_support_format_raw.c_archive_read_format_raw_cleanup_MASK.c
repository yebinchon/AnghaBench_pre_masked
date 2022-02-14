
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raw_info {int dummy; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (struct raw_info*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_1)
{
 struct raw_info *VAR_2;

 VAR_2 = (struct raw_info *)(VAR_1->format->data);
 FUNC_0(VAR_2);
 VAR_1->format->data = ((void*)0);
 return (VAR_0);
}
