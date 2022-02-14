
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pt_section {scalar_t__ ucount; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct pt_section *VAR_2)
{
 uint16_t VAR_3;
 int VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = VAR_2->ucount + 1;
 if (!VAR_3) {
  (void) FUNC_1(VAR_2);
  return -VAR_1;
 }

 VAR_2->ucount = VAR_3;

 return FUNC_1(VAR_2);
}
