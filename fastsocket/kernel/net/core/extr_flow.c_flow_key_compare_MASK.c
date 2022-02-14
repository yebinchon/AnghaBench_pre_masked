
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flowi {int dummy; } ;
typedef int flow_compare_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct flowi *VAR_0, struct flowi *VAR_1)
{
 flow_compare_t *VAR_2, *VAR_3, *VAR_4;
 const int VAR_5 = sizeof(struct flowi) / sizeof(flow_compare_t);

 FUNC_0(sizeof(struct flowi) % sizeof(flow_compare_t));

 VAR_2 = (flow_compare_t *) VAR_0;
 VAR_3 = VAR_2 + VAR_5;

 VAR_4 = (flow_compare_t *) VAR_1;

 do {
  if (*VAR_2++ != *VAR_4++)
   return 1;
 } while (VAR_2 < VAR_3);

 return 0;
}
