
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dba_array {int flags; scalar_t__ pos; scalar_t__ ec; scalar_t__ ed; scalar_t__ eu; scalar_t__ ea; void* em; void* ep; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int) ;
 struct dba_array* FUNC_1 (int) ;
 void* FUNC_2 (int *,scalar_t__,int) ;

struct dba_array *
FUNC_3(int32_t VAR_0, int VAR_1)
{
 struct dba_array *VAR_2;

 FUNC_0(VAR_0 > 0);
 VAR_2 = FUNC_1(sizeof(*VAR_2));
 VAR_2->ep = FUNC_2(((void*)0), VAR_0, sizeof(*VAR_2->ep));
 VAR_2->em = FUNC_2(((void*)0), VAR_0, sizeof(*VAR_2->em));
 VAR_2->ea = VAR_0;
 VAR_2->eu = 0;
 VAR_2->ed = 0;
 VAR_2->ec = 0;
 VAR_2->flags = VAR_1;
 VAR_2->pos = 0;
 return VAR_2;
}
