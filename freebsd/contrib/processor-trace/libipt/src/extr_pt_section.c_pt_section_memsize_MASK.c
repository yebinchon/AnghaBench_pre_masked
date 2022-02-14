
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pt_section {int dummy; } ;


 int FUNC_0 (struct pt_section*) ;
 int FUNC_1 (struct pt_section*,int *) ;
 int FUNC_2 (struct pt_section*) ;

int FUNC_3(struct pt_section *VAR_0, uint64_t *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_3 = FUNC_1(VAR_0, VAR_1);

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 return VAR_3;
}
