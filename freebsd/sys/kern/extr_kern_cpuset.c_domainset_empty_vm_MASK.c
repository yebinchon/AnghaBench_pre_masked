
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {int* ds_order; scalar_t__ ds_policy; int ds_prefer; int ds_mask; int ds_cnt; } ;
typedef int domainset_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_8(struct domainset *VAR_3)
{
 domainset_t VAR_4;
 int VAR_5, VAR_6;

 FUNC_6(&VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (FUNC_7(VAR_5))
   FUNC_4(VAR_5, &VAR_4);
 if (FUNC_5(&VAR_4, &VAR_3->ds_mask))
  return (1);


 FUNC_3(&VAR_3->ds_mask, &VAR_4);
 VAR_3->ds_cnt = FUNC_0(&VAR_3->ds_mask);
 for (VAR_5 = VAR_6 = 0; VAR_5 < FUNC_1(&VAR_3->ds_mask); VAR_5++)
  if (FUNC_2(VAR_5, &VAR_3->ds_mask))
   VAR_3->ds_order[VAR_6++] = VAR_5;


 if (VAR_3->ds_policy == VAR_0 &&
     FUNC_2(VAR_3->ds_prefer, &VAR_4)) {
  VAR_3->ds_policy = VAR_1;
  VAR_3->ds_prefer = -1;
 }

 return (0);
}
