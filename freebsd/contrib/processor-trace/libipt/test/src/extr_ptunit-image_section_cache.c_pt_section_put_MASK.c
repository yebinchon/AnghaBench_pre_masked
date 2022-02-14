
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int ucount; int lock; int alock; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pt_section*) ;
 int FUNC_3 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_4(struct pt_section *VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = --VAR_1->ucount;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 if (!VAR_3) {




  FUNC_0(VAR_1);
 }

 return 0;
}
