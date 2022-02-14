
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pt_asid {scalar_t__ cr3; scalar_t__ vmcs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

int FUNC_0(const struct pt_asid *VAR_3, const struct pt_asid *VAR_4)
{
 uint64_t VAR_5, VAR_6, VAR_7, VAR_8;

 if (!VAR_3 || !VAR_4)
  return -VAR_2;

 VAR_5 = VAR_3->cr3;
 VAR_6 = VAR_4->cr3;

 if (VAR_5 != VAR_6 && VAR_5 != VAR_0 && VAR_6 != VAR_0)
  return 0;

 VAR_7 = VAR_3->vmcs;
 VAR_8 = VAR_4->vmcs;

 if (VAR_7 != VAR_8 && VAR_7 != VAR_1 &&
     VAR_8 != VAR_1)
  return 0;

 return 1;
}
