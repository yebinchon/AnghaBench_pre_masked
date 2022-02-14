
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct df {scalar_t__ blocks_to_analyze; scalar_t__ blocks_to_scan; } ;
struct dataflow {struct dataflow* problem_data; struct df* df; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct dataflow*) ;
 int FUNC_2 (struct dataflow*) ;

__attribute__((used)) static void
FUNC_3 (struct dataflow *VAR_0)
{
  struct df *VAR_1 = VAR_0->df;

  if (VAR_0->problem_data)
    {
      FUNC_1 (VAR_0);
      FUNC_2 (VAR_0->problem_data);
    }

  if (VAR_1->blocks_to_scan)
    FUNC_0 (VAR_1->blocks_to_scan);

  if (VAR_1->blocks_to_analyze)
    FUNC_0 (VAR_1->blocks_to_analyze);

  FUNC_2 (VAR_0);
}
