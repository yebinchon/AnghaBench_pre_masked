
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t offset; int fd; } ;
typedef TYPE_1__ FILE ;


 scalar_t__ FUNC_0 (int ,void*,size_t) ;

size_t
FUNC_1(void *VAR_0, size_t VAR_1, size_t VAR_2, FILE *VAR_3)
{
 size_t VAR_4;

 if (VAR_3 == ((void*)0))
  return 0;
 VAR_4 = (size_t)FUNC_0(VAR_3->fd, VAR_0, VAR_1 * VAR_2);
 VAR_3->offset += VAR_4;

 return (VAR_4);
}
