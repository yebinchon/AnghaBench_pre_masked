
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {struct lruhash** array; } ;
struct lruhash {int dummy; } ;
typedef int hashvalue_type ;


 size_t FUNC_0 (struct slabhash*,int ) ;

struct lruhash* FUNC_1(struct slabhash* VAR_0, hashvalue_type VAR_1)
{
 return VAR_0->array[FUNC_0(VAR_0, VAR_1)];
}
