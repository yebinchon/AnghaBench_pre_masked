
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct pt_section {int dummy; } ;
struct TYPE_2__ {int nsecs; int * laddr; struct pt_section** section; } ;
struct image_fixture {TYPE_1__ iscache; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct image_fixture *VAR_2,
         struct pt_section *VAR_3, uint64_t VAR_4)
{
 int VAR_5;

 if (!VAR_2)
  return -VAR_1;

 VAR_5 = VAR_2->iscache.nsecs;
 if (VAR_0 <= VAR_5)
  return -VAR_1;

 VAR_2->iscache.section[VAR_5] = VAR_3;
 VAR_2->iscache.laddr[VAR_5] = VAR_4;

 VAR_5 += 1;
 VAR_2->iscache.nsecs = VAR_5;

 return VAR_5;
}
