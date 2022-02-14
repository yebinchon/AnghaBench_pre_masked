
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pt_section {scalar_t__ ucount; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct pt_section *VAR_2)
{
 uint16_t VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = VAR_2->ucount;
 if (!VAR_3)
  return -VAR_1;

 VAR_2->ucount = VAR_3 - 1;
 return 0;
}
