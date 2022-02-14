
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block {scalar_t__ out_use; scalar_t__* val; } ;
typedef scalar_t__ atomset ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct block *VAR_1, struct block *VAR_2)
{
 int VAR_3;
 atomset VAR_4 = VAR_2->out_use;

 if (VAR_4 == 0)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  if (FUNC_0(VAR_4, VAR_3))
   if (VAR_1->val[VAR_3] != VAR_2->val[VAR_3])
    return 1;
 return 0;
}
