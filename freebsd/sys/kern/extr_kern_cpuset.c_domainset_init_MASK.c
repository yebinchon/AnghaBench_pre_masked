
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {int ds_prefer; void* ds_policy; int ds_mask; } ;


 int FUNC_0 (int *,int *) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct domainset*,int *) ;
 int VAR_2 ;
 struct domainset* VAR_3 ;
 struct domainset* VAR_4 ;
 struct domainset VAR_5 ;
 int VAR_6 ;

void
FUNC_4(void)
{
 struct domainset *VAR_7;
 int VAR_8;

 VAR_7 = &VAR_5;
 FUNC_0(&VAR_2, &VAR_7->ds_mask);
 VAR_7->ds_policy = VAR_1;
 VAR_7->ds_prefer = -1;
 FUNC_3(VAR_7, ((void*)0));

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_7 = &VAR_3[VAR_8];
  FUNC_2(&VAR_7->ds_mask);
  FUNC_1(VAR_8, &VAR_7->ds_mask);
  VAR_7->ds_policy = VAR_1;
  FUNC_3(VAR_7, ((void*)0));

  VAR_7 = &VAR_4[VAR_8];
  FUNC_0(&VAR_2, &VAR_7->ds_mask);
  VAR_7->ds_policy = VAR_0;
  VAR_7->ds_prefer = VAR_8;
  FUNC_3(VAR_7, ((void*)0));
 }
}
