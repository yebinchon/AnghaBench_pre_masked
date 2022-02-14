
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct section {size_t sz; size_t cap; int * buf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int * FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct section *VAR_2, const void *VAR_3, size_t VAR_4)
{
 uint8_t *VAR_5;

 if (VAR_2->buf == ((void*)0)) {
  VAR_2->sz = 0;
  VAR_2->cap = VAR_1;
  if ((VAR_2->buf = FUNC_1(VAR_2->cap)) == ((void*)0))
   FUNC_0(VAR_0, "malloc failed");
 }

 while (VAR_4 + VAR_2->sz > VAR_2->cap) {
  VAR_2->cap *= 2;
  if ((VAR_2->buf = FUNC_3(VAR_2->buf, VAR_2->cap)) == ((void*)0))
   FUNC_0(VAR_0, "realloc failed");
 }

 VAR_5 = VAR_2->buf;
 FUNC_2(&VAR_5[VAR_2->sz], VAR_3, VAR_4);
 VAR_2->sz += VAR_4;
}
