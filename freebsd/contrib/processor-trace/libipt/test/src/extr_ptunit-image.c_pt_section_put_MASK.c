
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pt_section {scalar_t__ ucount; struct ifix_status* status; } ;
struct ifix_status {int bad_put; int deleted; } ;


 int VAR_0 ;

int FUNC_0(struct pt_section *VAR_1)
{
 struct ifix_status *VAR_2;
 uint16_t VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = VAR_1->status;
 if (!VAR_2)
  return -VAR_0;

 VAR_3 = VAR_1->ucount;
 if (!VAR_3) {
  VAR_2->bad_put += 1;

  return -VAR_0;
 }

 VAR_3 = --VAR_1->ucount;
 if (!VAR_3) {
  VAR_2->deleted += 1;

  if (VAR_2->deleted > 1)
   return -VAR_0;
 }

 return 0;
}
