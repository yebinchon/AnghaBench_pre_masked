
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {unsigned long long bcsize; int mcount; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*) ;
 int VAR_0 ;

int FUNC_2(struct pt_section *VAR_1)
{
 int VAR_2, VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1->bcsize = 0ull;
 VAR_3 = --VAR_1->mcount;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 if (VAR_3 < 0)
  return -VAR_0;

 return 0;
}
