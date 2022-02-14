
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pt_section {int mcount; int ucount; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*) ;
 int FUNC_2 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_3(struct pt_section *VAR_1)
{
 uint16_t VAR_2, VAR_3;
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = VAR_1->mcount;
 VAR_2 = VAR_1->ucount;
 if (VAR_2 > 1) {
  VAR_1->ucount = VAR_2 - 1;
  return FUNC_2(VAR_1);
 }

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 if (!VAR_2 || VAR_3)
  return -VAR_0;

 FUNC_0(VAR_1);
 return 0;
}
