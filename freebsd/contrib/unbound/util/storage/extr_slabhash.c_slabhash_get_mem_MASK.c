
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabhash {int size; int * array; } ;
struct lruhash {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;

size_t FUNC_1(struct slabhash* VAR_0)
{
 size_t VAR_1, VAR_2 = sizeof(*VAR_0);
 VAR_2 += sizeof(struct lruhash*)*VAR_0->size;
 for(VAR_1=0; VAR_1<VAR_0->size; VAR_1++) {
  VAR_2 += FUNC_0(VAR_0->array[VAR_1]);
 }
 return VAR_2;
}
