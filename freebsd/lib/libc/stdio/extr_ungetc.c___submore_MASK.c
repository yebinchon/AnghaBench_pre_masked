
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* _base; int _size; } ;
struct TYPE_5__ {unsigned char* _ubuf; unsigned char* _p; TYPE_1__ _ub; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (size_t) ;
 int FUNC_1 (void*,void*,size_t) ;
 unsigned char* FUNC_2 (unsigned char*,int,int) ;

__attribute__((used)) static int
FUNC_3(FILE *VAR_2)
{
 int VAR_3;
 unsigned char *VAR_4;

 if (VAR_2->_ub._base == VAR_2->_ubuf) {



  if ((VAR_4 = FUNC_0((size_t)VAR_0)) == ((void*)0))
   return (VAR_1);
  VAR_2->_ub._base = VAR_4;
  VAR_2->_ub._size = VAR_0;
  VAR_4 += VAR_0 - sizeof(VAR_2->_ubuf);
  for (VAR_3 = sizeof(VAR_2->_ubuf); --VAR_3 >= 0;)
   VAR_4[VAR_3] = VAR_2->_ubuf[VAR_3];
  VAR_2->_p = VAR_4;
  return (0);
 }
 VAR_3 = VAR_2->_ub._size;
 VAR_4 = FUNC_2(VAR_2->_ub._base, VAR_3, 2);
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 (void)FUNC_1((void *)(VAR_4 + VAR_3), (void *)VAR_4, (size_t)VAR_3);
 VAR_2->_p = VAR_4 + VAR_3;
 VAR_2->_ub._base = VAR_4;
 VAR_2->_ub._size = VAR_3 * 2;
 return (0);
}
