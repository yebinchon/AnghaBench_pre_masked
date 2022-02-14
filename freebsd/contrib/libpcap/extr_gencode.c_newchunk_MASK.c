
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct chunk {size_t n_left; int * m; } ;
struct TYPE_4__ {size_t cur_chunk; struct chunk* chunks; } ;
typedef TYPE_1__ compiler_state_t ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (char*,int ,size_t) ;

__attribute__((used)) static void *
FUNC_4(compiler_state_t *VAR_2, size_t VAR_3)
{
 struct chunk *VAR_4;
 int VAR_5;
 size_t VAR_6;



 VAR_3 = (VAR_3 + sizeof(long) - 1) & ~(sizeof(long) - 1);





 VAR_4 = &VAR_2->chunks[VAR_2->cur_chunk];
 if (VAR_3 > VAR_4->n_left) {
  ++VAR_4;
  VAR_5 = ++VAR_2->cur_chunk;
  if (VAR_5 >= VAR_1)
   FUNC_1(VAR_2, "out of memory");
  VAR_6 = VAR_0 << VAR_5;
  VAR_4->m = (void *)FUNC_2(VAR_6);
  if (VAR_4->m == ((void*)0))
   FUNC_1(VAR_2, "out of memory");
  FUNC_3((char *)VAR_4->m, 0, VAR_6);
  VAR_4->n_left = VAR_6;
  if (VAR_3 > VAR_6)
   FUNC_1(VAR_2, "out of memory");
 }
 VAR_4->n_left -= VAR_3;
 return (void *)((char *)VAR_4->m + VAR_4->n_left);
}
