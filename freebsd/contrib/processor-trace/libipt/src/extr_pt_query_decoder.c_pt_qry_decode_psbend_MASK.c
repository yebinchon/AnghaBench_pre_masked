
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int pos; } ;


 int FUNC_0 (struct pt_query_decoder*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_1(struct pt_query_decoder *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;


 if (VAR_3)
  return 0;




 VAR_2->pos += VAR_1;
 return 0;
}
