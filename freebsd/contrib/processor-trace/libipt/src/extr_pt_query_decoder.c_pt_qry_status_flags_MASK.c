
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_query_decoder {int tnt; } ;


 scalar_t__ FUNC_0 (struct pt_query_decoder const*) ;
 scalar_t__ FUNC_1 (struct pt_query_decoder const*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(const struct pt_query_decoder *VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_3)
  return -VAR_0;
 if (FUNC_2(&VAR_3->tnt)) {
  if (FUNC_1(VAR_3))
   VAR_4 |= VAR_2;

  if (FUNC_0(VAR_3))
   VAR_4 |= VAR_1;
 }

 return VAR_4;
}
