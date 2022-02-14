
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policydb_compat_info {int version; } ;


 int FUNC_0 (struct policydb_compat_info*) ;
 struct policydb_compat_info* VAR_0 ;

__attribute__((used)) static struct policydb_compat_info *FUNC_1(int VAR_1)
{
 int VAR_2;
 struct policydb_compat_info *VAR_3 = ((void*)0);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].version == VAR_1) {
   VAR_3 = &VAR_0[VAR_2];
   break;
  }
 }
 return VAR_3;
}
