
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int edge_iterator ;
typedef int * edge ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool
FUNC_2 (edge_iterator VAR_0, edge *VAR_1)
{
  if (!FUNC_1 (VAR_0))
    {
      *VAR_1 = FUNC_0 (VAR_0);
      return 1;
    }
  else
    {
      *VAR_1 = ((void*)0);
      return 0;
    }
}
