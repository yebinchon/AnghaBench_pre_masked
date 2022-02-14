
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int tnt; } ;


 int FUNC_0 (struct pt_query_decoder*) ;
 int FUNC_1 (struct pt_query_decoder*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

int FUNC_4(struct pt_query_decoder *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;




 if (FUNC_2(&VAR_1->tnt)) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3 < 0)
   return VAR_3;
 }

 VAR_4 = FUNC_3(&VAR_1->tnt);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = VAR_4;

 return FUNC_1(VAR_1);
}
