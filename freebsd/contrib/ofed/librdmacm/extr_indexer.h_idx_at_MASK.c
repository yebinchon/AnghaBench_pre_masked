
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct indexer {TYPE_1__** array; } ;
struct TYPE_2__ {void* item; } ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void *FUNC_2(struct indexer *VAR_0, int VAR_1)
{
 return (VAR_0->array[FUNC_0(VAR_1)] + FUNC_1(VAR_1))->item;
}
