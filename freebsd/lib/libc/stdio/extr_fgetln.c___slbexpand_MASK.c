
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t _size; void* _base; } ;
struct TYPE_5__ {TYPE_1__ _lb; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,size_t) ;

int
FUNC_1(FILE *VAR_3, size_t VAR_4)
{
 void *VAR_5;

 if (VAR_3->_lb._size >= VAR_4)
  return (0);
 if (VAR_4 > VAR_1) {
  VAR_2 = VAR_0;
  return (-1);
 }
 if ((VAR_5 = FUNC_0(VAR_3->_lb._base, VAR_4)) == ((void*)0))
  return (-1);
 VAR_3->_lb._base = VAR_5;
 VAR_3->_lb._size = VAR_4;
 return (0);
}
